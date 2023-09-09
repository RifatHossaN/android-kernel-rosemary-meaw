#! /usr/bin/python3
# -*- coding: utf-8 -*-

# Copyright Statement:
#
# This software/firmware and related documentation ("MediaTek Software") are
# protected under relevant copyright laws. The information contained herein is
# confidential and proprietary to MediaTek Inc. and/or its licensors. Without
# the prior written permission of MediaTek inc. and/or its licensors, any
# reproduction, modification, use or disclosure of MediaTek Software, and
# information contained herein, in whole or in part, shall be strictly
# prohibited.
#
# MediaTek Inc. (C) 2019. All rights reserved.
#
# BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
# THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
# RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER
# ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
# WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
# WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
# NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH
# RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
# INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
# TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.
# RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
# OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK
# SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE
# RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
# STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S
# ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE
# RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
# MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE
# CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
#
# The following software/firmware and/or related documentation ("MediaTek
# Software") have been modified by MediaTek Inc. All revisions are subject to
# any receiver's applicable license agreements with MediaTek Inc.

import os, sys
import time
import re
import string

from utility import version
from utility.util import log
from utility.util import LogLevel

class ModuleObj:
    _chip_id = ''
    _gen_path = ''

    def __init__(self, name1, name2):
        self.__hName = name1
        self.__dtsiName = name2
        self.__data = {}

    def get_hFileName(self):
        return self.__hName

    def get_dtsiFileName(self):
        return self.__dtsiName

    def get_cfgInfo(self, section):
        pass

    def set_data(self, key, value):
        self.__data[key] = value

    def get_data(self):
        return self.__data

    def gen_files(self):
        self.gen_hFile()
        self.gen_dtsiFile()


    def gen_hFile(self):
        fp = open(os.path.join(ModuleObj.get_genPath(), ModuleObj.get_hFileName(self)), 'w')
        gen_str = ''
        gen_str += ModuleObj.writeComment()
        gen_str += ModuleObj.writeHeader(ModuleObj.get_hFileName(self))
        gen_str += self.fill_hFile()
        gen_str += ModuleObj.writeTail(ModuleObj.get_hFileName(self))
        fp.write(gen_str)
        fp.close()


    def gen_dtsiFile(self):
        fp = open(os.path.join(ModuleObj.get_genPath(), ModuleObj.get_dtsiFileName(self)), 'w')
        gen_str = ''
        gen_str = ModuleObj.writeComment()
        gen_str += ModuleObj.writeHeader(ModuleObj.get_dtsiFileName(self))
        gen_str += self.fill_dtsiFile()
        fp.write(gen_str)
        fp.close()

    def gen_spec(self, para):
        if re.match(r'.*_h$', para):
            self.gen_hFile()
        elif re.match(r'.*_dtsi', para):
            self.gen_dtsiFile()
        elif re.match(r'.*_c', para):
            self.gen_cFile()

    @staticmethod
    def get_figPath():
        figPath = os.path.join(sys.path[0], 'config', ModuleObj.get_chipId() + '.fig')
        if not os.path.exists(figPath) or not os.path.isfile(figPath):
            log(LogLevel.error, 'Can not find %s.fig file!' %(ModuleObj.get_chipId()))
            sys.exit(-1)

        return figPath

    @staticmethod
    def get_cmpPath():
        cmpPath = os.path.join(sys.path[0], 'config', 'YuSu.cmp')

        if not os.path.exists(cmpPath) or not os.path.isfile(cmpPath):
            log(LogLevel.error, 'Can not find YuSu.cmp file!')
            sys.exit(-1)

        return cmpPath

    @staticmethod
    def get_chipId():
        return ModuleObj._chip_id

    @staticmethod
    def set_chipId(id):
        ModuleObj._chip_id = id

    @staticmethod
    def set_genPath(path):
        ModuleObj._gen_path = path

    @staticmethod
    def get_genPath():
        return ModuleObj._gen_path

    @staticmethod
    def writeComment():
        stamp = time.strftime("%Y-%m-%d %H:%M:%S", time.localtime())
        ver_info = version.VER_MAIN + '.' + version.VER_SUB + '.' + version.BUILD_SN

        gen_str = '''/*\n * Generated by MTK SP DrvGen Version: '''
        gen_str += ver_info
        gen_str += ''' for '''
        gen_str += ModuleObj.get_chipId()
        gen_str += '''.\n'''
        gen_str += ''' * '''
        gen_str += stamp
        gen_str += '''\n * Do Not Modify The File.\n'''
        gen_str += ''' * Copyright Mediatek Inc. (c) 2016.\n*/\n\n'''

        return gen_str

    @staticmethod
    def writeHeader(name):
        str = ''
        if re.match(r'.*\.h$', name):
            name = name.replace('.', '_')
            name = name.replace('-', '_')
            str += '''#ifndef __%s\n''' %(name.upper())
            str += '''#define __%s\n''' %(name.upper())
            str += '''\n'''
        elif re.match(r'.*\.dtsi$', name):
            str += '''/*************************\n'''
            str += ''' * %s File\n''' %(name.replace('cust_', '').replace('.', ' ').upper())
            str += '''*************************/\n\n'''

        return str

    @staticmethod
    def writeTail(name):
        if re.match(r'.*\.h$', name):
            gen_str = '''\n\n#endif /* %s */\n''' %('__' + name.replace('.', '_').upper())
            return gen_str





