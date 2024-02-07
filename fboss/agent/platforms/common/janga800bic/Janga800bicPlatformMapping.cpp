/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/agent/platforms/common/janga800bic/Janga800bicPlatformMapping.h"

namespace {
constexpr auto kJsonPlatformMappingStr = R"(
{
  "ports": {
    "1": {
        "mapping": {
          "id": 1,
          "name": "rcy1/1/55",
          "controllingPort": 1,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_RCY-slot1/chip1/core55",
                "lane": 0
              }
            }
          ],
          "portType": 3,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_RCY-slot1/chip1/core55",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "2": {
        "mapping": {
          "id": 2,
          "name": "eth1/1/1",
          "controllingPort": 2,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core13",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core13",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core13",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core13",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 3,
          "attachedCorePortIndex": 2,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3": {
        "mapping": {
          "id": 3,
          "name": "eth1/1/5",
          "controllingPort": 3,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core13",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core13",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core13",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core13",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 3,
          "attachedCorePortIndex": 3,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "4": {
        "mapping": {
          "id": 4,
          "name": "eth1/2/1",
          "controllingPort": 4,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core0",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core0",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core0",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core0",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 4,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "5": {
        "mapping": {
          "id": 5,
          "name": "eth1/2/5",
          "controllingPort": 5,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core0",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core0",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core0",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core0",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 5,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "6": {
        "mapping": {
          "id": 6,
          "name": "eth1/41/1",
          "controllingPort": 6,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core18",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-QSFP28-slot1/chip41",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core18",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-QSFP28-slot1/chip41",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core18",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-QSFP28-slot1/chip41",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core18",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-QSFP28-slot1/chip41",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 4,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 6,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "22": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core18",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core18",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core18",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core18",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-QSFP28-slot1/chip41",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-QSFP28-slot1/chip41",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-QSFP28-slot1/chip41",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-QSFP28-slot1/chip41",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "7": {
        "mapping": {
          "id": 7,
          "name": "eth1/47/1",
          "controllingPort": 7,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core1",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip47",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core1",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip47",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core1",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip47",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core1",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip47",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core1",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip47",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core1",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip47",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core1",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip47",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core1",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip47",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 7,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip47",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip47",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip47",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip47",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip47",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip47",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip47",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip47",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "8": {
        "mapping": {
          "id": 8,
          "name": "eth1/48/1",
          "controllingPort": 8,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core2",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip48",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core2",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip48",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core2",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip48",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core2",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip48",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core2",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip48",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core2",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip48",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core2",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip48",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core2",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip48",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 8,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip48",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip48",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip48",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip48",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip48",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip48",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip48",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip48",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "9": {
        "mapping": {
          "id": 9,
          "name": "eth1/49/1",
          "controllingPort": 9,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core3",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip49",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core3",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip49",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core3",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip49",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core3",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip49",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core3",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip49",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core3",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip49",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core3",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip49",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core3",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip49",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 9,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip49",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip49",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip49",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip49",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip49",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip49",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip49",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip49",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "10": {
        "mapping": {
          "id": 10,
          "name": "eth1/50/1",
          "controllingPort": 10,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core4",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip50",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core4",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip50",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core4",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip50",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core4",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip50",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core4",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip50",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core4",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip50",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core4",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip50",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core4",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip50",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 10,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip50",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip50",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip50",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip50",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip50",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip50",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip50",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip50",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "11": {
        "mapping": {
          "id": 11,
          "name": "eth1/51/1",
          "controllingPort": 11,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core5",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip51",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core5",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip51",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core5",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip51",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core5",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip51",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core5",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip51",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core5",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip51",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core5",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip51",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core5",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip51",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 1,
          "attachedCorePortIndex": 11,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip51",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip51",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip51",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip51",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip51",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip51",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip51",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip51",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "12": {
        "mapping": {
          "id": 12,
          "name": "eth1/52/1",
          "controllingPort": 12,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core6",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip52",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core6",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip52",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core6",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip52",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core6",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip52",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core6",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip52",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core6",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip52",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core6",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip52",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core6",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip52",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 1,
          "attachedCorePortIndex": 12,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip52",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip52",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip52",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip52",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip52",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip52",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip52",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip52",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "13": {
        "mapping": {
          "id": 13,
          "name": "eth1/53/1",
          "controllingPort": 13,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core7",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip53",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core7",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip53",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core7",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip53",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core7",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip53",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core7",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip53",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core7",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip53",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core7",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip53",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core7",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip53",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 1,
          "attachedCorePortIndex": 13,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip53",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip53",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip53",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip53",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip53",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip53",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip53",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip53",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "14": {
        "mapping": {
          "id": 14,
          "name": "eth1/54/1",
          "controllingPort": 14,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core8",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip54",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core8",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip54",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core8",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip54",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core8",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip54",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core8",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip54",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core8",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip54",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core8",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip54",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core8",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip54",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 1,
          "attachedCorePortIndex": 14,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip54",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip54",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip54",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip54",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip54",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip54",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip54",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip54",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "15": {
        "mapping": {
          "id": 15,
          "name": "eth1/55/1",
          "controllingPort": 15,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core9",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip55",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core9",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip55",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core9",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip55",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core9",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip55",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core9",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip55",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core9",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip55",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core9",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip55",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core9",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip55",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 2,
          "attachedCorePortIndex": 15,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip55",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip55",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip55",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip55",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip55",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip55",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip55",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip55",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "16": {
        "mapping": {
          "id": 16,
          "name": "eth1/56/1",
          "controllingPort": 16,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core10",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip56",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core10",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip56",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core10",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip56",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core10",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip56",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core10",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip56",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core10",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip56",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core10",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip56",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core10",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip56",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 2,
          "attachedCorePortIndex": 16,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip56",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip56",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip56",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip56",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip56",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip56",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip56",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip56",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "17": {
        "mapping": {
          "id": 17,
          "name": "eth1/57/1",
          "controllingPort": 17,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core11",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip57",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core11",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip57",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core11",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip57",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core11",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip57",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core11",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip57",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core11",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip57",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core11",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip57",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core11",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip57",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 2,
          "attachedCorePortIndex": 17,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip57",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip57",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip57",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip57",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip57",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip57",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip57",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip57",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "18": {
        "mapping": {
          "id": 18,
          "name": "eth1/58/1",
          "controllingPort": 18,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core12",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip58",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core12",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip58",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core12",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip58",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core12",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip58",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core12",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip58",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core12",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip58",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core12",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip58",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core12",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip58",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 2,
          "attachedCorePortIndex": 18,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip58",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip58",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip58",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip58",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip58",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip58",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip58",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip58",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "19": {
        "mapping": {
          "id": 19,
          "name": "eth1/59/1",
          "controllingPort": 19,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core14",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip59",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core14",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip59",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core14",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip59",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core14",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip59",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core14",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip59",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core14",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip59",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core14",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip59",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core14",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip59",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 3,
          "attachedCorePortIndex": 19,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip59",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip59",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip59",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip59",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip59",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip59",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip59",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip59",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "20": {
        "mapping": {
          "id": 20,
          "name": "eth1/60/1",
          "controllingPort": 20,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core15",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip60",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core15",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip60",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core15",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip60",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core15",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip60",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core15",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip60",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core15",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip60",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core15",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip60",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core15",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip60",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 3,
          "attachedCorePortIndex": 20,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip60",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip60",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip60",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip60",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip60",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip60",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip60",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip60",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "21": {
        "mapping": {
          "id": 21,
          "name": "eth1/61/1",
          "controllingPort": 21,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core16",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip61",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core16",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip61",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core16",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip61",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core16",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip61",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core16",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip61",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core16",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip61",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core16",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip61",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core16",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip61",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 3,
          "attachedCorePortIndex": 21,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip61",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip61",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip61",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip61",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip61",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip61",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip61",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip61",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "22": {
        "mapping": {
          "id": 22,
          "name": "eth1/62/1",
          "controllingPort": 22,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core17",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip62",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core17",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip62",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core17",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip62",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core17",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip62",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core17",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip62",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core17",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip62",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core17",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip62",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core17",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip62",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 3,
          "attachedCorePortIndex": 22,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip62",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip62",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip62",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip62",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip62",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip62",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip62",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip62",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1024": {
        "mapping": {
          "id": 1024,
          "name": "fab1/22/1",
          "controllingPort": 1024,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core0",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1025": {
        "mapping": {
          "id": 1025,
          "name": "fab1/22/2",
          "controllingPort": 1025,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core0",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1026": {
        "mapping": {
          "id": 1026,
          "name": "fab1/22/3",
          "controllingPort": 1026,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core0",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1027": {
        "mapping": {
          "id": 1027,
          "name": "fab1/22/4",
          "controllingPort": 1027,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core0",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1028": {
        "mapping": {
          "id": 1028,
          "name": "fab1/22/5",
          "controllingPort": 1028,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core0",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1029": {
        "mapping": {
          "id": 1029,
          "name": "fab1/22/6",
          "controllingPort": 1029,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core0",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1030": {
        "mapping": {
          "id": 1030,
          "name": "fab1/22/7",
          "controllingPort": 1030,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core0",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1031": {
        "mapping": {
          "id": 1031,
          "name": "fab1/22/8",
          "controllingPort": 1031,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core0",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1032": {
        "mapping": {
          "id": 1032,
          "name": "fab1/21/1",
          "controllingPort": 1032,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core1",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1033": {
        "mapping": {
          "id": 1033,
          "name": "fab1/21/2",
          "controllingPort": 1033,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core1",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1034": {
        "mapping": {
          "id": 1034,
          "name": "fab1/21/3",
          "controllingPort": 1034,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core1",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1035": {
        "mapping": {
          "id": 1035,
          "name": "fab1/21/4",
          "controllingPort": 1035,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core1",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1036": {
        "mapping": {
          "id": 1036,
          "name": "fab1/21/5",
          "controllingPort": 1036,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core1",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1037": {
        "mapping": {
          "id": 1037,
          "name": "fab1/21/6",
          "controllingPort": 1037,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core1",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1038": {
        "mapping": {
          "id": 1038,
          "name": "fab1/21/7",
          "controllingPort": 1038,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core1",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1039": {
        "mapping": {
          "id": 1039,
          "name": "fab1/21/8",
          "controllingPort": 1039,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core1",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1040": {
        "mapping": {
          "id": 1040,
          "name": "fab1/20/1",
          "controllingPort": 1040,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core2",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1041": {
        "mapping": {
          "id": 1041,
          "name": "fab1/20/2",
          "controllingPort": 1041,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core2",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1042": {
        "mapping": {
          "id": 1042,
          "name": "fab1/20/3",
          "controllingPort": 1042,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core2",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1043": {
        "mapping": {
          "id": 1043,
          "name": "fab1/20/4",
          "controllingPort": 1043,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core2",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1044": {
        "mapping": {
          "id": 1044,
          "name": "fab1/20/5",
          "controllingPort": 1044,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core2",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1045": {
        "mapping": {
          "id": 1045,
          "name": "fab1/20/6",
          "controllingPort": 1045,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core2",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1046": {
        "mapping": {
          "id": 1046,
          "name": "fab1/20/7",
          "controllingPort": 1046,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core2",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1047": {
        "mapping": {
          "id": 1047,
          "name": "fab1/20/8",
          "controllingPort": 1047,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core2",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1048": {
        "mapping": {
          "id": 1048,
          "name": "fab1/19/1",
          "controllingPort": 1048,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core3",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1049": {
        "mapping": {
          "id": 1049,
          "name": "fab1/19/2",
          "controllingPort": 1049,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core3",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1050": {
        "mapping": {
          "id": 1050,
          "name": "fab1/19/3",
          "controllingPort": 1050,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core3",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1051": {
        "mapping": {
          "id": 1051,
          "name": "fab1/19/4",
          "controllingPort": 1051,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core3",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1052": {
        "mapping": {
          "id": 1052,
          "name": "fab1/19/5",
          "controllingPort": 1052,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core3",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1053": {
        "mapping": {
          "id": 1053,
          "name": "fab1/19/6",
          "controllingPort": 1053,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core3",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1054": {
        "mapping": {
          "id": 1054,
          "name": "fab1/19/7",
          "controllingPort": 1054,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core3",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1055": {
        "mapping": {
          "id": 1055,
          "name": "fab1/19/8",
          "controllingPort": 1055,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core3",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1056": {
        "mapping": {
          "id": 1056,
          "name": "fab1/18/1",
          "controllingPort": 1056,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core4",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1057": {
        "mapping": {
          "id": 1057,
          "name": "fab1/18/2",
          "controllingPort": 1057,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core4",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1058": {
        "mapping": {
          "id": 1058,
          "name": "fab1/18/3",
          "controllingPort": 1058,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core4",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1059": {
        "mapping": {
          "id": 1059,
          "name": "fab1/18/4",
          "controllingPort": 1059,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core4",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1060": {
        "mapping": {
          "id": 1060,
          "name": "fab1/18/5",
          "controllingPort": 1060,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core4",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1061": {
        "mapping": {
          "id": 1061,
          "name": "fab1/18/6",
          "controllingPort": 1061,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core4",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1062": {
        "mapping": {
          "id": 1062,
          "name": "fab1/18/7",
          "controllingPort": 1062,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core4",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1063": {
        "mapping": {
          "id": 1063,
          "name": "fab1/18/8",
          "controllingPort": 1063,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core4",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1064": {
        "mapping": {
          "id": 1064,
          "name": "fab1/17/1",
          "controllingPort": 1064,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core5",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1065": {
        "mapping": {
          "id": 1065,
          "name": "fab1/17/2",
          "controllingPort": 1065,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core5",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1066": {
        "mapping": {
          "id": 1066,
          "name": "fab1/17/3",
          "controllingPort": 1066,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core5",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1067": {
        "mapping": {
          "id": 1067,
          "name": "fab1/17/4",
          "controllingPort": 1067,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core5",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1068": {
        "mapping": {
          "id": 1068,
          "name": "fab1/17/5",
          "controllingPort": 1068,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core5",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1069": {
        "mapping": {
          "id": 1069,
          "name": "fab1/17/6",
          "controllingPort": 1069,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core5",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1070": {
        "mapping": {
          "id": 1070,
          "name": "fab1/17/7",
          "controllingPort": 1070,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core5",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1071": {
        "mapping": {
          "id": 1071,
          "name": "fab1/17/8",
          "controllingPort": 1071,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core5",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1072": {
        "mapping": {
          "id": 1072,
          "name": "fab1/14/1",
          "controllingPort": 1072,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core6",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1073": {
        "mapping": {
          "id": 1073,
          "name": "fab1/14/2",
          "controllingPort": 1073,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core6",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1074": {
        "mapping": {
          "id": 1074,
          "name": "fab1/14/3",
          "controllingPort": 1074,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core6",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1075": {
        "mapping": {
          "id": 1075,
          "name": "fab1/14/4",
          "controllingPort": 1075,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core6",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1076": {
        "mapping": {
          "id": 1076,
          "name": "fab1/14/5",
          "controllingPort": 1076,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core6",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1077": {
        "mapping": {
          "id": 1077,
          "name": "fab1/14/6",
          "controllingPort": 1077,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core6",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1078": {
        "mapping": {
          "id": 1078,
          "name": "fab1/14/7",
          "controllingPort": 1078,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core6",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1079": {
        "mapping": {
          "id": 1079,
          "name": "fab1/14/8",
          "controllingPort": 1079,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core6",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1080": {
        "mapping": {
          "id": 1080,
          "name": "fab1/15/1",
          "controllingPort": 1080,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core7",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1081": {
        "mapping": {
          "id": 1081,
          "name": "fab1/15/2",
          "controllingPort": 1081,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core7",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1082": {
        "mapping": {
          "id": 1082,
          "name": "fab1/15/3",
          "controllingPort": 1082,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core7",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1083": {
        "mapping": {
          "id": 1083,
          "name": "fab1/15/4",
          "controllingPort": 1083,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core7",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1084": {
        "mapping": {
          "id": 1084,
          "name": "fab1/15/5",
          "controllingPort": 1084,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core7",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1085": {
        "mapping": {
          "id": 1085,
          "name": "fab1/15/6",
          "controllingPort": 1085,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core7",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1086": {
        "mapping": {
          "id": 1086,
          "name": "fab1/15/7",
          "controllingPort": 1086,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core7",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1087": {
        "mapping": {
          "id": 1087,
          "name": "fab1/15/8",
          "controllingPort": 1087,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core7",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1088": {
        "mapping": {
          "id": 1088,
          "name": "fab1/16/1",
          "controllingPort": 1088,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core8",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1089": {
        "mapping": {
          "id": 1089,
          "name": "fab1/16/2",
          "controllingPort": 1089,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core8",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1090": {
        "mapping": {
          "id": 1090,
          "name": "fab1/16/3",
          "controllingPort": 1090,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core8",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1091": {
        "mapping": {
          "id": 1091,
          "name": "fab1/16/4",
          "controllingPort": 1091,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core8",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1092": {
        "mapping": {
          "id": 1092,
          "name": "fab1/16/5",
          "controllingPort": 1092,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core8",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1093": {
        "mapping": {
          "id": 1093,
          "name": "fab1/16/6",
          "controllingPort": 1093,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core8",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1094": {
        "mapping": {
          "id": 1094,
          "name": "fab1/16/7",
          "controllingPort": 1094,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core8",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1095": {
        "mapping": {
          "id": 1095,
          "name": "fab1/16/8",
          "controllingPort": 1095,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core8",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1096": {
        "mapping": {
          "id": 1096,
          "name": "fab1/13/1",
          "controllingPort": 1096,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core9",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1097": {
        "mapping": {
          "id": 1097,
          "name": "fab1/13/2",
          "controllingPort": 1097,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core9",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1098": {
        "mapping": {
          "id": 1098,
          "name": "fab1/13/3",
          "controllingPort": 1098,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core9",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1099": {
        "mapping": {
          "id": 1099,
          "name": "fab1/13/4",
          "controllingPort": 1099,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core9",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1100": {
        "mapping": {
          "id": 1100,
          "name": "fab1/13/5",
          "controllingPort": 1100,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core9",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1101": {
        "mapping": {
          "id": 1101,
          "name": "fab1/13/6",
          "controllingPort": 1101,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core9",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1102": {
        "mapping": {
          "id": 1102,
          "name": "fab1/13/7",
          "controllingPort": 1102,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core9",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1103": {
        "mapping": {
          "id": 1103,
          "name": "fab1/13/8",
          "controllingPort": 1103,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core9",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1104": {
        "mapping": {
          "id": 1104,
          "name": "fab1/4/1",
          "controllingPort": 1104,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core10",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1105": {
        "mapping": {
          "id": 1105,
          "name": "fab1/4/2",
          "controllingPort": 1105,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core10",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1106": {
        "mapping": {
          "id": 1106,
          "name": "fab1/4/3",
          "controllingPort": 1106,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core10",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1107": {
        "mapping": {
          "id": 1107,
          "name": "fab1/4/4",
          "controllingPort": 1107,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core10",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1108": {
        "mapping": {
          "id": 1108,
          "name": "fab1/4/5",
          "controllingPort": 1108,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core10",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1109": {
        "mapping": {
          "id": 1109,
          "name": "fab1/4/6",
          "controllingPort": 1109,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core10",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1110": {
        "mapping": {
          "id": 1110,
          "name": "fab1/4/7",
          "controllingPort": 1110,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core10",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1111": {
        "mapping": {
          "id": 1111,
          "name": "fab1/4/8",
          "controllingPort": 1111,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core10",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1112": {
        "mapping": {
          "id": 1112,
          "name": "fab1/3/1",
          "controllingPort": 1112,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core11",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1113": {
        "mapping": {
          "id": 1113,
          "name": "fab1/3/2",
          "controllingPort": 1113,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core11",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1114": {
        "mapping": {
          "id": 1114,
          "name": "fab1/3/3",
          "controllingPort": 1114,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core11",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1115": {
        "mapping": {
          "id": 1115,
          "name": "fab1/3/4",
          "controllingPort": 1115,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core11",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1116": {
        "mapping": {
          "id": 1116,
          "name": "fab1/3/5",
          "controllingPort": 1116,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core11",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1117": {
        "mapping": {
          "id": 1117,
          "name": "fab1/3/6",
          "controllingPort": 1117,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core11",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1118": {
        "mapping": {
          "id": 1118,
          "name": "fab1/3/7",
          "controllingPort": 1118,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core11",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1119": {
        "mapping": {
          "id": 1119,
          "name": "fab1/3/8",
          "controllingPort": 1119,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core11",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1120": {
        "mapping": {
          "id": 1120,
          "name": "fab1/7/1",
          "controllingPort": 1120,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core12",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1121": {
        "mapping": {
          "id": 1121,
          "name": "fab1/7/2",
          "controllingPort": 1121,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core12",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1122": {
        "mapping": {
          "id": 1122,
          "name": "fab1/7/3",
          "controllingPort": 1122,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core12",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1123": {
        "mapping": {
          "id": 1123,
          "name": "fab1/7/4",
          "controllingPort": 1123,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core12",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1124": {
        "mapping": {
          "id": 1124,
          "name": "fab1/7/5",
          "controllingPort": 1124,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core12",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1125": {
        "mapping": {
          "id": 1125,
          "name": "fab1/7/6",
          "controllingPort": 1125,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core12",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1126": {
        "mapping": {
          "id": 1126,
          "name": "fab1/7/7",
          "controllingPort": 1126,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core12",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1127": {
        "mapping": {
          "id": 1127,
          "name": "fab1/7/8",
          "controllingPort": 1127,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core12",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1128": {
        "mapping": {
          "id": 1128,
          "name": "fab1/6/1",
          "controllingPort": 1128,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core13",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1129": {
        "mapping": {
          "id": 1129,
          "name": "fab1/6/2",
          "controllingPort": 1129,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core13",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1130": {
        "mapping": {
          "id": 1130,
          "name": "fab1/6/3",
          "controllingPort": 1130,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core13",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1131": {
        "mapping": {
          "id": 1131,
          "name": "fab1/6/4",
          "controllingPort": 1131,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core13",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1132": {
        "mapping": {
          "id": 1132,
          "name": "fab1/6/5",
          "controllingPort": 1132,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core13",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1133": {
        "mapping": {
          "id": 1133,
          "name": "fab1/6/6",
          "controllingPort": 1133,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core13",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1134": {
        "mapping": {
          "id": 1134,
          "name": "fab1/6/7",
          "controllingPort": 1134,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core13",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1135": {
        "mapping": {
          "id": 1135,
          "name": "fab1/6/8",
          "controllingPort": 1135,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core13",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1136": {
        "mapping": {
          "id": 1136,
          "name": "fab1/5/1",
          "controllingPort": 1136,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core14",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1137": {
        "mapping": {
          "id": 1137,
          "name": "fab1/5/2",
          "controllingPort": 1137,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core14",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1138": {
        "mapping": {
          "id": 1138,
          "name": "fab1/5/3",
          "controllingPort": 1138,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core14",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1139": {
        "mapping": {
          "id": 1139,
          "name": "fab1/5/4",
          "controllingPort": 1139,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core14",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1140": {
        "mapping": {
          "id": 1140,
          "name": "fab1/5/5",
          "controllingPort": 1140,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core14",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1141": {
        "mapping": {
          "id": 1141,
          "name": "fab1/5/6",
          "controllingPort": 1141,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core14",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1142": {
        "mapping": {
          "id": 1142,
          "name": "fab1/5/7",
          "controllingPort": 1142,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core14",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1143": {
        "mapping": {
          "id": 1143,
          "name": "fab1/5/8",
          "controllingPort": 1143,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core14",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1144": {
        "mapping": {
          "id": 1144,
          "name": "fab1/10/1",
          "controllingPort": 1144,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core15",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1145": {
        "mapping": {
          "id": 1145,
          "name": "fab1/10/2",
          "controllingPort": 1145,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core15",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1146": {
        "mapping": {
          "id": 1146,
          "name": "fab1/10/3",
          "controllingPort": 1146,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core15",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1147": {
        "mapping": {
          "id": 1147,
          "name": "fab1/10/4",
          "controllingPort": 1147,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core15",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1148": {
        "mapping": {
          "id": 1148,
          "name": "fab1/10/5",
          "controllingPort": 1148,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core15",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1149": {
        "mapping": {
          "id": 1149,
          "name": "fab1/10/6",
          "controllingPort": 1149,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core15",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1150": {
        "mapping": {
          "id": 1150,
          "name": "fab1/10/7",
          "controllingPort": 1150,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core15",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1151": {
        "mapping": {
          "id": 1151,
          "name": "fab1/10/8",
          "controllingPort": 1151,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core15",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1152": {
        "mapping": {
          "id": 1152,
          "name": "fab1/9/1",
          "controllingPort": 1152,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core16",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1153": {
        "mapping": {
          "id": 1153,
          "name": "fab1/9/2",
          "controllingPort": 1153,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core16",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1154": {
        "mapping": {
          "id": 1154,
          "name": "fab1/9/3",
          "controllingPort": 1154,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core16",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1155": {
        "mapping": {
          "id": 1155,
          "name": "fab1/9/4",
          "controllingPort": 1155,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core16",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1156": {
        "mapping": {
          "id": 1156,
          "name": "fab1/9/5",
          "controllingPort": 1156,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core16",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1157": {
        "mapping": {
          "id": 1157,
          "name": "fab1/9/6",
          "controllingPort": 1157,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core16",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1158": {
        "mapping": {
          "id": 1158,
          "name": "fab1/9/7",
          "controllingPort": 1158,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core16",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1159": {
        "mapping": {
          "id": 1159,
          "name": "fab1/9/8",
          "controllingPort": 1159,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core16",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1160": {
        "mapping": {
          "id": 1160,
          "name": "fab1/8/1",
          "controllingPort": 1160,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core17",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1161": {
        "mapping": {
          "id": 1161,
          "name": "fab1/8/2",
          "controllingPort": 1161,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core17",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1162": {
        "mapping": {
          "id": 1162,
          "name": "fab1/8/3",
          "controllingPort": 1162,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core17",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1163": {
        "mapping": {
          "id": 1163,
          "name": "fab1/8/4",
          "controllingPort": 1163,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core17",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1164": {
        "mapping": {
          "id": 1164,
          "name": "fab1/8/5",
          "controllingPort": 1164,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core17",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1165": {
        "mapping": {
          "id": 1165,
          "name": "fab1/8/6",
          "controllingPort": 1165,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core17",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1166": {
        "mapping": {
          "id": 1166,
          "name": "fab1/8/7",
          "controllingPort": 1166,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core17",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1167": {
        "mapping": {
          "id": 1167,
          "name": "fab1/8/8",
          "controllingPort": 1167,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core17",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1168": {
        "mapping": {
          "id": 1168,
          "name": "fab1/11/1",
          "controllingPort": 1168,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core18",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1169": {
        "mapping": {
          "id": 1169,
          "name": "fab1/11/2",
          "controllingPort": 1169,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core18",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1170": {
        "mapping": {
          "id": 1170,
          "name": "fab1/11/3",
          "controllingPort": 1170,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core18",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1171": {
        "mapping": {
          "id": 1171,
          "name": "fab1/11/4",
          "controllingPort": 1171,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core18",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1172": {
        "mapping": {
          "id": 1172,
          "name": "fab1/11/5",
          "controllingPort": 1172,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core18",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1173": {
        "mapping": {
          "id": 1173,
          "name": "fab1/11/6",
          "controllingPort": 1173,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core18",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1174": {
        "mapping": {
          "id": 1174,
          "name": "fab1/11/7",
          "controllingPort": 1174,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core18",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1175": {
        "mapping": {
          "id": 1175,
          "name": "fab1/11/8",
          "controllingPort": 1175,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core18",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1176": {
        "mapping": {
          "id": 1176,
          "name": "fab1/12/1",
          "controllingPort": 1176,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core19",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1177": {
        "mapping": {
          "id": 1177,
          "name": "fab1/12/2",
          "controllingPort": 1177,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core19",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1178": {
        "mapping": {
          "id": 1178,
          "name": "fab1/12/3",
          "controllingPort": 1178,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core19",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1179": {
        "mapping": {
          "id": 1179,
          "name": "fab1/12/4",
          "controllingPort": 1179,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core19",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1180": {
        "mapping": {
          "id": 1180,
          "name": "fab1/12/5",
          "controllingPort": 1180,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core19",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1181": {
        "mapping": {
          "id": 1181,
          "name": "fab1/12/6",
          "controllingPort": 1181,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core19",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1182": {
        "mapping": {
          "id": 1182,
          "name": "fab1/12/7",
          "controllingPort": 1182,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core19",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1183": {
        "mapping": {
          "id": 1183,
          "name": "fab1/12/8",
          "controllingPort": 1183,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core19",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2049": {
        "mapping": {
          "id": 2049,
          "name": "rcy1/2/55",
          "controllingPort": 2049,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_RCY-slot1/chip2/core55",
                "lane": 0
              }
            }
          ],
          "portType": 3,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 1,
          "virtualDeviceId": 0
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_RCY-slot1/chip2/core55",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "2050": {
        "mapping": {
          "id": 2050,
          "name": "eth1/44/1",
          "controllingPort": 2050,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core18",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-QSFP28-slot1/chip44",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core18",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-QSFP28-slot1/chip44",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core18",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-QSFP28-slot1/chip44",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core18",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-QSFP28-slot1/chip44",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 4,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 6,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "22": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core18",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core18",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core18",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core18",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-QSFP28-slot1/chip44",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-QSFP28-slot1/chip44",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-QSFP28-slot1/chip44",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-QSFP28-slot1/chip44",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "2051": {
        "mapping": {
          "id": 2051,
          "name": "eth1/45/1",
          "controllingPort": 2051,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core0",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip45",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core0",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip45",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core0",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip45",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core0",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip45",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 4,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core0",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core0",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core0",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core0",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip45",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip45",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip45",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip45",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "2052": {
        "mapping": {
          "id": 2052,
          "name": "eth1/45/5",
          "controllingPort": 2052,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core0",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip45",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core0",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip45",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core0",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip45",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core0",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip45",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 5,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core0",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core0",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core0",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core0",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip45",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip45",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip45",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip45",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2053": {
        "mapping": {
          "id": 2053,
          "name": "eth1/46/1",
          "controllingPort": 2053,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core13",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip46",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core13",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip46",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core13",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip46",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core13",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip46",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 3,
          "attachedCorePortIndex": 2,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core13",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip46",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip46",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip46",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip46",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "2054": {
        "mapping": {
          "id": 2054,
          "name": "eth1/46/5",
          "controllingPort": 2054,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core13",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip46",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core13",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip46",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core13",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip46",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core13",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip46",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 3,
          "attachedCorePortIndex": 3,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core13",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core13",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core13",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core13",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip46",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip46",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip46",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip46",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2055": {
        "mapping": {
          "id": 2055,
          "name": "eth1/63/1",
          "controllingPort": 2055,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core1",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip63",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core1",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip63",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core1",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip63",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core1",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip63",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core1",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip63",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core1",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip63",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core1",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip63",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core1",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip63",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 7,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core1",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core1",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core1",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core1",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core1",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip63",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip63",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip63",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip63",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip63",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip63",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip63",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip63",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2056": {
        "mapping": {
          "id": 2056,
          "name": "eth1/64/1",
          "controllingPort": 2056,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core2",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip64",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core2",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip64",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core2",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip64",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core2",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip64",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core2",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip64",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core2",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip64",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core2",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip64",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core2",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip64",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 8,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core2",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core2",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core2",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core2",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core2",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip64",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip64",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip64",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip64",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip64",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip64",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip64",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip64",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2057": {
        "mapping": {
          "id": 2057,
          "name": "eth1/65/1",
          "controllingPort": 2057,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core3",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip65",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core3",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip65",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core3",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip65",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core3",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip65",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core3",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip65",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core3",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip65",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core3",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip65",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core3",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip65",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 9,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core3",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core3",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core3",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core3",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core3",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip65",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip65",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip65",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip65",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip65",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip65",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip65",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip65",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2058": {
        "mapping": {
          "id": 2058,
          "name": "eth1/66/1",
          "controllingPort": 2058,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core4",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip66",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core4",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip66",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core4",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip66",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core4",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip66",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core4",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip66",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core4",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip66",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core4",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip66",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core4",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip66",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 10,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core4",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core4",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core4",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core4",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core4",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip66",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip66",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip66",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip66",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip66",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip66",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip66",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip66",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2059": {
        "mapping": {
          "id": 2059,
          "name": "eth1/67/1",
          "controllingPort": 2059,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core5",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip67",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core5",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip67",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core5",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip67",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core5",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip67",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core5",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip67",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core5",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip67",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core5",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip67",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core5",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip67",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 1,
          "attachedCorePortIndex": 11,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core5",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core5",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core5",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core5",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core5",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip67",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip67",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip67",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip67",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip67",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip67",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip67",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip67",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2060": {
        "mapping": {
          "id": 2060,
          "name": "eth1/68/1",
          "controllingPort": 2060,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core6",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip68",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core6",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip68",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core6",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip68",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core6",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip68",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core6",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip68",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core6",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip68",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core6",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip68",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core6",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip68",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 1,
          "attachedCorePortIndex": 12,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core6",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core6",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core6",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core6",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core6",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip68",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip68",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip68",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip68",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip68",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip68",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip68",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip68",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2061": {
        "mapping": {
          "id": 2061,
          "name": "eth1/69/1",
          "controllingPort": 2061,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core7",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip69",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core7",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip69",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core7",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip69",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core7",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip69",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core7",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip69",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core7",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip69",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core7",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip69",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core7",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip69",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 1,
          "attachedCorePortIndex": 13,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core7",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core7",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core7",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core7",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core7",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip69",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip69",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip69",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip69",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip69",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip69",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip69",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip69",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2062": {
        "mapping": {
          "id": 2062,
          "name": "eth1/70/1",
          "controllingPort": 2062,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core8",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip70",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core8",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip70",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core8",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip70",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core8",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip70",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core8",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip70",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core8",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip70",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core8",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip70",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core8",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip70",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 1,
          "attachedCorePortIndex": 14,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core8",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core8",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core8",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core8",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core8",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip70",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip70",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip70",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip70",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip70",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip70",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip70",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip70",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2063": {
        "mapping": {
          "id": 2063,
          "name": "eth1/71/1",
          "controllingPort": 2063,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core9",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip71",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core9",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip71",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core9",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip71",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core9",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip71",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core9",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip71",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core9",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip71",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core9",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip71",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core9",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip71",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 2,
          "attachedCorePortIndex": 15,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core9",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core9",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core9",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core9",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core9",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip71",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip71",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip71",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip71",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip71",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip71",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip71",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip71",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2064": {
        "mapping": {
          "id": 2064,
          "name": "eth1/72/1",
          "controllingPort": 2064,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core10",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip72",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core10",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip72",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core10",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip72",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core10",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip72",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core10",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip72",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core10",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip72",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core10",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip72",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core10",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip72",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 2,
          "attachedCorePortIndex": 16,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core10",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core10",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core10",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core10",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core10",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip72",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip72",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip72",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip72",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip72",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip72",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip72",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip72",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2065": {
        "mapping": {
          "id": 2065,
          "name": "eth1/73/1",
          "controllingPort": 2065,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core11",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip73",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core11",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip73",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core11",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip73",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core11",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip73",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core11",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip73",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core11",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip73",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core11",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip73",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core11",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip73",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 2,
          "attachedCorePortIndex": 17,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core11",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core11",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core11",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core11",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core11",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip73",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip73",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip73",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip73",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip73",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip73",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip73",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip73",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2066": {
        "mapping": {
          "id": 2066,
          "name": "eth1/74/1",
          "controllingPort": 2066,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core12",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip74",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core12",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip74",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core12",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip74",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core12",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip74",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core12",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip74",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core12",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip74",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core12",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip74",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core12",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip74",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 2,
          "attachedCorePortIndex": 18,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core12",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core12",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core12",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core12",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core12",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip74",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip74",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip74",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip74",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip74",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip74",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip74",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip74",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2067": {
        "mapping": {
          "id": 2067,
          "name": "eth1/75/1",
          "controllingPort": 2067,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core14",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip75",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core14",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip75",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core14",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip75",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core14",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip75",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core14",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip75",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core14",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip75",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core14",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip75",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core14",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip75",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 3,
          "attachedCorePortIndex": 19,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core14",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core14",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core14",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core14",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core14",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip75",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip75",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip75",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip75",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip75",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip75",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip75",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip75",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2068": {
        "mapping": {
          "id": 2068,
          "name": "eth1/76/1",
          "controllingPort": 2068,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core15",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip76",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core15",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip76",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core15",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip76",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core15",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip76",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core15",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip76",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core15",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip76",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core15",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip76",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core15",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip76",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 3,
          "attachedCorePortIndex": 20,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core15",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core15",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core15",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core15",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core15",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip76",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip76",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip76",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip76",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip76",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip76",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip76",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip76",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2069": {
        "mapping": {
          "id": 2069,
          "name": "eth1/77/1",
          "controllingPort": 2069,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core16",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip77",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core16",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip77",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core16",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip77",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core16",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip77",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core16",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip77",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core16",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip77",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core16",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip77",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core16",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip77",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 3,
          "attachedCorePortIndex": 21,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core16",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core16",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core16",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core16",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core16",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip77",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip77",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip77",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip77",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip77",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip77",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip77",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip77",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "2070": {
        "mapping": {
          "id": 2070,
          "name": "eth1/78/1",
          "controllingPort": 2070,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core17",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip78",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core17",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip78",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core17",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip78",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core17",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip78",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core17",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip78",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core17",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip78",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core17",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip78",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip2/core17",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "BACKPLANE-EXAMAX-slot1/chip78",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 3,
          "attachedCorePortIndex": 22,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core17",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core17",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core17",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core17",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core17",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip2/core17",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip78",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip78",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip78",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip78",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip78",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip78",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip78",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BACKPLANE-EXAMAX-slot1/chip78",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3072": {
        "mapping": {
          "id": 3072,
          "name": "fab1/43/1",
          "controllingPort": 3072,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core1",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip43",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core1",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip43",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3073": {
        "mapping": {
          "id": 3073,
          "name": "fab1/43/2",
          "controllingPort": 3073,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core1",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip43",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core1",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip43",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3074": {
        "mapping": {
          "id": 3074,
          "name": "fab1/43/3",
          "controllingPort": 3074,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core1",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip43",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core1",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip43",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3075": {
        "mapping": {
          "id": 3075,
          "name": "fab1/43/4",
          "controllingPort": 3075,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core1",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip43",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core1",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip43",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3076": {
        "mapping": {
          "id": 3076,
          "name": "fab1/43/5",
          "controllingPort": 3076,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core1",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip43",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core1",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip43",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3077": {
        "mapping": {
          "id": 3077,
          "name": "fab1/43/6",
          "controllingPort": 3077,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core1",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip43",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core1",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip43",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3078": {
        "mapping": {
          "id": 3078,
          "name": "fab1/43/7",
          "controllingPort": 3078,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core1",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip43",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core1",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip43",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3079": {
        "mapping": {
          "id": 3079,
          "name": "fab1/43/8",
          "controllingPort": 3079,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core1",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip43",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core1",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip43",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3080": {
        "mapping": {
          "id": 3080,
          "name": "fab1/42/1",
          "controllingPort": 3080,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core0",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip42",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core0",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip42",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3081": {
        "mapping": {
          "id": 3081,
          "name": "fab1/42/2",
          "controllingPort": 3081,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core0",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip42",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core0",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip42",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3082": {
        "mapping": {
          "id": 3082,
          "name": "fab1/42/3",
          "controllingPort": 3082,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core0",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip42",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core0",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip42",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3083": {
        "mapping": {
          "id": 3083,
          "name": "fab1/42/4",
          "controllingPort": 3083,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core0",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip42",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core0",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip42",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3084": {
        "mapping": {
          "id": 3084,
          "name": "fab1/42/5",
          "controllingPort": 3084,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core0",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip42",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core0",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip42",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3085": {
        "mapping": {
          "id": 3085,
          "name": "fab1/42/6",
          "controllingPort": 3085,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core0",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip42",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core0",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip42",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3086": {
        "mapping": {
          "id": 3086,
          "name": "fab1/42/7",
          "controllingPort": 3086,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core0",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip42",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core0",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip42",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3087": {
        "mapping": {
          "id": 3087,
          "name": "fab1/42/8",
          "controllingPort": 3087,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core0",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip42",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core0",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip42",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3088": {
        "mapping": {
          "id": 3088,
          "name": "fab1/40/1",
          "controllingPort": 3088,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core4",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip40",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core4",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip40",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3089": {
        "mapping": {
          "id": 3089,
          "name": "fab1/40/2",
          "controllingPort": 3089,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core4",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip40",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core4",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip40",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3090": {
        "mapping": {
          "id": 3090,
          "name": "fab1/40/3",
          "controllingPort": 3090,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core4",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip40",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core4",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip40",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3091": {
        "mapping": {
          "id": 3091,
          "name": "fab1/40/4",
          "controllingPort": 3091,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core4",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip40",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core4",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip40",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3092": {
        "mapping": {
          "id": 3092,
          "name": "fab1/40/5",
          "controllingPort": 3092,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core4",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip40",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core4",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip40",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3093": {
        "mapping": {
          "id": 3093,
          "name": "fab1/40/6",
          "controllingPort": 3093,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core4",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip40",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core4",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip40",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3094": {
        "mapping": {
          "id": 3094,
          "name": "fab1/40/7",
          "controllingPort": 3094,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core4",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip40",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core4",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip40",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3095": {
        "mapping": {
          "id": 3095,
          "name": "fab1/40/8",
          "controllingPort": 3095,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core4",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip40",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core4",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip40",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3096": {
        "mapping": {
          "id": 3096,
          "name": "fab1/39/1",
          "controllingPort": 3096,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core3",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip39",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core3",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip39",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3097": {
        "mapping": {
          "id": 3097,
          "name": "fab1/39/2",
          "controllingPort": 3097,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core3",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip39",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core3",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip39",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3098": {
        "mapping": {
          "id": 3098,
          "name": "fab1/39/3",
          "controllingPort": 3098,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core3",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip39",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core3",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip39",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3099": {
        "mapping": {
          "id": 3099,
          "name": "fab1/39/4",
          "controllingPort": 3099,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core3",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip39",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core3",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip39",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3100": {
        "mapping": {
          "id": 3100,
          "name": "fab1/39/5",
          "controllingPort": 3100,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core3",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip39",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core3",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip39",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3101": {
        "mapping": {
          "id": 3101,
          "name": "fab1/39/6",
          "controllingPort": 3101,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core3",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip39",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core3",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip39",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3102": {
        "mapping": {
          "id": 3102,
          "name": "fab1/39/7",
          "controllingPort": 3102,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core3",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip39",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core3",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip39",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3103": {
        "mapping": {
          "id": 3103,
          "name": "fab1/39/8",
          "controllingPort": 3103,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core3",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip39",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core3",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip39",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3104": {
        "mapping": {
          "id": 3104,
          "name": "fab1/38/1",
          "controllingPort": 3104,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core2",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core2",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3105": {
        "mapping": {
          "id": 3105,
          "name": "fab1/38/2",
          "controllingPort": 3105,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core2",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core2",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3106": {
        "mapping": {
          "id": 3106,
          "name": "fab1/38/3",
          "controllingPort": 3106,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core2",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core2",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3107": {
        "mapping": {
          "id": 3107,
          "name": "fab1/38/4",
          "controllingPort": 3107,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core2",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core2",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3108": {
        "mapping": {
          "id": 3108,
          "name": "fab1/38/5",
          "controllingPort": 3108,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core2",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core2",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3109": {
        "mapping": {
          "id": 3109,
          "name": "fab1/38/6",
          "controllingPort": 3109,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core2",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core2",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3110": {
        "mapping": {
          "id": 3110,
          "name": "fab1/38/7",
          "controllingPort": 3110,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core2",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core2",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3111": {
        "mapping": {
          "id": 3111,
          "name": "fab1/38/8",
          "controllingPort": 3111,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core2",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core2",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3112": {
        "mapping": {
          "id": 3112,
          "name": "fab1/37/1",
          "controllingPort": 3112,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core7",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core7",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3113": {
        "mapping": {
          "id": 3113,
          "name": "fab1/37/2",
          "controllingPort": 3113,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core7",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core7",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3114": {
        "mapping": {
          "id": 3114,
          "name": "fab1/37/3",
          "controllingPort": 3114,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core7",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core7",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3115": {
        "mapping": {
          "id": 3115,
          "name": "fab1/37/4",
          "controllingPort": 3115,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core7",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core7",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3116": {
        "mapping": {
          "id": 3116,
          "name": "fab1/37/5",
          "controllingPort": 3116,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core7",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core7",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3117": {
        "mapping": {
          "id": 3117,
          "name": "fab1/37/6",
          "controllingPort": 3117,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core7",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core7",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3118": {
        "mapping": {
          "id": 3118,
          "name": "fab1/37/7",
          "controllingPort": 3118,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core7",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core7",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3119": {
        "mapping": {
          "id": 3119,
          "name": "fab1/37/8",
          "controllingPort": 3119,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core7",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core7",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3120": {
        "mapping": {
          "id": 3120,
          "name": "fab1/34/1",
          "controllingPort": 3120,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core8",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core8",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3121": {
        "mapping": {
          "id": 3121,
          "name": "fab1/34/2",
          "controllingPort": 3121,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core8",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core8",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3122": {
        "mapping": {
          "id": 3122,
          "name": "fab1/34/3",
          "controllingPort": 3122,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core8",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core8",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3123": {
        "mapping": {
          "id": 3123,
          "name": "fab1/34/4",
          "controllingPort": 3123,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core8",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core8",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3124": {
        "mapping": {
          "id": 3124,
          "name": "fab1/34/5",
          "controllingPort": 3124,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core8",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core8",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3125": {
        "mapping": {
          "id": 3125,
          "name": "fab1/34/6",
          "controllingPort": 3125,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core8",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core8",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3126": {
        "mapping": {
          "id": 3126,
          "name": "fab1/34/7",
          "controllingPort": 3126,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core8",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core8",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3127": {
        "mapping": {
          "id": 3127,
          "name": "fab1/34/8",
          "controllingPort": 3127,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core8",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core8",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3128": {
        "mapping": {
          "id": 3128,
          "name": "fab1/35/1",
          "controllingPort": 3128,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core5",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core5",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3129": {
        "mapping": {
          "id": 3129,
          "name": "fab1/35/2",
          "controllingPort": 3129,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core5",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core5",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3130": {
        "mapping": {
          "id": 3130,
          "name": "fab1/35/3",
          "controllingPort": 3130,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core5",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core5",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3131": {
        "mapping": {
          "id": 3131,
          "name": "fab1/35/4",
          "controllingPort": 3131,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core5",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core5",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3132": {
        "mapping": {
          "id": 3132,
          "name": "fab1/35/5",
          "controllingPort": 3132,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core5",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core5",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3133": {
        "mapping": {
          "id": 3133,
          "name": "fab1/35/6",
          "controllingPort": 3133,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core5",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core5",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3134": {
        "mapping": {
          "id": 3134,
          "name": "fab1/35/7",
          "controllingPort": 3134,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core5",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core5",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3135": {
        "mapping": {
          "id": 3135,
          "name": "fab1/35/8",
          "controllingPort": 3135,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core5",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core5",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3136": {
        "mapping": {
          "id": 3136,
          "name": "fab1/36/1",
          "controllingPort": 3136,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core6",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core6",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3137": {
        "mapping": {
          "id": 3137,
          "name": "fab1/36/2",
          "controllingPort": 3137,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core6",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core6",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3138": {
        "mapping": {
          "id": 3138,
          "name": "fab1/36/3",
          "controllingPort": 3138,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core6",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core6",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3139": {
        "mapping": {
          "id": 3139,
          "name": "fab1/36/4",
          "controllingPort": 3139,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core6",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core6",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3140": {
        "mapping": {
          "id": 3140,
          "name": "fab1/36/5",
          "controllingPort": 3140,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core6",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core6",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3141": {
        "mapping": {
          "id": 3141,
          "name": "fab1/36/6",
          "controllingPort": 3141,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core6",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core6",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3142": {
        "mapping": {
          "id": 3142,
          "name": "fab1/36/7",
          "controllingPort": 3142,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core6",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core6",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3143": {
        "mapping": {
          "id": 3143,
          "name": "fab1/36/8",
          "controllingPort": 3143,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core6",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core6",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3144": {
        "mapping": {
          "id": 3144,
          "name": "fab1/33/1",
          "controllingPort": 3144,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core9",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core9",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3145": {
        "mapping": {
          "id": 3145,
          "name": "fab1/33/2",
          "controllingPort": 3145,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core9",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core9",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3146": {
        "mapping": {
          "id": 3146,
          "name": "fab1/33/3",
          "controllingPort": 3146,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core9",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core9",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3147": {
        "mapping": {
          "id": 3147,
          "name": "fab1/33/4",
          "controllingPort": 3147,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core9",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core9",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3148": {
        "mapping": {
          "id": 3148,
          "name": "fab1/33/5",
          "controllingPort": 3148,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core9",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core9",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3149": {
        "mapping": {
          "id": 3149,
          "name": "fab1/33/6",
          "controllingPort": 3149,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core9",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core9",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3150": {
        "mapping": {
          "id": 3150,
          "name": "fab1/33/7",
          "controllingPort": 3150,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core9",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core9",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3151": {
        "mapping": {
          "id": 3151,
          "name": "fab1/33/8",
          "controllingPort": 3151,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core9",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core9",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3152": {
        "mapping": {
          "id": 3152,
          "name": "fab1/24/1",
          "controllingPort": 3152,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core11",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core11",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3153": {
        "mapping": {
          "id": 3153,
          "name": "fab1/24/2",
          "controllingPort": 3153,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core11",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core11",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3154": {
        "mapping": {
          "id": 3154,
          "name": "fab1/24/3",
          "controllingPort": 3154,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core11",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core11",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3155": {
        "mapping": {
          "id": 3155,
          "name": "fab1/24/4",
          "controllingPort": 3155,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core11",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core11",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3156": {
        "mapping": {
          "id": 3156,
          "name": "fab1/24/5",
          "controllingPort": 3156,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core11",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core11",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3157": {
        "mapping": {
          "id": 3157,
          "name": "fab1/24/6",
          "controllingPort": 3157,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core11",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core11",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3158": {
        "mapping": {
          "id": 3158,
          "name": "fab1/24/7",
          "controllingPort": 3158,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core11",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core11",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3159": {
        "mapping": {
          "id": 3159,
          "name": "fab1/24/8",
          "controllingPort": 3159,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core11",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core11",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3160": {
        "mapping": {
          "id": 3160,
          "name": "fab1/23/1",
          "controllingPort": 3160,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core12",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core12",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3161": {
        "mapping": {
          "id": 3161,
          "name": "fab1/23/2",
          "controllingPort": 3161,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core12",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core12",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3162": {
        "mapping": {
          "id": 3162,
          "name": "fab1/23/3",
          "controllingPort": 3162,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core12",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core12",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3163": {
        "mapping": {
          "id": 3163,
          "name": "fab1/23/4",
          "controllingPort": 3163,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core12",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core12",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3164": {
        "mapping": {
          "id": 3164,
          "name": "fab1/23/5",
          "controllingPort": 3164,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core12",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core12",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3165": {
        "mapping": {
          "id": 3165,
          "name": "fab1/23/6",
          "controllingPort": 3165,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core12",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core12",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3166": {
        "mapping": {
          "id": 3166,
          "name": "fab1/23/7",
          "controllingPort": 3166,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core12",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core12",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3167": {
        "mapping": {
          "id": 3167,
          "name": "fab1/23/8",
          "controllingPort": 3167,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core12",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core12",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3168": {
        "mapping": {
          "id": 3168,
          "name": "fab1/27/1",
          "controllingPort": 3168,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core14",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core14",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3169": {
        "mapping": {
          "id": 3169,
          "name": "fab1/27/2",
          "controllingPort": 3169,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core14",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core14",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3170": {
        "mapping": {
          "id": 3170,
          "name": "fab1/27/3",
          "controllingPort": 3170,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core14",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core14",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3171": {
        "mapping": {
          "id": 3171,
          "name": "fab1/27/4",
          "controllingPort": 3171,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core14",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core14",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3172": {
        "mapping": {
          "id": 3172,
          "name": "fab1/27/5",
          "controllingPort": 3172,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core14",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core14",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3173": {
        "mapping": {
          "id": 3173,
          "name": "fab1/27/6",
          "controllingPort": 3173,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core14",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core14",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3174": {
        "mapping": {
          "id": 3174,
          "name": "fab1/27/7",
          "controllingPort": 3174,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core14",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core14",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3175": {
        "mapping": {
          "id": 3175,
          "name": "fab1/27/8",
          "controllingPort": 3175,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core14",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core14",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3176": {
        "mapping": {
          "id": 3176,
          "name": "fab1/26/1",
          "controllingPort": 3176,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core13",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core13",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3177": {
        "mapping": {
          "id": 3177,
          "name": "fab1/26/2",
          "controllingPort": 3177,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core13",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core13",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3178": {
        "mapping": {
          "id": 3178,
          "name": "fab1/26/3",
          "controllingPort": 3178,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core13",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core13",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3179": {
        "mapping": {
          "id": 3179,
          "name": "fab1/26/4",
          "controllingPort": 3179,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core13",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core13",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3180": {
        "mapping": {
          "id": 3180,
          "name": "fab1/26/5",
          "controllingPort": 3180,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core13",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core13",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3181": {
        "mapping": {
          "id": 3181,
          "name": "fab1/26/6",
          "controllingPort": 3181,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core13",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core13",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3182": {
        "mapping": {
          "id": 3182,
          "name": "fab1/26/7",
          "controllingPort": 3182,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core13",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core13",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3183": {
        "mapping": {
          "id": 3183,
          "name": "fab1/26/8",
          "controllingPort": 3183,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core13",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core13",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3184": {
        "mapping": {
          "id": 3184,
          "name": "fab1/25/1",
          "controllingPort": 3184,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core10",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core10",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3185": {
        "mapping": {
          "id": 3185,
          "name": "fab1/25/2",
          "controllingPort": 3185,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core10",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core10",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3186": {
        "mapping": {
          "id": 3186,
          "name": "fab1/25/3",
          "controllingPort": 3186,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core10",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core10",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3187": {
        "mapping": {
          "id": 3187,
          "name": "fab1/25/4",
          "controllingPort": 3187,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core10",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core10",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3188": {
        "mapping": {
          "id": 3188,
          "name": "fab1/25/5",
          "controllingPort": 3188,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core10",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core10",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3189": {
        "mapping": {
          "id": 3189,
          "name": "fab1/25/6",
          "controllingPort": 3189,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core10",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core10",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3190": {
        "mapping": {
          "id": 3190,
          "name": "fab1/25/7",
          "controllingPort": 3190,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core10",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core10",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3191": {
        "mapping": {
          "id": 3191,
          "name": "fab1/25/8",
          "controllingPort": 3191,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core10",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core10",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3192": {
        "mapping": {
          "id": 3192,
          "name": "fab1/30/1",
          "controllingPort": 3192,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core17",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core17",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3193": {
        "mapping": {
          "id": 3193,
          "name": "fab1/30/2",
          "controllingPort": 3193,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core17",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core17",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3194": {
        "mapping": {
          "id": 3194,
          "name": "fab1/30/3",
          "controllingPort": 3194,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core17",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core17",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3195": {
        "mapping": {
          "id": 3195,
          "name": "fab1/30/4",
          "controllingPort": 3195,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core17",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core17",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3196": {
        "mapping": {
          "id": 3196,
          "name": "fab1/30/5",
          "controllingPort": 3196,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core17",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core17",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3197": {
        "mapping": {
          "id": 3197,
          "name": "fab1/30/6",
          "controllingPort": 3197,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core17",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core17",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3198": {
        "mapping": {
          "id": 3198,
          "name": "fab1/30/7",
          "controllingPort": 3198,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core17",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core17",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3199": {
        "mapping": {
          "id": 3199,
          "name": "fab1/30/8",
          "controllingPort": 3199,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core17",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core17",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3200": {
        "mapping": {
          "id": 3200,
          "name": "fab1/29/1",
          "controllingPort": 3200,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core18",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core18",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3201": {
        "mapping": {
          "id": 3201,
          "name": "fab1/29/2",
          "controllingPort": 3201,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core18",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core18",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3202": {
        "mapping": {
          "id": 3202,
          "name": "fab1/29/3",
          "controllingPort": 3202,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core18",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core18",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3203": {
        "mapping": {
          "id": 3203,
          "name": "fab1/29/4",
          "controllingPort": 3203,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core18",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core18",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3204": {
        "mapping": {
          "id": 3204,
          "name": "fab1/29/5",
          "controllingPort": 3204,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core18",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core18",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3205": {
        "mapping": {
          "id": 3205,
          "name": "fab1/29/6",
          "controllingPort": 3205,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core18",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core18",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3206": {
        "mapping": {
          "id": 3206,
          "name": "fab1/29/7",
          "controllingPort": 3206,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core18",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core18",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3207": {
        "mapping": {
          "id": 3207,
          "name": "fab1/29/8",
          "controllingPort": 3207,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core18",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core18",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3208": {
        "mapping": {
          "id": 3208,
          "name": "fab1/28/1",
          "controllingPort": 3208,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core15",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core15",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3209": {
        "mapping": {
          "id": 3209,
          "name": "fab1/28/2",
          "controllingPort": 3209,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core15",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core15",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3210": {
        "mapping": {
          "id": 3210,
          "name": "fab1/28/3",
          "controllingPort": 3210,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core15",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core15",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3211": {
        "mapping": {
          "id": 3211,
          "name": "fab1/28/4",
          "controllingPort": 3211,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core15",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core15",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3212": {
        "mapping": {
          "id": 3212,
          "name": "fab1/28/5",
          "controllingPort": 3212,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core15",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core15",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3213": {
        "mapping": {
          "id": 3213,
          "name": "fab1/28/6",
          "controllingPort": 3213,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core15",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core15",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3214": {
        "mapping": {
          "id": 3214,
          "name": "fab1/28/7",
          "controllingPort": 3214,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core15",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core15",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3215": {
        "mapping": {
          "id": 3215,
          "name": "fab1/28/8",
          "controllingPort": 3215,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core15",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core15",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3216": {
        "mapping": {
          "id": 3216,
          "name": "fab1/31/1",
          "controllingPort": 3216,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core16",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core16",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3217": {
        "mapping": {
          "id": 3217,
          "name": "fab1/31/2",
          "controllingPort": 3217,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core16",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core16",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3218": {
        "mapping": {
          "id": 3218,
          "name": "fab1/31/3",
          "controllingPort": 3218,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core16",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core16",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3219": {
        "mapping": {
          "id": 3219,
          "name": "fab1/31/4",
          "controllingPort": 3219,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core16",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core16",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3220": {
        "mapping": {
          "id": 3220,
          "name": "fab1/31/5",
          "controllingPort": 3220,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core16",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core16",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3221": {
        "mapping": {
          "id": 3221,
          "name": "fab1/31/6",
          "controllingPort": 3221,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core16",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core16",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3222": {
        "mapping": {
          "id": 3222,
          "name": "fab1/31/7",
          "controllingPort": 3222,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core16",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core16",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3223": {
        "mapping": {
          "id": 3223,
          "name": "fab1/31/8",
          "controllingPort": 3223,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core16",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core16",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "3224": {
        "mapping": {
          "id": 3224,
          "name": "fab1/32/1",
          "controllingPort": 3224,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core19",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core19",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "3225": {
        "mapping": {
          "id": 3225,
          "name": "fab1/32/2",
          "controllingPort": 3225,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core19",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core19",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "3226": {
        "mapping": {
          "id": 3226,
          "name": "fab1/32/3",
          "controllingPort": 3226,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core19",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core19",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "3227": {
        "mapping": {
          "id": 3227,
          "name": "fab1/32/4",
          "controllingPort": 3227,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core19",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core19",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3228": {
        "mapping": {
          "id": 3228,
          "name": "fab1/32/5",
          "controllingPort": 3228,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core19",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core19",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "3229": {
        "mapping": {
          "id": 3229,
          "name": "fab1/32/6",
          "controllingPort": 3229,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core19",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core19",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "3230": {
        "mapping": {
          "id": 3230,
          "name": "fab1/32/7",
          "controllingPort": 3230,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core19",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core19",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "3231": {
        "mapping": {
          "id": 3231,
          "name": "fab1/32/8",
          "controllingPort": 3231,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip2/core19",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1,
          "virtualDeviceId": 1
        },
        "supportedProfiles": {
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip2/core19",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    }
  },
  "chips": [
    {
      "name": "NPU-J3_FE-slot1/chip1/core0",
      "type": 1,
      "physicalID": 0
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core0",
      "type": 1,
      "physicalID": 0
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core0",
      "type": 1,
      "physicalID": 0
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core0",
      "type": 1,
      "physicalID": 0
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core1",
      "type": 1,
      "physicalID": 1
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core1",
      "type": 1,
      "physicalID": 1
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core1",
      "type": 1,
      "physicalID": 1
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core1",
      "type": 1,
      "physicalID": 1
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core2",
      "type": 1,
      "physicalID": 2
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core2",
      "type": 1,
      "physicalID": 2
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core2",
      "type": 1,
      "physicalID": 2
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core2",
      "type": 1,
      "physicalID": 2
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core3",
      "type": 1,
      "physicalID": 3
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core3",
      "type": 1,
      "physicalID": 3
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core3",
      "type": 1,
      "physicalID": 3
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core3",
      "type": 1,
      "physicalID": 3
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core4",
      "type": 1,
      "physicalID": 4
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core4",
      "type": 1,
      "physicalID": 4
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core4",
      "type": 1,
      "physicalID": 4
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core4",
      "type": 1,
      "physicalID": 4
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core5",
      "type": 1,
      "physicalID": 5
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core5",
      "type": 1,
      "physicalID": 5
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core5",
      "type": 1,
      "physicalID": 5
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core5",
      "type": 1,
      "physicalID": 5
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core6",
      "type": 1,
      "physicalID": 6
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core6",
      "type": 1,
      "physicalID": 6
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core6",
      "type": 1,
      "physicalID": 6
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core6",
      "type": 1,
      "physicalID": 6
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core7",
      "type": 1,
      "physicalID": 7
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core7",
      "type": 1,
      "physicalID": 7
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core7",
      "type": 1,
      "physicalID": 7
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core7",
      "type": 1,
      "physicalID": 7
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core8",
      "type": 1,
      "physicalID": 8
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core8",
      "type": 1,
      "physicalID": 8
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core8",
      "type": 1,
      "physicalID": 8
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core8",
      "type": 1,
      "physicalID": 8
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core9",
      "type": 1,
      "physicalID": 9
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core9",
      "type": 1,
      "physicalID": 9
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core9",
      "type": 1,
      "physicalID": 9
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core9",
      "type": 1,
      "physicalID": 9
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core10",
      "type": 1,
      "physicalID": 10
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core10",
      "type": 1,
      "physicalID": 10
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core10",
      "type": 1,
      "physicalID": 10
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core10",
      "type": 1,
      "physicalID": 10
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core11",
      "type": 1,
      "physicalID": 11
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core11",
      "type": 1,
      "physicalID": 11
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core11",
      "type": 1,
      "physicalID": 11
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core11",
      "type": 1,
      "physicalID": 11
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core12",
      "type": 1,
      "physicalID": 12
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core12",
      "type": 1,
      "physicalID": 12
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core12",
      "type": 1,
      "physicalID": 12
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core12",
      "type": 1,
      "physicalID": 12
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core13",
      "type": 1,
      "physicalID": 13
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core13",
      "type": 1,
      "physicalID": 13
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core13",
      "type": 1,
      "physicalID": 13
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core13",
      "type": 1,
      "physicalID": 13
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core14",
      "type": 1,
      "physicalID": 14
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core14",
      "type": 1,
      "physicalID": 14
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core14",
      "type": 1,
      "physicalID": 14
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core14",
      "type": 1,
      "physicalID": 14
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core15",
      "type": 1,
      "physicalID": 15
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core15",
      "type": 1,
      "physicalID": 15
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core15",
      "type": 1,
      "physicalID": 15
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core15",
      "type": 1,
      "physicalID": 15
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core16",
      "type": 1,
      "physicalID": 16
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core16",
      "type": 1,
      "physicalID": 16
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core16",
      "type": 1,
      "physicalID": 16
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core16",
      "type": 1,
      "physicalID": 16
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core17",
      "type": 1,
      "physicalID": 17
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core17",
      "type": 1,
      "physicalID": 17
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core17",
      "type": 1,
      "physicalID": 17
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core17",
      "type": 1,
      "physicalID": 17
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core18",
      "type": 1,
      "physicalID": 18
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core18",
      "type": 1,
      "physicalID": 18
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core18",
      "type": 1,
      "physicalID": 18
    },
    {
      "name": "NPU-J3_NIF-slot1/chip2/core18",
      "type": 1,
      "physicalID": 18
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core19",
      "type": 1,
      "physicalID": 19
    },
    {
      "name": "NPU-J3_FE-slot1/chip2/core19",
      "type": 1,
      "physicalID": 19
    },
    {
      "name": "NPU-J3_RCY-slot1/chip1/core55",
      "type": 1,
      "physicalID": 55
    },
    {
      "name": "NPU-J3_RCY-slot1/chip2/core55",
      "type": 1,
      "physicalID": 55
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip1",
      "type": 3,
      "physicalID": 0
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip2",
      "type": 3,
      "physicalID": 1
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip3",
      "type": 3,
      "physicalID": 2
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip4",
      "type": 3,
      "physicalID": 3
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip5",
      "type": 3,
      "physicalID": 4
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip6",
      "type": 3,
      "physicalID": 5
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip7",
      "type": 3,
      "physicalID": 6
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip8",
      "type": 3,
      "physicalID": 7
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip9",
      "type": 3,
      "physicalID": 8
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip10",
      "type": 3,
      "physicalID": 9
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip11",
      "type": 3,
      "physicalID": 10
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip12",
      "type": 3,
      "physicalID": 11
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip13",
      "type": 3,
      "physicalID": 12
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip14",
      "type": 3,
      "physicalID": 13
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip15",
      "type": 3,
      "physicalID": 14
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip16",
      "type": 3,
      "physicalID": 15
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip17",
      "type": 3,
      "physicalID": 16
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip18",
      "type": 3,
      "physicalID": 17
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip19",
      "type": 3,
      "physicalID": 18
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip20",
      "type": 3,
      "physicalID": 19
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip21",
      "type": 3,
      "physicalID": 20
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip22",
      "type": 3,
      "physicalID": 21
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip23",
      "type": 3,
      "physicalID": 22
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip24",
      "type": 3,
      "physicalID": 23
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip25",
      "type": 3,
      "physicalID": 24
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip26",
      "type": 3,
      "physicalID": 25
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip27",
      "type": 3,
      "physicalID": 26
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip28",
      "type": 3,
      "physicalID": 27
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip29",
      "type": 3,
      "physicalID": 28
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip30",
      "type": 3,
      "physicalID": 29
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip31",
      "type": 3,
      "physicalID": 30
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip32",
      "type": 3,
      "physicalID": 31
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip33",
      "type": 3,
      "physicalID": 32
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip34",
      "type": 3,
      "physicalID": 33
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip35",
      "type": 3,
      "physicalID": 34
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip36",
      "type": 3,
      "physicalID": 35
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip37",
      "type": 3,
      "physicalID": 36
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip38",
      "type": 3,
      "physicalID": 37
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip39",
      "type": 3,
      "physicalID": 38
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip40",
      "type": 3,
      "physicalID": 39
    },
    {
      "name": "TRANSCEIVER-QSFP28-slot1/chip41",
      "type": 3,
      "physicalID": 40
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip42",
      "type": 3,
      "physicalID": 41
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip43",
      "type": 3,
      "physicalID": 42
    },
    {
      "name": "TRANSCEIVER-QSFP28-slot1/chip44",
      "type": 3,
      "physicalID": 43
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip45",
      "type": 3,
      "physicalID": 44
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip46",
      "type": 3,
      "physicalID": 45
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip47",
      "type": 4,
      "physicalID": 46
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip48",
      "type": 4,
      "physicalID": 47
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip49",
      "type": 4,
      "physicalID": 48
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip50",
      "type": 4,
      "physicalID": 49
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip51",
      "type": 4,
      "physicalID": 50
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip52",
      "type": 4,
      "physicalID": 51
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip53",
      "type": 4,
      "physicalID": 52
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip54",
      "type": 4,
      "physicalID": 53
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip55",
      "type": 4,
      "physicalID": 54
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip56",
      "type": 4,
      "physicalID": 55
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip57",
      "type": 4,
      "physicalID": 56
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip58",
      "type": 4,
      "physicalID": 57
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip59",
      "type": 4,
      "physicalID": 58
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip60",
      "type": 4,
      "physicalID": 59
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip61",
      "type": 4,
      "physicalID": 60
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip62",
      "type": 4,
      "physicalID": 61
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip63",
      "type": 4,
      "physicalID": 62
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip64",
      "type": 4,
      "physicalID": 63
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip65",
      "type": 4,
      "physicalID": 64
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip66",
      "type": 4,
      "physicalID": 65
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip67",
      "type": 4,
      "physicalID": 66
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip68",
      "type": 4,
      "physicalID": 67
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip69",
      "type": 4,
      "physicalID": 68
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip70",
      "type": 4,
      "physicalID": 69
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip71",
      "type": 4,
      "physicalID": 70
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip72",
      "type": 4,
      "physicalID": 71
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip73",
      "type": 4,
      "physicalID": 72
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip74",
      "type": 4,
      "physicalID": 73
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip75",
      "type": 4,
      "physicalID": 74
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip76",
      "type": 4,
      "physicalID": 75
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip77",
      "type": 4,
      "physicalID": 76
    },
    {
      "name": "BACKPLANE-EXAMAX-slot1/chip78",
      "type": 4,
      "physicalID": 77
    }
  ],
  "platformSupportedProfiles": [
    {
      "factor": {
        "profileID": 38
      },
      "profile": {
        "speed": 400000,
        "iphy": {
          "numLanes": 4,
          "modulation": 2,
          "fec": 11,
          "medium": 2,
          "interfaceType": 41
        }
      }
    },
    {
      "factor": {
        "profileID": 39
      },
      "profile": {
        "speed": 800000,
        "iphy": {
          "numLanes": 8,
          "modulation": 2,
          "fec": 11,
          "medium": 2,
          "interfaceType": 41
        }
      }
    },
    {
      "factor": {
        "profileID": 42
      },
      "profile": {
        "speed": 106250,
        "iphy": {
          "numLanes": 1,
          "modulation": 2,
          "fec": 11,
          "medium": 2,
          "interfaceType": 41
        }
      }
    },
    {
      "factor": {
        "profileID": 11
      },
      "profile": {
        "speed": 10000,
        "iphy": {
          "numLanes": 1,
          "modulation": 1,
          "fec": 1,
          "medium": 1,
          "interfaceType": 10
        }
      }
    },
    {
      "factor": {
        "profileID": 22
      },
      "profile": {
        "speed": 100000,
        "iphy": {
          "numLanes": 4,
          "modulation": 1,
          "fec": 528,
          "medium": 1,
          "interfaceType": 41
        }
      }
    }
  ]
}
)";
} // namespace

namespace facebook::fboss {
Janga800bicPlatformMapping::Janga800bicPlatformMapping()
    : PlatformMapping(kJsonPlatformMappingStr) {}

Janga800bicPlatformMapping::Janga800bicPlatformMapping(
    const std::string& platformMappingStr)
    : PlatformMapping(platformMappingStr) {}

} // namespace facebook::fboss
