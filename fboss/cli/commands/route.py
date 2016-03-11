#!/usr/bin/env python3
#
#  Copyright (c) 2004-present, Facebook, Inc.
#  All rights reserved.
#
#  This source code is licensed under the BSD-style license found in the
#  LICENSE file in the root directory of this source tree. An additional grant
#  of patent rights can be found in the PATENTS file in the same directory.
#

# TODO: Are these thrift structs open-sourced?
from facebook.network.Address.ttypes import Address, AddressType
from fboss.cli import utils
from fboss.cli.commands import commands as cmds


class RouteIpCmd(cmds.FbossCmd):
    def run(self, ip, vrf):
        addr = Address(addr=ip, type=AddressType.V4)
        if not addr.addr:
            print('No ip address provided')
            return
        self._client = self._create_ctrl_client()
        resp = self._client.getIpRoute(addr, vrf)
        print('Route to ' + addr.addr + ', Vrf: %d' % vrf)
        netAddr = utils.ip_ntop(resp.dest.ip.addr)
        prefix = resp.dest.prefixLength
        if netAddr == '0.0.0.0' or netAddr == '::':
            print('No Route to destination')
        else:
            print('N/w: %s/%d' % (netAddr, prefix))
            for nexthops in resp.nextHopAddrs:
                print('\t\tvia: ' + utils.ip_ntop(nexthops.addr))


class RouteTableCmd(cmds.FbossCmd):
    def run(self):
        self._client = self._create_ctrl_client()
        resp = self._client.getRouteTable()
        if not resp:
            print("No Route Table Entries Found")
            return
        for entry in resp:
            print("Network Address: %s/%d" %
                                (utils.ip_ntop(entry.dest.ip.addr),
                                            entry.dest.prefixLength))
            # Need to check the nextHopAddresses
            for nhop in entry.nextHopAddrs:
                print("\tvia %s" % utils.ip_ntop(nhop.addr))
