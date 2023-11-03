#include "pch.h"
#include "origfunctions.h"

HMODULE mod;

DEFI_CommitUrlCacheEntryA ORIG_CommitUrlCacheEntryA;
DEFI_CommitUrlCacheEntryW ORIG_CommitUrlCacheEntryW;
DEFI_CreateMD5SSOHash ORIG_CreateMD5SSOHash;
DEFI_CreateUrlCacheEntryA ORIG_CreateUrlCacheEntryA;
DEFI_CreateUrlCacheEntryW ORIG_CreateUrlCacheEntryW;
DEFI_CreateUrlCacheGroup ORIG_CreateUrlCacheGroup;
DEFI_DeleteUrlCacheEntry ORIG_DeleteUrlCacheEntry;
DEFI_DeleteUrlCacheEntryA ORIG_DeleteUrlCacheEntryA;
DEFI_DeleteUrlCacheEntryW ORIG_DeleteUrlCacheEntryW;
DEFI_DeleteUrlCacheGroup ORIG_DeleteUrlCacheGroup;
DEFI_DetectAutoProxyUrl ORIG_DetectAutoProxyUrl;
DEFI_FindCloseUrlCache ORIG_FindCloseUrlCache;
DEFI_FindFirstUrlCacheEntryA ORIG_FindFirstUrlCacheEntryA;
DEFI_FindFirstUrlCacheEntryExA ORIG_FindFirstUrlCacheEntryExA;
DEFI_FindFirstUrlCacheEntryExW ORIG_FindFirstUrlCacheEntryExW;
DEFI_FindFirstUrlCacheEntryW ORIG_FindFirstUrlCacheEntryW;
DEFI_FindFirstUrlCacheGroup ORIG_FindFirstUrlCacheGroup;
DEFI_FindNextUrlCacheEntryA ORIG_FindNextUrlCacheEntryA;
DEFI_FindNextUrlCacheEntryExA ORIG_FindNextUrlCacheEntryExA;
DEFI_FindNextUrlCacheEntryExW ORIG_FindNextUrlCacheEntryExW;
DEFI_FindNextUrlCacheEntryW ORIG_FindNextUrlCacheEntryW;
DEFI_FindNextUrlCacheGroup ORIG_FindNextUrlCacheGroup;
DEFI_FtpCommandA ORIG_FtpCommandA;
DEFI_FtpCommandW ORIG_FtpCommandW;
DEFI_FtpCreateDirectoryA ORIG_FtpCreateDirectoryA;
DEFI_FtpCreateDirectoryW ORIG_FtpCreateDirectoryW;
DEFI_FtpDeleteFileA ORIG_FtpDeleteFileA;
DEFI_FtpDeleteFileW ORIG_FtpDeleteFileW;
DEFI_FtpFindFirstFileA ORIG_FtpFindFirstFileA;
DEFI_FtpFindFirstFileW ORIG_FtpFindFirstFileW;
DEFI_FtpGetCurrentDirectoryA ORIG_FtpGetCurrentDirectoryA;
DEFI_FtpGetCurrentDirectoryW ORIG_FtpGetCurrentDirectoryW;
DEFI_FtpGetFileA ORIG_FtpGetFileA;
DEFI_FtpGetFileSize ORIG_FtpGetFileSize;
DEFI_FtpGetFileW ORIG_FtpGetFileW;
DEFI_FtpOpenFileA ORIG_FtpOpenFileA;
DEFI_FtpOpenFileW ORIG_FtpOpenFileW;
DEFI_FtpPutFileA ORIG_FtpPutFileA;
DEFI_FtpPutFileW ORIG_FtpPutFileW;
DEFI_FtpRemoveDirectoryA ORIG_FtpRemoveDirectoryA;
DEFI_FtpRemoveDirectoryW ORIG_FtpRemoveDirectoryW;
DEFI_FtpRenameFileA ORIG_FtpRenameFileA;
DEFI_FtpRenameFileW ORIG_FtpRenameFileW;
DEFI_FtpSetCurrentDirectoryA ORIG_FtpSetCurrentDirectoryA;
DEFI_FtpSetCurrentDirectoryW ORIG_FtpSetCurrentDirectoryW;
DEFI_GetUrlCacheEntryInfoA ORIG_GetUrlCacheEntryInfoA;
DEFI_GetUrlCacheEntryInfoExA ORIG_GetUrlCacheEntryInfoExA;
DEFI_GetUrlCacheEntryInfoExW ORIG_GetUrlCacheEntryInfoExW;
DEFI_GetUrlCacheEntryInfoW ORIG_GetUrlCacheEntryInfoW;
DEFI_GetUrlCacheGroupAttributeA ORIG_GetUrlCacheGroupAttributeA;
DEFI_GetUrlCacheGroupAttributeW ORIG_GetUrlCacheGroupAttributeW;
DEFI_GopherCreateLocatorA ORIG_GopherCreateLocatorA;
DEFI_GopherCreateLocatorW ORIG_GopherCreateLocatorW;
DEFI_GopherFindFirstFileA ORIG_GopherFindFirstFileA;
DEFI_GopherFindFirstFileW ORIG_GopherFindFirstFileW;
DEFI_GopherGetAttributeA ORIG_GopherGetAttributeA;
DEFI_GopherGetAttributeW ORIG_GopherGetAttributeW;
DEFI_GopherGetLocatorTypeA ORIG_GopherGetLocatorTypeA;
DEFI_GopherGetLocatorTypeW ORIG_GopherGetLocatorTypeW;
DEFI_GopherOpenFileA ORIG_GopherOpenFileA;
DEFI_GopherOpenFileW ORIG_GopherOpenFileW;
DEFI_HttpAddRequestHeadersA ORIG_HttpAddRequestHeadersA;
DEFI_HttpAddRequestHeadersW ORIG_HttpAddRequestHeadersW;
DEFI_HttpEndRequestA ORIG_HttpEndRequestA;
DEFI_HttpEndRequestW ORIG_HttpEndRequestW;
DEFI_HttpOpenRequestA ORIG_HttpOpenRequestA;
DEFI_HttpOpenRequestW ORIG_HttpOpenRequestW;
DEFI_HttpQueryInfoA ORIG_HttpQueryInfoA;
DEFI_HttpQueryInfoW ORIG_HttpQueryInfoW;
DEFI_HttpSendRequestA ORIG_HttpSendRequestA;
DEFI_HttpSendRequestExA ORIG_HttpSendRequestExA;
DEFI_HttpSendRequestExW ORIG_HttpSendRequestExW;
DEFI_HttpSendRequestW ORIG_HttpSendRequestW;
DEFI_InternetAttemptConnect ORIG_InternetAttemptConnect;
DEFI_InternetAutodial ORIG_InternetAutodial;
DEFI_InternetAutodialHangup ORIG_InternetAutodialHangup;
DEFI_InternetCanonicalizeUrlA ORIG_InternetCanonicalizeUrlA;
DEFI_InternetCanonicalizeUrlW ORIG_InternetCanonicalizeUrlW;
DEFI_InternetCheckConnectionA ORIG_InternetCheckConnectionA;
DEFI_InternetCheckConnectionW ORIG_InternetCheckConnectionW;
DEFI_InternetClearAllPerSiteCookieDecisions ORIG_InternetClearAllPerSiteCookieDecisions;
DEFI_InternetCloseHandle ORIG_InternetCloseHandle;
DEFI_InternetCombineUrlA ORIG_InternetCombineUrlA;
DEFI_InternetCombineUrlW ORIG_InternetCombineUrlW;
DEFI_InternetConfirmZoneCrossing ORIG_InternetConfirmZoneCrossing;
DEFI_InternetConfirmZoneCrossingA ORIG_InternetConfirmZoneCrossingA;
DEFI_InternetConfirmZoneCrossingW ORIG_InternetConfirmZoneCrossingW;
DEFI_InternetConnectA ORIG_InternetConnectA;
DEFI_InternetConnectW ORIG_InternetConnectW;
DEFI_InternetCrackUrlA ORIG_InternetCrackUrlA;
DEFI_InternetCrackUrlW ORIG_InternetCrackUrlW;
DEFI_InternetCreateUrlA ORIG_InternetCreateUrlA;
DEFI_InternetCreateUrlW ORIG_InternetCreateUrlW;
DEFI_InternetDial ORIG_InternetDial;
DEFI_InternetDialA ORIG_InternetDialA;
DEFI_InternetDialW ORIG_InternetDialW;
DEFI_InternetEnumPerSiteCookieDecisionA ORIG_InternetEnumPerSiteCookieDecisionA;
DEFI_InternetEnumPerSiteCookieDecisionW ORIG_InternetEnumPerSiteCookieDecisionW;
DEFI_InternetErrorDlg ORIG_InternetErrorDlg;
DEFI_InternetFindNextFileA ORIG_InternetFindNextFileA;
DEFI_InternetFindNextFileW ORIG_InternetFindNextFileW;
DEFI_InternetFreeCookies ORIG_InternetFreeCookies;
DEFI_InternetGetConnectedState ORIG_InternetGetConnectedState;
DEFI_InternetGetConnectedStateExA ORIG_InternetGetConnectedStateExA;
DEFI_InternetGetConnectedStateExW ORIG_InternetGetConnectedStateExW;
DEFI_InternetGetCookieA ORIG_InternetGetCookieA;
DEFI_InternetGetCookieEx2 ORIG_InternetGetCookieEx2;
DEFI_InternetGetCookieExA ORIG_InternetGetCookieExA;
DEFI_InternetGetCookieExW ORIG_InternetGetCookieExW;
DEFI_InternetGetCookieW ORIG_InternetGetCookieW;
DEFI_InternetGetLastResponseInfoA ORIG_InternetGetLastResponseInfoA;
DEFI_InternetGetLastResponseInfoW ORIG_InternetGetLastResponseInfoW;
DEFI_InternetGetPerSiteCookieDecisionA ORIG_InternetGetPerSiteCookieDecisionA;
DEFI_InternetGetPerSiteCookieDecisionW ORIG_InternetGetPerSiteCookieDecisionW;
DEFI_InternetGoOnline ORIG_InternetGoOnline;
DEFI_InternetGoOnlineA ORIG_InternetGoOnlineA;
DEFI_InternetGoOnlineW ORIG_InternetGoOnlineW;
DEFI_InternetHangUp ORIG_InternetHangUp;
DEFI_InternetInitializeAutoProxyDll ORIG_InternetInitializeAutoProxyDll;
DEFI_InternetLockRequestFile ORIG_InternetLockRequestFile;
DEFI_InternetOpenA ORIG_InternetOpenA;
DEFI_InternetOpenUrlA ORIG_InternetOpenUrlA;
DEFI_InternetOpenUrlW ORIG_InternetOpenUrlW;
DEFI_InternetOpenW ORIG_InternetOpenW;
DEFI_InternetQueryDataAvailable ORIG_InternetQueryDataAvailable;
DEFI_InternetQueryOptionA ORIG_InternetQueryOptionA;
DEFI_InternetQueryOptionW ORIG_InternetQueryOptionW;
DEFI_InternetReadFile ORIG_InternetReadFile;
DEFI_InternetReadFileExA ORIG_InternetReadFileExA;
DEFI_InternetReadFileExW ORIG_InternetReadFileExW;
DEFI_InternetSetCookieA ORIG_InternetSetCookieA;
DEFI_InternetSetCookieEx2 ORIG_InternetSetCookieEx2;
DEFI_InternetSetCookieExA ORIG_InternetSetCookieExA;
DEFI_InternetSetCookieExW ORIG_InternetSetCookieExW;
DEFI_InternetSetCookieW ORIG_InternetSetCookieW;
DEFI_InternetSetDialState ORIG_InternetSetDialState;
DEFI_InternetSetDialStateA ORIG_InternetSetDialStateA;
DEFI_InternetSetDialStateW ORIG_InternetSetDialStateW;
DEFI_InternetSetFilePointer ORIG_InternetSetFilePointer;
DEFI_InternetSetOptionA ORIG_InternetSetOptionA;
DEFI_InternetSetOptionExA ORIG_InternetSetOptionExA;
DEFI_InternetSetOptionExW ORIG_InternetSetOptionExW;
DEFI_InternetSetOptionW ORIG_InternetSetOptionW;
DEFI_InternetSetPerSiteCookieDecisionA ORIG_InternetSetPerSiteCookieDecisionA;
DEFI_InternetSetPerSiteCookieDecisionW ORIG_InternetSetPerSiteCookieDecisionW;
DEFI_InternetSetStatusCallback ORIG_InternetSetStatusCallback;
DEFI_InternetSetStatusCallbackA ORIG_InternetSetStatusCallbackA;
DEFI_InternetSetStatusCallbackW ORIG_InternetSetStatusCallbackW;
DEFI_InternetTimeFromSystemTime ORIG_InternetTimeFromSystemTime;
DEFI_InternetTimeFromSystemTimeA ORIG_InternetTimeFromSystemTimeA;
DEFI_InternetTimeFromSystemTimeW ORIG_InternetTimeFromSystemTimeW;
DEFI_InternetTimeToSystemTime ORIG_InternetTimeToSystemTime;
DEFI_InternetTimeToSystemTimeA ORIG_InternetTimeToSystemTimeA;
DEFI_InternetTimeToSystemTimeW ORIG_InternetTimeToSystemTimeW;
DEFI_InternetUnlockRequestFile ORIG_InternetUnlockRequestFile;
DEFI_InternetWriteFile ORIG_InternetWriteFile;
DEFI_PrivacyGetZonePreferenceW ORIG_PrivacyGetZonePreferenceW;
DEFI_PrivacySetZonePreferenceW ORIG_PrivacySetZonePreferenceW;
DEFI_ReadUrlCacheEntryStream ORIG_ReadUrlCacheEntryStream;
DEFI_ResumeSuspendedDownload ORIG_ResumeSuspendedDownload;
DEFI_RetrieveUrlCacheEntryFileA ORIG_RetrieveUrlCacheEntryFileA;
DEFI_RetrieveUrlCacheEntryFileW ORIG_RetrieveUrlCacheEntryFileW;
DEFI_RetrieveUrlCacheEntryStreamA ORIG_RetrieveUrlCacheEntryStreamA;
DEFI_RetrieveUrlCacheEntryStreamW ORIG_RetrieveUrlCacheEntryStreamW;
DEFI_SetUrlCacheEntryGroup ORIG_SetUrlCacheEntryGroup;
DEFI_SetUrlCacheEntryGroupA ORIG_SetUrlCacheEntryGroupA;
DEFI_SetUrlCacheEntryGroupW ORIG_SetUrlCacheEntryGroupW;
DEFI_SetUrlCacheEntryInfoA ORIG_SetUrlCacheEntryInfoA;
DEFI_SetUrlCacheEntryInfoW ORIG_SetUrlCacheEntryInfoW;
DEFI_SetUrlCacheGroupAttributeA ORIG_SetUrlCacheGroupAttributeA;
DEFI_SetUrlCacheGroupAttributeW ORIG_SetUrlCacheGroupAttributeW;
DEFI_UnlockUrlCacheEntryFile ORIG_UnlockUrlCacheEntryFile;
DEFI_UnlockUrlCacheEntryFileA ORIG_UnlockUrlCacheEntryFileA;
DEFI_UnlockUrlCacheEntryFileW ORIG_UnlockUrlCacheEntryFileW;
DEFI_UnlockUrlCacheEntryStream ORIG_UnlockUrlCacheEntryStream;

