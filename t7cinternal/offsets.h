#pragma once
#include "framework.h"
#include <winnt.h>

// dont mess with these because when I add new games, these macros will change
// updated for steam 4/20/26

#define OFF_IsProfileBuild REBASE(0x3258D70, 0x31154A0)
#define OFF_ScrVm_GetInt REBASE(0x12EB810, 0x1391240)
#define OFF_ScrVm_GetString REBASE(0x12EBAC0, 0x1391970)
#define OFF_ScrVm_Opcodes REBASE(0x3267350, 0x2EB38B0)
#define OFF_ScrVm_Opcodes2 REBASE(0x3287350, 0x2E838B0)
#define OFF_Scr_GetFunction REBASE(0x1AEB450, NULL)
#define OFF_GetMethod REBASE(NULL, 0x136CD40)
#define OFF_Scr_GetMethod REBASE(0x1AEB5E0, NULL)
#define OFF_DB_FindXAssetHeader REBASE(0x1420EF0, 0x14DC380)
#define XASSETTYPE_SCRIPTPARSETREE 0x36u
#define OFF_s_runningUILevel REBASE(0x1686E99E, 0x148FD0EF)
#define OFF_Scr_GscObjLink REBASE(0x12CC320, 0x1370AC0)
#define OFF_ScrVar_AllocVariableInternal REBASE(0x12D9A80, 0x137F050)
#define OFF_ScrVm_GetFunc REBASE(0x12EB750, 0x1392030)
#define PTR_sSessionModeState REBASE(0x1686E874, 0x18AE65C4)
#define GSCR_FASTEXIT REBASE(0x2BDA9C3, NULL)
#define OFF_BID_Scr_CastInt REBASE(0x32581A0, 0x31148E0)
#define OFF_Scr_CastInt REBASE(0x162E60, 0x1F1EF0)
#define OFF_ScrVarGlob REBASE(0x5124500, 0x3F66900)

#define OFF_VM_OP_GetAPIFunction REBASE(0x12D08B0, 0x1374E90)
#define OFF_VM_OP_GetFunction REBASE(0x12D0A50, 0x1374E50)
#define OFF_VM_OP_ScriptFunctionCall REBASE(0x12CEEA0, 0x1372F80)
#define OFF_VM_OP_ScriptMethodCall REBASE(0x12CF1F0, 0x1373320)
#define OFF_VM_OP_ScriptThreadCall REBASE(0x12CFB30, 0x13735F0)
#define OFF_VM_OP_ScriptMethodThreadCall REBASE(0x12CF590, 0x1373A20)
#define OFF_VM_OP_CallBuiltin REBASE(0x12CE480, 0x1372CB0)
#define OFF_VM_OP_CallBuiltinMethod REBASE(0x12CE3C0, 0x1372D20)