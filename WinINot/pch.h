#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <wininet.h>

//redefine these things so they're exported
#define DECLSPEC_EXPORT __declspec(dllexport)

#define INTERNETAPI        EXTERN_C DECLSPEC_EXPORT HRESULT STDAPICALLTYPE
#define INTERNETAPI_(type) EXTERN_C DECLSPEC_EXPORT type STDAPICALLTYPE
#define INTERNETAPIX(type, salannotation) EXTERN_C DECLSPEC_EXPORT salannotation type STDAPICALLTYPE
#define URLCACHEAPI        EXTERN_C DECLSPEC_EXPORT DWORD STDAPICALLTYPE
#define URLCACHEAPI_(type) EXTERN_C DECLSPEC_EXPORT type STDAPICALLTYPE
#define BOOLAPI INTERNETAPIX(BOOL, _Success_(return != FALSE))

#undef DeleteUrlCacheEntry
#undef InternetConfirmZoneCrossing
#undef InternetDial
#undef InternetGoOnline
#undef InternetSetDialState
#undef InternetSetStatusCallback
#undef InternetTimeFromSystemTime
#undef InternetTimeToSystemTime
#undef SetUrlCacheEntryGroup
#undef UnlockUrlCacheEntryFile