wchar_t routerPort[8] = L"53641";

BOOL loadFunctions() {
    mod = LoadLibraryA("wininet.dll");
    if (mod == NULL) { return FALSE; }

    ORIG_CommitUrlCacheEntryA = (DEFI_CommitUrlCacheEntryA) GetProcAddress(mod, "CommitUrlCacheEntryA");
    ORIG_CommitUrlCacheEntryW = (DEFI_CommitUrlCacheEntryW) GetProcAddress(mod, "CommitUrlCacheEntryW");
    ORIG_CreateMD5SSOHash = (DEFI_CreateMD5SSOHash) GetProcAddress(mod, "CreateMD5SSOHash");
    ORIG_CreateUrlCacheEntryA = (DEFI_CreateUrlCacheEntryA) GetProcAddress(mod, "CreateUrlCacheEntryA");
    ORIG_CreateUrlCacheEntryW = (DEFI_CreateUrlCacheEntryW) GetProcAddress(mod, "CreateUrlCacheEntryW");
    ORIG_CreateUrlCacheGroup = (DEFI_CreateUrlCacheGroup) GetProcAddress(mod, "CreateUrlCacheGroup");
    ORIG_DeleteUrlCacheEntry = (DEFI_DeleteUrlCacheEntry)GetProcAddress(mod, "DeleteUrlCacheEntry");
    ORIG_DeleteUrlCacheEntryA = (DEFI_DeleteUrlCacheEntryA) GetProcAddress(mod, "DeleteUrlCacheEntryA");
    ORIG_DeleteUrlCacheEntryW = (DEFI_DeleteUrlCacheEntryW) GetProcAddress(mod, "DeleteUrlCacheEntryW");
    ORIG_DeleteUrlCacheGroup = (DEFI_DeleteUrlCacheGroup) GetProcAddress(mod, "DeleteUrlCacheGroup");
    ORIG_DetectAutoProxyUrl = (DEFI_DetectAutoProxyUrl) GetProcAddress(mod, "DetectAutoProxyUrl");
    ORIG_FindCloseUrlCache = (DEFI_FindCloseUrlCache) GetProcAddress(mod, "FindCloseUrlCache");
    ORIG_FindFirstUrlCacheEntryA = (DEFI_FindFirstUrlCacheEntryA) GetProcAddress(mod, "FindFirstUrlCacheEntryA");
    ORIG_FindFirstUrlCacheEntryExA = (DEFI_FindFirstUrlCacheEntryExA) GetProcAddress(mod, "FindFirstUrlCacheEntryExA");
    ORIG_FindFirstUrlCacheEntryExW = (DEFI_FindFirstUrlCacheEntryExW) GetProcAddress(mod, "FindFirstUrlCacheEntryExW");
    ORIG_FindFirstUrlCacheEntryW = (DEFI_FindFirstUrlCacheEntryW) GetProcAddress(mod, "FindFirstUrlCacheEntryW");
    ORIG_FindFirstUrlCacheGroup = (DEFI_FindFirstUrlCacheGroup) GetProcAddress(mod, "FindFirstUrlCacheGroup");
    ORIG_FindNextUrlCacheEntryA = (DEFI_FindNextUrlCacheEntryA) GetProcAddress(mod, "FindNextUrlCacheEntryA");
    ORIG_FindNextUrlCacheEntryExA = (DEFI_FindNextUrlCacheEntryExA) GetProcAddress(mod, "FindNextUrlCacheEntryExA");
    ORIG_FindNextUrlCacheEntryExW = (DEFI_FindNextUrlCacheEntryExW) GetProcAddress(mod, "FindNextUrlCacheEntryExW");
    ORIG_FindNextUrlCacheEntryW = (DEFI_FindNextUrlCacheEntryW) GetProcAddress(mod, "FindNextUrlCacheEntryW");
    ORIG_FindNextUrlCacheGroup = (DEFI_FindNextUrlCacheGroup) GetProcAddress(mod, "FindNextUrlCacheGroup");
    ORIG_FtpCommandA = (DEFI_FtpCommandA) GetProcAddress(mod, "FtpCommandA");
    ORIG_FtpCommandW = (DEFI_FtpCommandW) GetProcAddress(mod, "FtpCommandW");
    ORIG_FtpCreateDirectoryA = (DEFI_FtpCreateDirectoryA) GetProcAddress(mod, "FtpCreateDirectoryA");
    ORIG_FtpCreateDirectoryW = (DEFI_FtpCreateDirectoryW) GetProcAddress(mod, "FtpCreateDirectoryW");
    ORIG_FtpDeleteFileA = (DEFI_FtpDeleteFileA) GetProcAddress(mod, "FtpDeleteFileA");
    ORIG_FtpDeleteFileW = (DEFI_FtpDeleteFileW) GetProcAddress(mod, "FtpDeleteFileW");
    ORIG_FtpFindFirstFileA = (DEFI_FtpFindFirstFileA) GetProcAddress(mod, "FtpFindFirstFileA");
    ORIG_FtpFindFirstFileW = (DEFI_FtpFindFirstFileW) GetProcAddress(mod, "FtpFindFirstFileW");
    ORIG_FtpGetCurrentDirectoryA = (DEFI_FtpGetCurrentDirectoryA) GetProcAddress(mod, "FtpGetCurrentDirectoryA");
    ORIG_FtpGetCurrentDirectoryW = (DEFI_FtpGetCurrentDirectoryW) GetProcAddress(mod, "FtpGetCurrentDirectoryW");
    ORIG_FtpGetFileA = (DEFI_FtpGetFileA) GetProcAddress(mod, "FtpGetFileA");
    ORIG_FtpGetFileSize = (DEFI_FtpGetFileSize) GetProcAddress(mod, "FtpGetFileSize");
    ORIG_FtpGetFileW = (DEFI_FtpGetFileW) GetProcAddress(mod, "FtpGetFileW");
    ORIG_FtpOpenFileA = (DEFI_FtpOpenFileA) GetProcAddress(mod, "FtpOpenFileA");
    ORIG_FtpOpenFileW = (DEFI_FtpOpenFileW) GetProcAddress(mod, "FtpOpenFileW");
    ORIG_FtpPutFileA = (DEFI_FtpPutFileA) GetProcAddress(mod, "FtpPutFileA");
    ORIG_FtpPutFileW = (DEFI_FtpPutFileW) GetProcAddress(mod, "FtpPutFileW");
    ORIG_FtpRemoveDirectoryA = (DEFI_FtpRemoveDirectoryA) GetProcAddress(mod, "FtpRemoveDirectoryA");
    ORIG_FtpRemoveDirectoryW = (DEFI_FtpRemoveDirectoryW) GetProcAddress(mod, "FtpRemoveDirectoryW");
    ORIG_FtpRenameFileA = (DEFI_FtpRenameFileA) GetProcAddress(mod, "FtpRenameFileA");
    ORIG_FtpRenameFileW = (DEFI_FtpRenameFileW) GetProcAddress(mod, "FtpRenameFileW");
    ORIG_FtpSetCurrentDirectoryA = (DEFI_FtpSetCurrentDirectoryA) GetProcAddress(mod, "FtpSetCurrentDirectoryA");
    ORIG_FtpSetCurrentDirectoryW = (DEFI_FtpSetCurrentDirectoryW) GetProcAddress(mod, "FtpSetCurrentDirectoryW");
    ORIG_GetUrlCacheEntryInfoA = (DEFI_GetUrlCacheEntryInfoA) GetProcAddress(mod, "GetUrlCacheEntryInfoA");
    ORIG_GetUrlCacheEntryInfoExA = (DEFI_GetUrlCacheEntryInfoExA) GetProcAddress(mod, "GetUrlCacheEntryInfoExA");
    ORIG_GetUrlCacheEntryInfoExW = (DEFI_GetUrlCacheEntryInfoExW) GetProcAddress(mod, "GetUrlCacheEntryInfoExW");
    ORIG_GetUrlCacheEntryInfoW = (DEFI_GetUrlCacheEntryInfoW) GetProcAddress(mod, "GetUrlCacheEntryInfoW");
    ORIG_GetUrlCacheGroupAttributeA = (DEFI_GetUrlCacheGroupAttributeA) GetProcAddress(mod, "GetUrlCacheGroupAttributeA");
    ORIG_GetUrlCacheGroupAttributeW = (DEFI_GetUrlCacheGroupAttributeW) GetProcAddress(mod, "GetUrlCacheGroupAttributeW");
    ORIG_GopherCreateLocatorA = (DEFI_GopherCreateLocatorA) GetProcAddress(mod, "GopherCreateLocatorA");
    ORIG_GopherCreateLocatorW = (DEFI_GopherCreateLocatorW) GetProcAddress(mod, "GopherCreateLocatorW");
    ORIG_GopherFindFirstFileA = (DEFI_GopherFindFirstFileA) GetProcAddress(mod, "GopherFindFirstFileA");
    ORIG_GopherFindFirstFileW = (DEFI_GopherFindFirstFileW) GetProcAddress(mod, "GopherFindFirstFileW");
    ORIG_GopherGetAttributeA = (DEFI_GopherGetAttributeA) GetProcAddress(mod, "GopherGetAttributeA");
    ORIG_GopherGetAttributeW = (DEFI_GopherGetAttributeW) GetProcAddress(mod, "GopherGetAttributeW");
    ORIG_GopherGetLocatorTypeA = (DEFI_GopherGetLocatorTypeA) GetProcAddress(mod, "GopherGetLocatorTypeA");
    ORIG_GopherGetLocatorTypeW = (DEFI_GopherGetLocatorTypeW) GetProcAddress(mod, "GopherGetLocatorTypeW");
    ORIG_GopherOpenFileA = (DEFI_GopherOpenFileA) GetProcAddress(mod, "GopherOpenFileA");
    ORIG_GopherOpenFileW = (DEFI_GopherOpenFileW) GetProcAddress(mod, "GopherOpenFileW");
    ORIG_HttpAddRequestHeadersA = (DEFI_HttpAddRequestHeadersA) GetProcAddress(mod, "HttpAddRequestHeadersA");
    ORIG_HttpAddRequestHeadersW = (DEFI_HttpAddRequestHeadersW) GetProcAddress(mod, "HttpAddRequestHeadersW");
    ORIG_HttpEndRequestA = (DEFI_HttpEndRequestA) GetProcAddress(mod, "HttpEndRequestA");
    ORIG_HttpEndRequestW = (DEFI_HttpEndRequestW) GetProcAddress(mod, "HttpEndRequestW");
    ORIG_HttpOpenRequestA = (DEFI_HttpOpenRequestA) GetProcAddress(mod, "HttpOpenRequestA");
    ORIG_HttpOpenRequestW = (DEFI_HttpOpenRequestW) GetProcAddress(mod, "HttpOpenRequestW");
    ORIG_HttpQueryInfoA = (DEFI_HttpQueryInfoA) GetProcAddress(mod, "HttpQueryInfoA");
    ORIG_HttpQueryInfoW = (DEFI_HttpQueryInfoW) GetProcAddress(mod, "HttpQueryInfoW");
    ORIG_HttpSendRequestA = (DEFI_HttpSendRequestA) GetProcAddress(mod, "HttpSendRequestA");
    ORIG_HttpSendRequestExA = (DEFI_HttpSendRequestExA) GetProcAddress(mod, "HttpSendRequestExA");
    ORIG_HttpSendRequestExW = (DEFI_HttpSendRequestExW) GetProcAddress(mod, "HttpSendRequestExW");
    ORIG_HttpSendRequestW = (DEFI_HttpSendRequestW) GetProcAddress(mod, "HttpSendRequestW");
    ORIG_InternetAttemptConnect = (DEFI_InternetAttemptConnect) GetProcAddress(mod, "InternetAttemptConnect");
    ORIG_InternetAutodial = (DEFI_InternetAutodial) GetProcAddress(mod, "InternetAutodial");
    ORIG_InternetAutodialHangup = (DEFI_InternetAutodialHangup) GetProcAddress(mod, "InternetAutodialHangup");
    ORIG_InternetCanonicalizeUrlA = (DEFI_InternetCanonicalizeUrlA) GetProcAddress(mod, "InternetCanonicalizeUrlA");
    ORIG_InternetCanonicalizeUrlW = (DEFI_InternetCanonicalizeUrlW) GetProcAddress(mod, "InternetCanonicalizeUrlW");
    ORIG_InternetCheckConnectionA = (DEFI_InternetCheckConnectionA) GetProcAddress(mod, "InternetCheckConnectionA");
    ORIG_InternetCheckConnectionW = (DEFI_InternetCheckConnectionW) GetProcAddress(mod, "InternetCheckConnectionW");
    ORIG_InternetClearAllPerSiteCookieDecisions = (DEFI_InternetClearAllPerSiteCookieDecisions) GetProcAddress(mod, "InternetClearAllPerSiteCookieDecisions");
    ORIG_InternetCloseHandle = (DEFI_InternetCloseHandle) GetProcAddress(mod, "InternetCloseHandle");
    ORIG_InternetCombineUrlA = (DEFI_InternetCombineUrlA) GetProcAddress(mod, "InternetCombineUrlA");
    ORIG_InternetCombineUrlW = (DEFI_InternetCombineUrlW) GetProcAddress(mod, "InternetCombineUrlW");
    ORIG_InternetConfirmZoneCrossing = (DEFI_InternetConfirmZoneCrossing)GetProcAddress(mod, "InternetConfirmZoneCrossing");
    ORIG_InternetConfirmZoneCrossingA = (DEFI_InternetConfirmZoneCrossingA) GetProcAddress(mod, "InternetConfirmZoneCrossingA");
    ORIG_InternetConfirmZoneCrossingW = (DEFI_InternetConfirmZoneCrossingW) GetProcAddress(mod, "InternetConfirmZoneCrossingW");
    ORIG_InternetConnectA = (DEFI_InternetConnectA) GetProcAddress(mod, "InternetConnectA");
    ORIG_InternetConnectW = (DEFI_InternetConnectW) GetProcAddress(mod, "InternetConnectW");
    ORIG_InternetCrackUrlA = (DEFI_InternetCrackUrlA) GetProcAddress(mod, "InternetCrackUrlA");
    ORIG_InternetCrackUrlW = (DEFI_InternetCrackUrlW) GetProcAddress(mod, "InternetCrackUrlW");
    ORIG_InternetCreateUrlA = (DEFI_InternetCreateUrlA) GetProcAddress(mod, "InternetCreateUrlA");
    ORIG_InternetCreateUrlW = (DEFI_InternetCreateUrlW) GetProcAddress(mod, "InternetCreateUrlW");
    ORIG_InternetDial = (DEFI_InternetDial)GetProcAddress(mod, "InternetDial");
    ORIG_InternetDialA = (DEFI_InternetDialA) GetProcAddress(mod, "InternetDialA");
    ORIG_InternetDialW = (DEFI_InternetDialW) GetProcAddress(mod, "InternetDialW");
    ORIG_InternetEnumPerSiteCookieDecisionA = (DEFI_InternetEnumPerSiteCookieDecisionA) GetProcAddress(mod, "InternetEnumPerSiteCookieDecisionA");
    ORIG_InternetEnumPerSiteCookieDecisionW = (DEFI_InternetEnumPerSiteCookieDecisionW) GetProcAddress(mod, "InternetEnumPerSiteCookieDecisionW");
    ORIG_InternetErrorDlg = (DEFI_InternetErrorDlg) GetProcAddress(mod, "InternetErrorDlg");
    ORIG_InternetFindNextFileA = (DEFI_InternetFindNextFileA) GetProcAddress(mod, "InternetFindNextFileA");
    ORIG_InternetFindNextFileW = (DEFI_InternetFindNextFileW) GetProcAddress(mod, "InternetFindNextFileW");
    ORIG_InternetFreeCookies = (DEFI_InternetFreeCookies) GetProcAddress(mod, "InternetFreeCookies");
    ORIG_InternetGetConnectedState = (DEFI_InternetGetConnectedState) GetProcAddress(mod, "InternetGetConnectedState");
    ORIG_InternetGetConnectedStateExA = (DEFI_InternetGetConnectedStateExA) GetProcAddress(mod, "InternetGetConnectedStateExA");
    ORIG_InternetGetConnectedStateExW = (DEFI_InternetGetConnectedStateExW) GetProcAddress(mod, "InternetGetConnectedStateExW");
    ORIG_InternetGetCookieA = (DEFI_InternetGetCookieA) GetProcAddress(mod, "InternetGetCookieA");
    ORIG_InternetGetCookieEx2 = (DEFI_InternetGetCookieEx2) GetProcAddress(mod, "InternetGetCookieEx2");
    ORIG_InternetGetCookieExA = (DEFI_InternetGetCookieExA) GetProcAddress(mod, "InternetGetCookieExA");
    ORIG_InternetGetCookieExW = (DEFI_InternetGetCookieExW) GetProcAddress(mod, "InternetGetCookieExW");
    ORIG_InternetGetCookieW = (DEFI_InternetGetCookieW) GetProcAddress(mod, "InternetGetCookieW");
    ORIG_InternetGetLastResponseInfoA = (DEFI_InternetGetLastResponseInfoA) GetProcAddress(mod, "InternetGetLastResponseInfoA");
    ORIG_InternetGetLastResponseInfoW = (DEFI_InternetGetLastResponseInfoW) GetProcAddress(mod, "InternetGetLastResponseInfoW");
    ORIG_InternetGetPerSiteCookieDecisionA = (DEFI_InternetGetPerSiteCookieDecisionA) GetProcAddress(mod, "InternetGetPerSiteCookieDecisionA");
    ORIG_InternetGetPerSiteCookieDecisionW = (DEFI_InternetGetPerSiteCookieDecisionW) GetProcAddress(mod, "InternetGetPerSiteCookieDecisionW");
    ORIG_InternetGoOnline = (DEFI_InternetGoOnline)GetProcAddress(mod, "InternetGoOnline");
    ORIG_InternetGoOnlineA = (DEFI_InternetGoOnlineA) GetProcAddress(mod, "InternetGoOnlineA");
    ORIG_InternetGoOnlineW = (DEFI_InternetGoOnlineW) GetProcAddress(mod, "InternetGoOnlineW");
    ORIG_InternetHangUp = (DEFI_InternetHangUp) GetProcAddress(mod, "InternetHangUp");
    ORIG_InternetInitializeAutoProxyDll = (DEFI_InternetInitializeAutoProxyDll) GetProcAddress(mod, "InternetInitializeAutoProxyDll");
    ORIG_InternetLockRequestFile = (DEFI_InternetLockRequestFile) GetProcAddress(mod, "InternetLockRequestFile");
    ORIG_InternetOpenA = (DEFI_InternetOpenA) GetProcAddress(mod, "InternetOpenA");
    ORIG_InternetOpenUrlA = (DEFI_InternetOpenUrlA) GetProcAddress(mod, "InternetOpenUrlA");
    ORIG_InternetOpenUrlW = (DEFI_InternetOpenUrlW) GetProcAddress(mod, "InternetOpenUrlW");
    ORIG_InternetOpenW = (DEFI_InternetOpenW) GetProcAddress(mod, "InternetOpenW");
    ORIG_InternetQueryDataAvailable = (DEFI_InternetQueryDataAvailable) GetProcAddress(mod, "InternetQueryDataAvailable");
    ORIG_InternetQueryOptionA = (DEFI_InternetQueryOptionA) GetProcAddress(mod, "InternetQueryOptionA");
    ORIG_InternetQueryOptionW = (DEFI_InternetQueryOptionW) GetProcAddress(mod, "InternetQueryOptionW");
    ORIG_InternetReadFile = (DEFI_InternetReadFile) GetProcAddress(mod, "InternetReadFile");
    ORIG_InternetReadFileExA = (DEFI_InternetReadFileExA) GetProcAddress(mod, "InternetReadFileExA");
    ORIG_InternetReadFileExW = (DEFI_InternetReadFileExW) GetProcAddress(mod, "InternetReadFileExW");
    ORIG_InternetSetCookieA = (DEFI_InternetSetCookieA) GetProcAddress(mod, "InternetSetCookieA");
    ORIG_InternetSetCookieEx2 = (DEFI_InternetSetCookieEx2) GetProcAddress(mod, "InternetSetCookieEx2");
    ORIG_InternetSetCookieExA = (DEFI_InternetSetCookieExA) GetProcAddress(mod, "InternetSetCookieExA");
    ORIG_InternetSetCookieExW = (DEFI_InternetSetCookieExW) GetProcAddress(mod, "InternetSetCookieExW");
    ORIG_InternetSetCookieW = (DEFI_InternetSetCookieW) GetProcAddress(mod, "InternetSetCookieW");
    ORIG_InternetSetDialState = (DEFI_InternetSetDialState)GetProcAddress(mod, "InternetSetDialState");
    ORIG_InternetSetDialStateA = (DEFI_InternetSetDialStateA) GetProcAddress(mod, "InternetSetDialStateA");
    ORIG_InternetSetDialStateW = (DEFI_InternetSetDialStateW) GetProcAddress(mod, "InternetSetDialStateW");
    ORIG_InternetSetFilePointer = (DEFI_InternetSetFilePointer) GetProcAddress(mod, "InternetSetFilePointer");
    ORIG_InternetSetOptionA = (DEFI_InternetSetOptionA) GetProcAddress(mod, "InternetSetOptionA");
    ORIG_InternetSetOptionExA = (DEFI_InternetSetOptionExA) GetProcAddress(mod, "InternetSetOptionExA");
    ORIG_InternetSetOptionExW = (DEFI_InternetSetOptionExW) GetProcAddress(mod, "InternetSetOptionExW");
    ORIG_InternetSetOptionW = (DEFI_InternetSetOptionW) GetProcAddress(mod, "InternetSetOptionW");
    ORIG_InternetSetPerSiteCookieDecisionA = (DEFI_InternetSetPerSiteCookieDecisionA) GetProcAddress(mod, "InternetSetPerSiteCookieDecisionA");
    ORIG_InternetSetPerSiteCookieDecisionW = (DEFI_InternetSetPerSiteCookieDecisionW) GetProcAddress(mod, "InternetSetPerSiteCookieDecisionW");
    ORIG_InternetSetStatusCallback = (DEFI_InternetSetStatusCallback)GetProcAddress(mod, "InternetSetStatusCallback");
    ORIG_InternetSetStatusCallbackA = (DEFI_InternetSetStatusCallbackA) GetProcAddress(mod, "InternetSetStatusCallbackA");
    ORIG_InternetSetStatusCallbackW = (DEFI_InternetSetStatusCallbackW) GetProcAddress(mod, "InternetSetStatusCallbackW");
    ORIG_InternetTimeFromSystemTime = (DEFI_InternetTimeFromSystemTime)GetProcAddress(mod, "InternetTimeFromSystemTime");
    ORIG_InternetTimeFromSystemTimeA = (DEFI_InternetTimeFromSystemTimeA) GetProcAddress(mod, "InternetTimeFromSystemTimeA");
    ORIG_InternetTimeFromSystemTimeW = (DEFI_InternetTimeFromSystemTimeW) GetProcAddress(mod, "InternetTimeFromSystemTimeW");
    ORIG_InternetTimeToSystemTime = (DEFI_InternetTimeToSystemTime)GetProcAddress(mod, "InternetTimeToSystemTime");
    ORIG_InternetTimeToSystemTimeA = (DEFI_InternetTimeToSystemTimeA) GetProcAddress(mod, "InternetTimeToSystemTimeA");
    ORIG_InternetTimeToSystemTimeW = (DEFI_InternetTimeToSystemTimeW) GetProcAddress(mod, "InternetTimeToSystemTimeW");
    ORIG_InternetUnlockRequestFile = (DEFI_InternetUnlockRequestFile) GetProcAddress(mod, "InternetUnlockRequestFile");
    ORIG_InternetWriteFile = (DEFI_InternetWriteFile) GetProcAddress(mod, "InternetWriteFile");
    ORIG_PrivacyGetZonePreferenceW = (DEFI_PrivacyGetZonePreferenceW) GetProcAddress(mod, "PrivacyGetZonePreferenceW");
    ORIG_PrivacySetZonePreferenceW = (DEFI_PrivacySetZonePreferenceW) GetProcAddress(mod, "PrivacySetZonePreferenceW");
    ORIG_ReadUrlCacheEntryStream = (DEFI_ReadUrlCacheEntryStream) GetProcAddress(mod, "ReadUrlCacheEntryStream");
    ORIG_ResumeSuspendedDownload = (DEFI_ResumeSuspendedDownload) GetProcAddress(mod, "ResumeSuspendedDownload");
    ORIG_RetrieveUrlCacheEntryFileA = (DEFI_RetrieveUrlCacheEntryFileA) GetProcAddress(mod, "RetrieveUrlCacheEntryFileA");
    ORIG_RetrieveUrlCacheEntryFileW = (DEFI_RetrieveUrlCacheEntryFileW) GetProcAddress(mod, "RetrieveUrlCacheEntryFileW");
    ORIG_RetrieveUrlCacheEntryStreamA = (DEFI_RetrieveUrlCacheEntryStreamA) GetProcAddress(mod, "RetrieveUrlCacheEntryStreamA");
    ORIG_RetrieveUrlCacheEntryStreamW = (DEFI_RetrieveUrlCacheEntryStreamW) GetProcAddress(mod, "RetrieveUrlCacheEntryStreamW");
    ORIG_SetUrlCacheEntryGroup = (DEFI_SetUrlCacheEntryGroup)GetProcAddress(mod, "SetUrlCacheEntryGroup");
    ORIG_SetUrlCacheEntryGroupA = (DEFI_SetUrlCacheEntryGroupA) GetProcAddress(mod, "SetUrlCacheEntryGroupA");
    ORIG_SetUrlCacheEntryGroupW = (DEFI_SetUrlCacheEntryGroupW) GetProcAddress(mod, "SetUrlCacheEntryGroupW");
    ORIG_SetUrlCacheEntryInfoA = (DEFI_SetUrlCacheEntryInfoA) GetProcAddress(mod, "SetUrlCacheEntryInfoA");
    ORIG_SetUrlCacheEntryInfoW = (DEFI_SetUrlCacheEntryInfoW) GetProcAddress(mod, "SetUrlCacheEntryInfoW");
    ORIG_GetUrlCacheGroupAttributeA = (DEFI_GetUrlCacheGroupAttributeA) GetProcAddress(mod, "GetUrlCacheGroupAttributeA");
    ORIG_GetUrlCacheGroupAttributeW = (DEFI_GetUrlCacheGroupAttributeW) GetProcAddress(mod, "GetUrlCacheGroupAttributeW");
    ORIG_UnlockUrlCacheEntryFile = (DEFI_UnlockUrlCacheEntryFile)GetProcAddress(mod, "UnlockUrlCacheEntryFile");
    ORIG_UnlockUrlCacheEntryFileA = (DEFI_UnlockUrlCacheEntryFileA) GetProcAddress(mod, "UnlockUrlCacheEntryFileA");
    ORIG_UnlockUrlCacheEntryFileW = (DEFI_UnlockUrlCacheEntryFileW) GetProcAddress(mod, "UnlockUrlCacheEntryFileW");
    ORIG_UnlockUrlCacheEntryStream = (DEFI_UnlockUrlCacheEntryStream) GetProcAddress(mod, "UnlockUrlCacheEntryStream");

    return TRUE;
}

BOOL unloadFunctions() {
    FreeLibrary(mod);
    return TRUE;
}

BOOL APIENTRY DllMain(
    HMODULE hModule,
    DWORD ul_reason_for_call,
    LPVOID lpReserved
) 
{
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:
        case DLL_THREAD_ATTACH:
            GetEnvironmentVariableW(L"INOT_ROUTER_PORT", routerPort, 8);
            return loadFunctions();
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            return unloadFunctions();
    }
}

