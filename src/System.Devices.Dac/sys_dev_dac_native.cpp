﻿//
// Copyright (c) 2019 The nanoFramework project contributors
// See LICENSE file in the project root for full license information.
//


#include "sys_dev_dac_native.h"


static const CLR_RT_MethodHandler method_lookup[] =
{
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_win_dev_dac_native_System_Devices_Dac_DacChannel::NativeWriteValue___VOID__U2,
    Library_win_dev_dac_native_System_Devices_Dac_DacChannel::NativeDisposeChannel___VOID,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_win_dev_dac_native_System_Devices_Dac_DacController::NativeOpenChannel___VOID__I4,
    Library_win_dev_dac_native_System_Devices_Dac_DacController::NativeGetChannelCount___I4,
    Library_win_dev_dac_native_System_Devices_Dac_DacController::NativeGetResolutionInBits___I4,
    Library_win_dev_dac_native_System_Devices_Dac_DacController::NativeInit___VOID,
    NULL,
    Library_win_dev_dac_native_System_Devices_Dac_DacController::GetDeviceSelector___STATIC__STRING,
    NULL,
    NULL,
    NULL,
};

const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_System_Devices_Dac =
{
    "System.Devices.Dac", 
    0x7802D56B,
    method_lookup,
    { 100, 0, 0, 2 }
};
