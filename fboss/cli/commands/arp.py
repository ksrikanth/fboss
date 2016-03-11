#!/usr/bin/env python3
#
#  Copyright (c) 2004-present, Facebook, Inc.
#  All rights reserved.
#
#  This source code is licensed under the BSD-style license found in the
#  LICENSE file in the root directory of this source tree. An additional grant
#  of patent rights can be found in the PATENTS file in the same directory.
#

from fboss.cli.commands import commands as cmds


class ArpTableCmd(cmds.FbossCmd):
    def run(self):
        self._client = self._create_ctrl_client()
        resp = self._client.getArpTable()
        name = 'ARP'
        width = 16
        cmds.print_neighbor_table(resp, name, width)
