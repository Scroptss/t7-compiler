#pragma once
#include "framework.h"

// dont mess with these because when I add new games, these macros will change
// updated 8/20/2026

#define OFFSET(x) ((INT64)GetModuleHandle(NULL) + (INT64)x)

#define OFF_IsProfileBuild OFFSET(0x495F140)
#define OFF_ScrVm_GetInt OFFSET(0x2771E50)
#define OFF_ScrVm_GetString OFFSET(0x2772B40)
#define OFF_ScrVm_GetNumParam OFFSET(0x2772740)
#define OFF_ScrVm_AddInt OFFSET(0x276CE80)
#define OFF_ScrVm_AddBool OFFSET(0x276CA60)
#define OFF_ScrVm_AddUndefined OFFSET(0x276D6C0)
#define OFF_ScrVm_Opcodes OFFSET(0x4EED340)
#define OFF_Scr_GetFunction OFFSET(0x33AD970)
#define OFF_Scr_GetMethod OFFSET(0x33ADD50)
#define OFF_CScr_GetFunction OFFSET(0x1F12B80)
#define OFF_CScr_GetMethod OFFSET(0x1F13090)
#define OFF_DB_FindXAssetHeader OFFSET(0x2EB58B0)
#define OFF_xAssetScriptParseTree OFFSET(0x9129520)
#define XASSETTYPE_SCRIPTPARSETREE 0x30
#define OFF_gObjFileInfo OFFSET(0x82ED6D0)
#define OFF_gObjFileInfoCount OFFSET(0x82F50B0)
#define OFF_s_runningUILevel OFFSET(0x8B4E219)
#define OFF_Scr_GscObjLink OFFSET(0x2747170)
#define OFF_MemTreeBuffers OFFSET(0x7DAD620)