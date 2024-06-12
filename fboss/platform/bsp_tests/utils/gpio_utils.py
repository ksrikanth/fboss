import re
from dataclasses import dataclass
from typing import List, Optional

from fboss.platform.bsp_tests.utils.cmd_utils import run_cmd


@dataclass
class GpioDetectResults:
    name: str
    label: str
    lines: int


@dataclass
class GpioInfoResult:
    name: str
    lineNum: int
    direction: str


def gpiodetect(label: Optional[str] = None) -> List[GpioDetectResults]:
    ret: List[GpioDetectResults] = []
    results = run_cmd(["gpiodetect"]).stdout.decode()
    # format of gpiodetect output is:
    # <name> [<label>] (<num_lines> lines)
    for line in results.splitlines():
        match = re.match(r"(\w+)\s+\[(.*?)\]\s+\((.*?) lines\)", line)
        if match:
            name = match.group(1)
            label = match.group(2)
            num_lines = int(match.group(3))
            ret.append(GpioDetectResults(name, label, num_lines))
    if label is None:
        return ret
    else:
        return [x for x in ret if label == x.label]
    return ret


def gpioinfo(name: str) -> List[GpioInfoResult]:
    """
    the output format of gpioinfo changes significantly between
    versions, so instead of strictly parsing it, we only extract
    the values that we will want to check to avoid needing a
    lot of logic to deal with the differences.
    """
    ret: List[GpioInfoResult] = []
    results = run_cmd(["gpioinfo", name]).stdout.decode()
    for line in results.splitlines()[1:]:
        parts = line.split()
        lineNum = parts[1][:-1]  # remove ":" from line number
        name = parts[2]
        direction = "None"
        if "input" in parts:
            direction = "input"
        elif "output" in parts:
            direction = "output"
        ret.append(GpioInfoResult(name, lineNum, direction))

    return ret
