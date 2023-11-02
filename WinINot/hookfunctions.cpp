#include "pch.h"
#include "origfunctions.h"

#include <iostream>
#include <string>
#include <map>

extern wchar_t routerPort[8];
std::map<HINTERNET, char*> hostMap;
std::map<HINTERNET, INTERNET_PORT> portMap;

BOOLAPI CommitUrlCacheEntryA(
    _In_ LPCSTR lpszUrlName,
    _In_opt_ LPCSTR lpszLocalFileName,
    _In_ FILETIME ExpireTime,
    _In_ FILETIME LastModifiedTime,
    _In_ DWORD CacheEntryType,
    _In_reads_opt_(cchHeaderInfo) LPBYTE lpHeaderInfo,
    _In_ DWORD cchHeaderInfo,
    _Reserved_ LPCSTR lpszFileExtension,
    _In_opt_ LPCSTR lpszOriginalUrl
)
{
    return ORIG_CommitUrlCacheEntryA(lpszUrlName, lpszLocalFileName, ExpireTime, LastModifiedTime, CacheEntryType, lpHeaderInfo, cchHeaderInfo, lpszFileExtension, lpszOriginalUrl);
}

BOOLAPI CommitUrlCacheEntryW(
    _In_ LPCWSTR lpszUrlName,
    _In_opt_ LPCWSTR lpszLocalFileName,
    _In_ FILETIME ExpireTime,
    _In_ FILETIME LastModifiedTime,
    _In_ DWORD CacheEntryType,
    _In_reads_opt_(cchHeaderInfo) LPWSTR lpszHeaderInfo,
    _In_ DWORD cchHeaderInfo,
    _Reserved_ LPCWSTR lpszFileExtension,
    _In_opt_ LPCWSTR lpszOriginalUrl
)
{
    return ORIG_CommitUrlCacheEntryW(lpszUrlName, lpszLocalFileName, ExpireTime, LastModifiedTime, CacheEntryType, lpszHeaderInfo, cchHeaderInfo, lpszFileExtension, lpszOriginalUrl);
}

BOOLAPI CreateMD5SSOHash(
    _In_ PWSTR    pszChallengeInfo,
    _In_ PWSTR    pwszRealm,
    _In_ PWSTR    pwszTarget,
    _Out_ PBYTE   pbHexHash
)
{
    return ORIG_CreateMD5SSOHash(pszChallengeInfo, pwszRealm, pwszTarget, pbHexHash);
}

BOOLAPI CreateUrlCacheEntryA(
    _In_       LPCSTR lpszUrlName,
    _In_       DWORD dwExpectedFileSize,
    _In_opt_ LPCSTR lpszFileExtension,
    _Inout_updates_(MAX_PATH) LPSTR lpszFileName,
    _In_       DWORD dwReserved
)
{
    return ORIG_CreateUrlCacheEntryA(lpszUrlName, dwExpectedFileSize, lpszFileExtension, lpszFileName, dwReserved);
}

BOOLAPI CreateUrlCacheEntryW(
    _In_       LPCWSTR lpszUrlName,
    _In_       DWORD dwExpectedFileSize,
    _In_opt_ LPCWSTR lpszFileExtension,
    _Inout_updates_(MAX_PATH) LPWSTR lpszFileName,
    _In_       DWORD dwReserved
)
{
    return ORIG_CreateUrlCacheEntryW(lpszUrlName, dwExpectedFileSize, lpszFileExtension, lpszFileName, dwReserved);
}

INTERNETAPI_(GROUPID) CreateUrlCacheGroup(
    _In_   DWORD  dwFlags,
    _Reserved_ LPVOID lpReserved
)
{
    return ORIG_CreateUrlCacheGroup(dwFlags, lpReserved);
}

BOOLAPI DeleteUrlCacheEntryA(
    _In_ LPCSTR lpszUrlName
)
{
    return ORIG_DeleteUrlCacheEntryA(lpszUrlName);
}

BOOLAPI DeleteUrlCacheEntryW(
    _In_ LPCWSTR lpszUrlName
)
{
    return ORIG_DeleteUrlCacheEntryW(lpszUrlName);
}

BOOLAPI DeleteUrlCacheGroup(
    _In_   GROUPID GroupId,
    _In_   DWORD   dwFlags,
    _Reserved_ LPVOID  lpReserved
)
{
    return ORIG_DeleteUrlCacheGroup(GroupId, dwFlags, lpReserved);
}

BOOLAPI DetectAutoProxyUrl(
    _Out_writes_(cchAutoProxyUrl) PSTR pszAutoProxyUrl,
    _In_ DWORD cchAutoProxyUrl,
    _In_ DWORD dwDetectFlags
)
{
    return ORIG_DetectAutoProxyUrl(pszAutoProxyUrl, cchAutoProxyUrl, dwDetectFlags);
}

BOOLAPI FindCloseUrlCache(
    _In_ HANDLE hEnumHandle
)
{
    return ORIG_FindCloseUrlCache(hEnumHandle);
}

INTERNETAPI_(HANDLE) FindFirstUrlCacheEntryA(
    _In_opt_ LPCSTR lpszUrlSearchPattern,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpFirstCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo
)
{
    return ORIG_FindFirstUrlCacheEntryA(lpszUrlSearchPattern, lpFirstCacheEntryInfo, lpcbCacheEntryInfo);
}

INTERNETAPI_(HANDLE) FindFirstUrlCacheEntryExA(
    _In_opt_ LPCSTR  lpszUrlSearchPattern,
    _In_ DWORD dwFlags,
    _In_ DWORD  dwFilter,
    _In_ GROUPID  GroupId,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpFirstCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPVOID lpGroupAttributes,
    _Reserved_ LPDWORD lpcbGroupAttributes,
    _Reserved_ LPVOID lpReserved
)
{
    return ORIG_FindFirstUrlCacheEntryExA(lpszUrlSearchPattern, dwFlags, dwFilter, GroupId, lpFirstCacheEntryInfo, lpcbCacheEntryInfo, lpGroupAttributes, lpcbGroupAttributes, lpReserved);
}

INTERNETAPI_(HANDLE) FindFirstUrlCacheEntryExW(
    _In_opt_ LPCWSTR  lpszUrlSearchPattern,
    _In_ DWORD dwFlags,
    _In_ DWORD  dwFilter,
    _In_ GROUPID  GroupId,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpFirstCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPVOID lpGroupAttributes,
    _Reserved_ LPDWORD lpcbGroupAttributes,
    _Reserved_ LPVOID lpReserved
)
{
    return ORIG_FindFirstUrlCacheEntryExW(lpszUrlSearchPattern, dwFlags, dwFilter, GroupId, lpFirstCacheEntryInfo, lpcbCacheEntryInfo, lpGroupAttributes, lpcbGroupAttributes, lpReserved);
}

INTERNETAPI_(HANDLE) FindFirstUrlCacheEntryW(
    _In_opt_ LPCWSTR lpszUrlSearchPattern,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpFirstCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo
)
{
    return ORIG_FindFirstUrlCacheEntryW(lpszUrlSearchPattern, lpFirstCacheEntryInfo, lpcbCacheEntryInfo);
}

//why is this the only URLCACHEAPI
URLCACHEAPI_(HANDLE) FindFirstUrlCacheGroup(
    _In_        DWORD       dwFlags,
    _In_        DWORD       dwFilter,
    _Reserved_  LPVOID      lpSearchCondition,
    _Reserved_  DWORD       dwSearchCondition,
    _Out_       GROUPID* lpGroupId,
    _Reserved_  LPVOID      lpReserved
)
{
    return ORIG_FindFirstUrlCacheGroup(dwFlags, dwFilter, lpSearchCondition, dwSearchCondition, lpGroupId, lpReserved);
}

BOOLAPI FindNextUrlCacheEntryA(
    _In_ HANDLE hEnumHandle,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpNextCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo
)
{
    return ORIG_FindNextUrlCacheEntryA(hEnumHandle, lpNextCacheEntryInfo, lpcbCacheEntryInfo);
}

BOOLAPI FindNextUrlCacheEntryExA(
    _In_ HANDLE hEnumHandle,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpNextCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPVOID lpGroupAttributes,
    _Reserved_ LPDWORD lpcbGroupAttributes,
    _Reserved_ LPVOID lpReserved
)
{
    return ORIG_FindNextUrlCacheEntryExA(hEnumHandle, lpNextCacheEntryInfo, lpcbCacheEntryInfo, lpGroupAttributes, lpcbGroupAttributes, lpReserved);
}

BOOLAPI FindNextUrlCacheEntryExW(
    _In_ HANDLE hEnumHandle,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpNextCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPVOID lpGroupAttributes,
    _Reserved_ LPDWORD lpcbGroupAttributes,
    _Reserved_ LPVOID lpReserved
)
{
    return ORIG_FindNextUrlCacheEntryExW(hEnumHandle, lpNextCacheEntryInfo, lpcbCacheEntryInfo, lpGroupAttributes, lpcbGroupAttributes, lpReserved);
}

BOOLAPI FindNextUrlCacheEntryW(
    _In_ HANDLE hEnumHandle,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpNextCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo
)
{
    return ORIG_FindNextUrlCacheEntryW(hEnumHandle, lpNextCacheEntryInfo, lpcbCacheEntryInfo);
}

BOOLAPI FindNextUrlCacheGroup(
    _In_        HANDLE      hFind,
    _Out_       GROUPID* lpGroupId,
    _Reserved_  LPVOID      lpReserved
)
{
    return ORIG_FindNextUrlCacheGroup(hFind, lpGroupId, lpReserved);
}

BOOLAPI FtpCommandA(
    _In_ HINTERNET hConnect,
    _In_ BOOL fExpectResponse,
    _In_ DWORD dwFlags,
    _In_ LPCSTR lpszCommand,
    _In_opt_ DWORD_PTR dwContext,
    _Out_opt_ HINTERNET* phFtpCommand
)
{
    return ORIG_FtpCommandA(hConnect, fExpectResponse, dwFlags, lpszCommand, dwContext, phFtpCommand);
}

BOOLAPI FtpCommandW(
    _In_ HINTERNET hConnect,
    _In_ BOOL fExpectResponse,
    _In_ DWORD dwFlags,
    _In_ LPCWSTR lpszCommand,
    _In_opt_ DWORD_PTR dwContext,
    _Out_opt_ HINTERNET* phFtpCommand
)
{
    return ORIG_FtpCommandW(hConnect, fExpectResponse, dwFlags, lpszCommand, dwContext, phFtpCommand);
}

BOOLAPI FtpCreateDirectoryA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszDirectory
)
{
    return ORIG_FtpCreateDirectoryA(hConnect, lpszDirectory);
}

BOOLAPI FtpCreateDirectoryW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszDirectory
)
{
    return ORIG_FtpCreateDirectoryW(hConnect, lpszDirectory);
}

BOOLAPI FtpDeleteFileA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszFileName
)
{
    return ORIG_FtpDeleteFileA(hConnect, lpszFileName);
}

BOOLAPI FtpDeleteFileW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszFileName
)
{
    return ORIG_FtpDeleteFileW(hConnect, lpszFileName);
}

INTERNETAPI_(HINTERNET) FtpFindFirstFileA(
    _In_ HINTERNET hConnect,
    _In_opt_ LPCSTR lpszSearchFile,
    _Out_opt_ LPWIN32_FIND_DATAA lpFindFileData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_FtpFindFirstFileA(hConnect, lpszSearchFile, lpFindFileData, dwFlags, dwContext);
}

INTERNETAPI_(HINTERNET) FtpFindFirstFileW(
    _In_ HINTERNET hConnect,
    _In_opt_ LPCWSTR lpszSearchFile,
    _Out_opt_ LPWIN32_FIND_DATAW lpFindFileData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_FtpFindFirstFileW(hConnect, lpszSearchFile, lpFindFileData, dwFlags, dwContext);
}

BOOLAPI FtpGetCurrentDirectoryA(
    _In_ HINTERNET hConnect,
    _Out_writes_(*lpdwCurrentDirectory) LPSTR lpszCurrentDirectory,
    _Inout_ LPDWORD lpdwCurrentDirectory
)
{
    return ORIG_FtpGetCurrentDirectoryA(hConnect, lpszCurrentDirectory, lpdwCurrentDirectory);
}

BOOLAPI FtpGetCurrentDirectoryW(
    _In_ HINTERNET hConnect,
    _Out_writes_(*lpdwCurrentDirectory) LPWSTR lpszCurrentDirectory,
    _Inout_ LPDWORD lpdwCurrentDirectory
)
{
    return ORIG_FtpGetCurrentDirectoryW(hConnect, lpszCurrentDirectory, lpdwCurrentDirectory);
}

BOOLAPI FtpGetFileA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszRemoteFile,
    _In_ LPCSTR lpszNewFile,
    _In_ BOOL fFailIfExists,
    _In_ DWORD dwFlagsAndAttributes,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_FtpGetFileA(hConnect, lpszRemoteFile, lpszNewFile, fFailIfExists, dwFlagsAndAttributes, dwFlags, dwContext);
}

INTERNETAPI_(DWORD) FtpGetFileSize(
    _In_ HINTERNET hFile,
    _Out_opt_ LPDWORD lpdwFileSizeHigh
)
{
    return ORIG_FtpGetFileSize(hFile, lpdwFileSizeHigh);
}

BOOLAPI FtpGetFileW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszRemoteFile,
    _In_ LPCWSTR lpszNewFile,
    _In_ BOOL fFailIfExists,
    _In_ DWORD dwFlagsAndAttributes,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_FtpGetFileW(hConnect, lpszRemoteFile, lpszNewFile, fFailIfExists, dwFlagsAndAttributes, dwFlags, dwContext);
}

INTERNETAPI_(HINTERNET) FtpOpenFileA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszFileName,
    _In_ DWORD dwAccess,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_FtpOpenFileA(hConnect, lpszFileName, dwAccess, dwFlags, dwContext);
}

INTERNETAPI_(HINTERNET) FtpOpenFileW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszFileName,
    _In_ DWORD dwAccess,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_FtpOpenFileW(hConnect, lpszFileName, dwAccess, dwFlags, dwContext);
}

BOOLAPI FtpPutFileA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszLocalFile,
    _In_ LPCSTR lpszNewRemoteFile,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_FtpPutFileA(hConnect, lpszLocalFile, lpszNewRemoteFile, dwFlags, dwContext);
}

BOOLAPI FtpPutFileW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszLocalFile,
    _In_ LPCWSTR lpszNewRemoteFile,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_FtpPutFileW(hConnect, lpszLocalFile, lpszNewRemoteFile, dwFlags, dwContext);
}

BOOLAPI FtpRemoveDirectoryA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszDirectory
)
{
    return ORIG_FtpRemoveDirectoryA(hConnect, lpszDirectory);
}

BOOLAPI FtpRemoveDirectoryW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszDirectory
)
{
    return ORIG_FtpRemoveDirectoryW(hConnect, lpszDirectory);
}

BOOLAPI FtpRenameFileA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszExisting,
    _In_ LPCSTR lpszNew
)
{
    return ORIG_FtpRenameFileA(hConnect, lpszExisting, lpszNew);
}

BOOLAPI FtpRenameFileW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszExisting,
    _In_ LPCWSTR lpszNew
)
{
    return ORIG_FtpRenameFileW(hConnect, lpszExisting, lpszNew);
}

BOOLAPI FtpSetCurrentDirectoryA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszDirectory
)
{
    return ORIG_FtpSetCurrentDirectoryA(hConnect, lpszDirectory);
}

BOOLAPI FtpSetCurrentDirectoryW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszDirectory
)
{
    return ORIG_FtpSetCurrentDirectoryW(hConnect, lpszDirectory);
}

BOOLAPI GetUrlCacheEntryInfoA(
    _In_ LPCSTR lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo,
    _Inout_opt_ LPDWORD lpcbCacheEntryInfo
)
{
    return ORIG_GetUrlCacheEntryInfoA(lpszUrlName, lpCacheEntryInfo, lpcbCacheEntryInfo);
}

BOOLAPI GetUrlCacheEntryInfoExA(
    _In_ LPCSTR lpszUrl,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo,
    _Inout_opt_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPSTR lpszRedirectUrl,
    _Reserved_ LPDWORD lpcbRedirectUrl,
    _Reserved_ LPVOID lpReserved,
    _In_ DWORD dwFlags
)
{
    return ORIG_GetUrlCacheEntryInfoExA(lpszUrl, lpCacheEntryInfo, lpcbCacheEntryInfo, lpszRedirectUrl, lpcbRedirectUrl, lpReserved, dwFlags);
}

BOOLAPI GetUrlCacheEntryInfoExW(
    _In_ LPCWSTR lpszUrl,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo,
    _Inout_opt_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPWSTR lpszRedirectUrl,
    _Reserved_ LPDWORD lpcbRedirectUrl,
    _Reserved_ LPVOID lpReserved,
    _In_ DWORD dwFlags
)
{
    return ORIG_GetUrlCacheEntryInfoExW(lpszUrl, lpCacheEntryInfo, lpcbCacheEntryInfo, lpszRedirectUrl, lpcbRedirectUrl, lpReserved, dwFlags);
}

BOOLAPI GetUrlCacheEntryInfoW(
    _In_ LPCWSTR lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo,
    _Inout_opt_ LPDWORD lpcbCacheEntryInfo
)
{
    return ORIG_GetUrlCacheEntryInfoW(lpszUrlName, lpCacheEntryInfo, lpcbCacheEntryInfo);
}

BOOLAPI GetUrlCacheGroupAttributeA(
    _In_                            GROUPID                         gid,
    _Reserved_                      DWORD                           dwFlags,
    _In_                            DWORD                           dwAttributes,
    _Out_writes_bytes_(*lpcbGroupInfo)    LPINTERNET_CACHE_GROUP_INFOA    lpGroupInfo,
    _Inout_                         LPDWORD                         lpcbGroupInfo,
    _Reserved_                      LPVOID                          lpReserved
)
{
    return ORIG_GetUrlCacheGroupAttributeA(gid, dwFlags, dwAttributes, lpGroupInfo, lpcbGroupInfo, lpReserved);
}

BOOLAPI GetUrlCacheGroupAttributeW(
    _In_                            GROUPID                         gid,
    _Reserved_                      DWORD                           dwFlags,
    _In_                            DWORD                           dwAttributes,
    _Out_writes_bytes_(*lpcbGroupInfo)    LPINTERNET_CACHE_GROUP_INFOW    lpGroupInfo,
    _Inout_                         LPDWORD                         lpcbGroupInfo,
    _Reserved_                      LPVOID                          lpReserved
)
{
    return ORIG_GetUrlCacheGroupAttributeW(gid, dwFlags, dwAttributes, lpGroupInfo, lpcbGroupInfo, lpReserved);
}

BOOLAPI GopherCreateLocatorA(
    _In_ LPCSTR lpszHost,
    _In_ INTERNET_PORT nServerPort,
    _In_opt_ LPCSTR lpszDisplayString,
    _In_opt_ LPCSTR lpszSelectorString,
    _In_ DWORD dwGopherType,
    _Out_writes_opt_(*lpdwBufferLength) LPSTR lpszLocator,
    _Inout_ LPDWORD lpdwBufferLength
)
{
    return ORIG_GopherCreateLocatorA(lpszHost, nServerPort, lpszDisplayString, lpszSelectorString, dwGopherType, lpszLocator, lpdwBufferLength);
}

BOOLAPI GopherCreateLocatorW(
    _In_ LPCWSTR lpszHost,
    _In_ INTERNET_PORT nServerPort,
    _In_opt_ LPCWSTR lpszDisplayString,
    _In_opt_ LPCWSTR lpszSelectorString,
    _In_ DWORD dwGopherType,
    _Out_writes_opt_(*lpdwBufferLength) LPWSTR lpszLocator,
    _Inout_ LPDWORD lpdwBufferLength
)
{
    return ORIG_GopherCreateLocatorW(lpszHost, nServerPort, lpszDisplayString, lpszSelectorString, dwGopherType, lpszLocator, lpdwBufferLength);
}

INTERNETAPI_(HINTERNET) GopherFindFirstFileA(
    _In_ HINTERNET hConnect,
    _In_opt_ LPCSTR lpszLocator,
    _In_opt_ LPCSTR lpszSearchString,
    _Out_opt_ LPGOPHER_FIND_DATAA lpFindData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_GopherFindFirstFileA(hConnect, lpszLocator, lpszSearchString, lpFindData, dwFlags, dwContext);
}

INTERNETAPI_(HINTERNET) GopherFindFirstFileW(
    _In_ HINTERNET hConnect,
    _In_opt_ LPCWSTR lpszLocator,
    _In_opt_ LPCWSTR lpszSearchString,
    _Out_opt_ LPGOPHER_FIND_DATAW lpFindData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_GopherFindFirstFileW(hConnect, lpszLocator, lpszSearchString, lpFindData, dwFlags, dwContext);
}

BOOLAPI GopherGetAttributeA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszLocator,
    _In_opt_ LPCSTR lpszAttributeName,
    _At_((LPSTR)lpBuffer, _Out_writes_(dwBufferLength)) LPBYTE lpBuffer,
    _In_ DWORD dwBufferLength,
    _Out_ LPDWORD lpdwCharactersReturned,
    _In_opt_ GOPHER_ATTRIBUTE_ENUMERATOR lpfnEnumerator,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_GopherGetAttributeA(hConnect, lpszLocator, lpszAttributeName, lpBuffer, dwBufferLength, lpdwCharactersReturned, lpfnEnumerator, dwContext);
}

BOOLAPI GopherGetAttributeW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszLocator,
    _In_opt_ LPCWSTR lpszAttributeName,
    _At_((LPWSTR)lpBuffer, _Out_writes_(dwBufferLength)) LPBYTE lpBuffer,
    _In_ DWORD dwBufferLength,
    _Out_ LPDWORD lpdwCharactersReturned,
    _In_opt_ GOPHER_ATTRIBUTE_ENUMERATOR lpfnEnumerator,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_GopherGetAttributeW(hConnect, lpszLocator, lpszAttributeName, lpBuffer, dwBufferLength, lpdwCharactersReturned, lpfnEnumerator, dwContext);
}

BOOLAPI GopherGetLocatorTypeA(
    _In_ LPCSTR lpszLocator,
    _Out_ LPDWORD lpdwGopherType
)
{
    return ORIG_GopherGetLocatorTypeA(lpszLocator, lpdwGopherType);
}

BOOLAPI GopherGetLocatorTypeW(
    _In_ LPCWSTR lpszLocator,
    _Out_ LPDWORD lpdwGopherType
)
{
    return ORIG_GopherGetLocatorTypeW(lpszLocator, lpdwGopherType);
}

INTERNETAPI_(HINTERNET) GopherOpenFileA(
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszLocator,
    _In_opt_ LPCSTR lpszView,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_GopherOpenFileA(hConnect, lpszLocator, lpszView, dwFlags, dwContext);
}

INTERNETAPI_(HINTERNET) GopherOpenFileW(
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszLocator,
    _In_opt_ LPCWSTR lpszView,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_GopherOpenFileW(hConnect, lpszLocator, lpszView, dwFlags, dwContext);
}

BOOLAPI HttpAddRequestHeadersA(
    _In_ HINTERNET hRequest,
    _When_(dwHeadersLength == (DWORD)-1, _In_z_)
    _When_(dwHeadersLength != (DWORD)-1, _In_reads_(dwHeadersLength))
    LPCSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_ DWORD dwModifiers
)
{
    return ORIG_HttpAddRequestHeadersA(hRequest, lpszHeaders, dwHeadersLength, dwModifiers);
}

BOOLAPI HttpAddRequestHeadersW(
    _In_ HINTERNET hRequest,
    _When_(dwHeadersLength == (DWORD)-1, _In_z_)
    _When_(dwHeadersLength != (DWORD)-1, _In_reads_(dwHeadersLength))
    LPCWSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_ DWORD dwModifiers
)
{
    return ORIG_HttpAddRequestHeadersW(hRequest, lpszHeaders, dwHeadersLength, dwModifiers);
}

BOOLAPI HttpEndRequestA(
    _In_ HINTERNET hRequest,
    _Out_opt_ LPINTERNET_BUFFERSA lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_HttpEndRequestA(hRequest, lpBuffersOut, dwFlags, dwContext);
}

BOOLAPI HttpEndRequestW(
    _In_ HINTERNET hRequest,
    _Out_opt_ LPINTERNET_BUFFERSW lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_HttpEndRequestW(hRequest, lpBuffersOut, dwFlags, dwContext);
}

INTERNETAPI_(HINTERNET) HttpOpenRequestA(
    _In_ HINTERNET hConnect,
    _In_opt_ LPCSTR lpszVerb,
    _In_opt_ LPCSTR lpszObjectName,
    _In_opt_ LPCSTR lpszVersion,
    _In_opt_ LPCSTR lpszReferrer,
    _In_opt_z_ LPCSTR FAR* lplpszAcceptTypes,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    HINTERNET openHandle = ORIG_HttpOpenRequestA(hConnect, lpszVerb, lpszObjectName, lpszVersion, lpszReferrer, lplpszAcceptTypes, dwFlags, dwContext);

    if (openHandle != NULL) {
        auto hostSearch = hostMap.find(hConnect);
        if (hostSearch != hostMap.end()) {

            size_t serverLen = strlen(hostSearch->second);
            int headerLen = 11 + serverLen + 2;
            char* hostHeader = new char[headerLen + 1];

            sprintf_s(hostHeader, headerLen + 1, "INot-Host: %s\r\n", hostSearch->second);

            ORIG_HttpAddRequestHeadersA(openHandle, hostHeader, headerLen, HTTP_ADDREQ_FLAG_ADD | HTTP_ADDREQ_FLAG_REPLACE);
        }

        auto portSearch = portMap.find(hConnect);
        if (portSearch != portMap.end()) {

            const int headerLen = 11 + 5 + 2;
            char portHeader[headerLen + 1];

            sprintf_s(portHeader, headerLen + 1, "INot-Port: %d\r\n", portSearch->second);

            ORIG_HttpAddRequestHeadersA(openHandle, portHeader, headerLen, HTTP_ADDREQ_FLAG_ADD | HTTP_ADDREQ_FLAG_REPLACE);
        }
    }

    return openHandle;

}

INTERNETAPI_(HINTERNET) HttpOpenRequestW(
    _In_ HINTERNET hConnect,
    _In_opt_ LPCWSTR lpszVerb,
    _In_opt_ LPCWSTR lpszObjectName,
    _In_opt_ LPCWSTR lpszVersion,
    _In_opt_ LPCWSTR lpszReferrer,
    _In_opt_z_ LPCWSTR FAR* lplpszAcceptTypes,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_HttpOpenRequestW(hConnect, lpszVerb, lpszObjectName, lpszVersion, lpszReferrer, lplpszAcceptTypes, dwFlags, dwContext);
}

BOOLAPI HttpQueryInfoA(
    _In_ HINTERNET hRequest,
    _In_ DWORD dwInfoLevel,
    _Inout_updates_bytes_to_opt_(*lpdwBufferLength, *lpdwBufferLength) __out_data_source(NETWORK) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _Inout_opt_ LPDWORD lpdwIndex
)
{
    return ORIG_HttpQueryInfoA(hRequest, dwInfoLevel, lpBuffer, lpdwBufferLength, lpdwIndex);
}

BOOLAPI HttpQueryInfoW(
    _In_ HINTERNET hRequest,
    _In_ DWORD dwInfoLevel,
    _Inout_updates_bytes_to_opt_(*lpdwBufferLength, *lpdwBufferLength) __out_data_source(NETWORK) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _Inout_opt_ LPDWORD lpdwIndex
)
{
    return ORIG_HttpQueryInfoW(hRequest, dwInfoLevel, lpBuffer, lpdwBufferLength, lpdwIndex);
}

BOOLAPI HttpSendRequestA(
    _In_ HINTERNET hRequest,
    _In_reads_opt_(dwHeadersLength) LPCSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_reads_bytes_opt_(dwOptionalLength) LPVOID lpOptional,
    _In_ DWORD dwOptionalLength
)
{
    return ORIG_HttpSendRequestA(hRequest, lpszHeaders, dwHeadersLength, lpOptional, dwOptionalLength);
}

BOOLAPI HttpSendRequestExA(
    _In_ HINTERNET hRequest,
    _In_opt_ LPINTERNET_BUFFERSA lpBuffersIn,
    _Out_opt_ LPINTERNET_BUFFERSA lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_HttpSendRequestExA(hRequest, lpBuffersIn, lpBuffersOut, dwFlags, dwContext);
}

BOOLAPI HttpSendRequestExW(
    _In_ HINTERNET hRequest,
    _In_opt_ LPINTERNET_BUFFERSW lpBuffersIn,
    _Out_opt_ LPINTERNET_BUFFERSW lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_HttpSendRequestExW(hRequest, lpBuffersIn, lpBuffersOut, dwFlags, dwContext);
}

BOOLAPI HttpSendRequestW(
    _In_ HINTERNET hRequest,
    _In_reads_opt_(dwHeadersLength) LPCWSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_reads_bytes_opt_(dwOptionalLength) LPVOID lpOptional,
    _In_ DWORD dwOptionalLength
)
{
    return ORIG_HttpSendRequestW(hRequest, lpszHeaders, dwHeadersLength, lpOptional, dwOptionalLength);
}

INTERNETAPI_(DWORD) InternetAttemptConnect(
    _In_ DWORD dwReserved
)
{
    return ORIG_InternetAttemptConnect(dwReserved);
}

BOOLAPI InternetAutodial(
    _In_       DWORD  dwFlags,
    _In_opt_ HWND   hwndParent
)
{
    return ORIG_InternetAutodial(dwFlags, hwndParent);
}

BOOLAPI InternetAutodialHangup(
    _Reserved_ DWORD    dwReserved
)
{
    return ORIG_InternetAutodialHangup(dwReserved);
}

BOOLAPI InternetCanonicalizeUrlA(
    _In_ LPCSTR lpszUrl,
    _Out_writes_(*lpdwBufferLength) LPSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _In_ DWORD dwFlags
)
{
    return ORIG_InternetCanonicalizeUrlA(lpszUrl, lpszBuffer, lpdwBufferLength, dwFlags);
}

BOOLAPI InternetCanonicalizeUrlW(
    _In_ LPCWSTR lpszUrl,
    _Out_writes_(*lpdwBufferLength) LPWSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _In_ DWORD dwFlags
)
{
    return ORIG_InternetCanonicalizeUrlW(lpszUrl, lpszBuffer, lpdwBufferLength, dwFlags);
}

BOOLAPI InternetCheckConnectionA(
    _In_ LPCSTR lpszUrl,
    _In_ DWORD dwFlags,
    _In_ DWORD dwReserved
)
{
    return ORIG_InternetCheckConnectionA(lpszUrl, dwFlags, dwReserved);
}

BOOLAPI InternetCheckConnectionW(
    _In_ LPCWSTR lpszUrl,
    _In_ DWORD dwFlags,
    _In_ DWORD dwReserved
)
{
    return ORIG_InternetCheckConnectionW(lpszUrl, dwFlags, dwReserved);
}

BOOLAPI InternetClearAllPerSiteCookieDecisions()
{
    return ORIG_InternetClearAllPerSiteCookieDecisions();
}

BOOLAPI InternetCloseHandle(
        _In_ HINTERNET hInternet
)
{
    auto hostSearch = hostMap.find(hInternet);
    if (hostSearch != hostMap.end()) {
        delete[] hostSearch->second;
        hostMap.erase(hostSearch->first);
    }

    auto portSearch = portMap.find(hInternet);
    if (portSearch != portMap.end()) {
        hostMap.erase(portSearch->first);
    }

    return ORIG_InternetCloseHandle(hInternet);
}

BOOLAPI InternetCombineUrlA(
    _In_ LPCSTR lpszBaseUrl,
    _In_ LPCSTR lpszRelativeUrl,
    _Out_writes_(*lpdwBufferLength) LPSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _In_ DWORD dwFlags
)
{
    return ORIG_InternetCombineUrlA(lpszBaseUrl, lpszRelativeUrl, lpszBuffer, lpdwBufferLength, dwFlags);
}

BOOLAPI InternetCombineUrlW(
    _In_ LPCWSTR lpszBaseUrl,
    _In_ LPCWSTR lpszRelativeUrl,
    _Out_writes_(*lpdwBufferLength) LPWSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _In_ DWORD dwFlags
)
{
    return ORIG_InternetCombineUrlW(lpszBaseUrl, lpszRelativeUrl, lpszBuffer, lpdwBufferLength, dwFlags);
}

INTERNETAPI_(DWORD) InternetConfirmZoneCrossingA(
    _In_ HWND hWnd,
    _In_ LPSTR szUrlPrev,
    _In_ LPSTR szUrlNew,
    _In_ BOOL bPost
)
{
    return ORIG_InternetConfirmZoneCrossingA(hWnd, szUrlPrev, szUrlNew, bPost);
}

INTERNETAPI_(DWORD) InternetConfirmZoneCrossingW(
    _In_ HWND hWnd,
    _In_ LPWSTR szUrlPrev,
    _In_ LPWSTR szUrlNew,
    _In_ BOOL bPost
)
{
    return ORIG_InternetConfirmZoneCrossingW(hWnd, szUrlPrev, szUrlNew, bPost);
}

INTERNETAPI_(HINTERNET) InternetConnectA(
    _In_ HINTERNET hInternet,
    _In_ LPCSTR lpszServerName,
    _In_ INTERNET_PORT nServerPort,
    _In_opt_ LPCSTR lpszUserName,
    _In_opt_ LPCSTR lpszPassword,
    _In_ DWORD dwService,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    HINTERNET connectHandle = ORIG_InternetConnectA(hInternet, "127.0.0.1", std::stoi(routerPort), lpszUserName, lpszPassword, dwService, dwFlags, dwContext);
    
    size_t serverLen = strlen(lpszServerName);
    char* serverCopy = new char[serverLen+1];
    strncpy_s(serverCopy, serverLen+1, lpszServerName, serverLen);

    hostMap[connectHandle] = serverCopy;
    portMap[connectHandle] = nServerPort;

    return connectHandle;
}

INTERNETAPI_(HINTERNET) InternetConnectW(
    _In_ HINTERNET hInternet,
    _In_ LPCWSTR lpszServerName,
    _In_ INTERNET_PORT nServerPort,
    _In_opt_ LPCWSTR lpszUserName,
    _In_opt_ LPCWSTR lpszPassword,
    _In_ DWORD dwService,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_InternetConnectW(hInternet, lpszServerName, nServerPort, lpszUserName, lpszPassword, dwService, dwFlags, dwContext);
}

BOOLAPI InternetCrackUrlA(
    _In_reads_(dwUrlLength) LPCSTR lpszUrl,
    _In_ DWORD dwUrlLength,
    _In_ DWORD dwFlags,
    _Inout_ LPURL_COMPONENTSA lpUrlComponents
)
{
    return ORIG_InternetCrackUrlA(lpszUrl, dwUrlLength, dwFlags, lpUrlComponents);
}

BOOLAPI InternetCrackUrlW(
    _In_reads_(dwUrlLength) LPCWSTR lpszUrl,
    _In_ DWORD dwUrlLength,
    _In_ DWORD dwFlags,
    _Inout_ LPURL_COMPONENTSW lpUrlComponents
)
{
    return ORIG_InternetCrackUrlW(lpszUrl, dwUrlLength, dwFlags, lpUrlComponents);
}

BOOLAPI InternetCreateUrlA(
    _In_ LPURL_COMPONENTSA lpUrlComponents,
    _In_ DWORD dwFlags,
    _Out_writes_opt_(*lpdwUrlLength) LPSTR lpszUrl,
    _Inout_ LPDWORD lpdwUrlLength
)
{
    return ORIG_InternetCreateUrlA(lpUrlComponents, dwFlags, lpszUrl, lpdwUrlLength);
}

BOOLAPI InternetCreateUrlW(
    _In_ LPURL_COMPONENTSW lpUrlComponents,
    _In_ DWORD dwFlags,
    _Out_writes_opt_(*lpdwUrlLength) LPWSTR lpszUrl,
    _Inout_ LPDWORD lpdwUrlLength
)
{
    return ORIG_InternetCreateUrlW(lpUrlComponents, dwFlags, lpszUrl, lpdwUrlLength);
}

INTERNETAPI_(DWORD) InternetDialA(
    _In_ HWND     hwndParent,
    _In_opt_ LPSTR   lpszConnectoid,
    _In_ DWORD    dwFlags,
    _Out_ DWORD_PTR* lpdwConnection,
    _Reserved_ DWORD    dwReserved
)
{
    return ORIG_InternetDialA(hwndParent, lpszConnectoid, dwFlags, lpdwConnection, dwReserved);
}

INTERNETAPI_(DWORD) InternetDialW(
    _In_ HWND     hwndParent,
    _In_opt_ LPWSTR   lpszConnectoid,
    _In_ DWORD    dwFlags,
    _Out_ DWORD_PTR* lpdwConnection,
    _Reserved_ DWORD    dwReserved
)
{
    return ORIG_InternetDialW(hwndParent, lpszConnectoid, dwFlags, lpdwConnection, dwReserved);
}

BOOLAPI InternetEnumPerSiteCookieDecisionA(
    _Out_writes_to_(*pcSiteNameSize, *pcSiteNameSize) LPSTR pszSiteName,
    _Inout_ unsigned long* pcSiteNameSize,
    _Out_ unsigned long* pdwDecision,
    _In_ unsigned long dwIndex
)
{
    return ORIG_InternetEnumPerSiteCookieDecisionA(pszSiteName, pcSiteNameSize, pdwDecision, dwIndex);
}

BOOLAPI InternetEnumPerSiteCookieDecisionW(
    _Out_writes_to_(*pcSiteNameSize, *pcSiteNameSize) LPWSTR pszSiteName,
    _Inout_ unsigned long* pcSiteNameSize,
    _Out_ unsigned long* pdwDecision,
    _In_ unsigned long dwIndex
)
{
    return ORIG_InternetEnumPerSiteCookieDecisionW(pszSiteName, pcSiteNameSize, pdwDecision, dwIndex);
}

INTERNETAPI_(DWORD) InternetErrorDlg(
    _In_ HWND hWnd,
    _Inout_opt_ HINTERNET hRequest,
    _In_ DWORD dwError,
    _In_ DWORD dwFlags,
    _Inout_opt_ LPVOID* lppvData
)
{
    return ORIG_InternetErrorDlg(hWnd, hRequest, dwError, dwFlags, lppvData);
}

BOOLAPI InternetFindNextFileA(
    _In_ HINTERNET hFind,
    _Out_ LPVOID lpvFindData
)
{
    return ORIG_InternetFindNextFileA(hFind, lpvFindData);
}

BOOLAPI InternetFindNextFileW(
    _In_ HINTERNET hFind,
    _Out_ LPVOID lpvFindData
)
{
    return ORIG_InternetFindNextFileW(hFind, lpvFindData);
}

INTERNETAPI_(VOID) InternetFreeCookies(
    _Inout_opt_ INTERNET_COOKIE2* pCookies,
    _In_ DWORD dwCookieCount
)
{
    return ORIG_InternetFreeCookies(pCookies, dwCookieCount);
}

BOOLAPI InternetGetConnectedState(
    _Out_  LPDWORD  lpdwFlags,
    _Reserved_ DWORD    dwReserved
)
{
    return ORIG_InternetGetConnectedState(lpdwFlags, dwReserved);
}

BOOLAPI InternetGetConnectedStateExA(
    _Out_opt_ LPDWORD lpdwFlags,
    _Out_writes_opt_(cchNameLen) LPSTR lpszConnectionName,
    _In_ DWORD cchNameLen,
    _Reserved_ DWORD dwReserved
)
{
    return ORIG_InternetGetConnectedStateExA(lpdwFlags, lpszConnectionName, cchNameLen, dwReserved);
}

BOOLAPI InternetGetConnectedStateExW(
    _Out_opt_ LPDWORD lpdwFlags,
    _Out_writes_opt_(cchNameLen) LPWSTR lpszConnectionName,
    _In_ DWORD cchNameLen,
    _Reserved_ DWORD dwReserved
)
{
    return ORIG_InternetGetConnectedStateExW(lpdwFlags, lpszConnectionName, cchNameLen, dwReserved);
}

BOOLAPI InternetGetCookieA(
    _In_ LPCSTR lpszUrl,
    _In_opt_ LPCSTR lpszCookieName,
    _Out_writes_opt_(*lpdwSize) LPSTR lpszCookieData,
    _Inout_ LPDWORD lpdwSize
)
{
    return ORIG_InternetGetCookieA(lpszUrl, lpszCookieName, lpszCookieData, lpdwSize);
}

INTERNETAPI_(DWORD) InternetGetCookieEx2(
    _In_ PCWSTR pcwszUrl,
    _In_opt_ PCWSTR pcwszCookieName,
    _In_ DWORD dwFlags,
    _Outptr_ INTERNET_COOKIE2** ppCookies,
    _Out_ PDWORD pdwCookieCount
)
{
    return ORIG_InternetGetCookieEx2(pcwszUrl, pcwszCookieName, dwFlags, ppCookies, pdwCookieCount);
}

BOOLAPI InternetGetCookieExA(
    _In_ LPCSTR lpszUrl,
    _In_opt_ LPCSTR lpszCookieName,
    _In_reads_opt_(*lpdwSize) LPSTR lpszCookieData,
    _Inout_ LPDWORD lpdwSize,
    _In_ DWORD dwFlags,
    _Reserved_ LPVOID lpReserved
)
{
    return ORIG_InternetGetCookieExA(lpszUrl, lpszCookieName, lpszCookieData, lpdwSize, dwFlags, lpReserved);
}

BOOLAPI InternetGetCookieExW(
    _In_ LPCWSTR lpszUrl,
    _In_opt_ LPCWSTR lpszCookieName,
    _In_reads_opt_(*lpdwSize) LPWSTR lpszCookieData,
    _Inout_ LPDWORD lpdwSize,
    _In_ DWORD dwFlags,
    _Reserved_ LPVOID lpReserved
)
{
    return ORIG_InternetGetCookieExW(lpszUrl, lpszCookieName, lpszCookieData, lpdwSize, dwFlags, lpReserved);
}

BOOLAPI InternetGetCookieW(
    _In_ LPCWSTR lpszUrl,
    _In_opt_ LPCWSTR lpszCookieName,
    _Out_writes_opt_(*lpdwSize) LPWSTR lpszCookieData,
    _Inout_ LPDWORD lpdwSize
)
{
    return ORIG_InternetGetCookieW(lpszUrl, lpszCookieName, lpszCookieData, lpdwSize);
}

BOOLAPI InternetGetLastResponseInfoA(
    _Out_ LPDWORD lpdwError,
    _Out_writes_opt_(*lpdwBufferLength) LPSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength
)
{
    return ORIG_InternetGetLastResponseInfoA(lpdwError, lpszBuffer, lpdwBufferLength);
}

BOOLAPI InternetGetLastResponseInfoW(
    _Out_ LPDWORD lpdwError,
    _Out_writes_opt_(*lpdwBufferLength) LPWSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength
)
{
    return ORIG_InternetGetLastResponseInfoW(lpdwError, lpszBuffer, lpdwBufferLength);
}

BOOLAPI InternetGetPerSiteCookieDecisionA(
    _In_ LPCSTR pchHostName,
    _Out_ unsigned long* pResult
)
{
    return ORIG_InternetGetPerSiteCookieDecisionA(pchHostName, pResult);
}

BOOLAPI InternetGetPerSiteCookieDecisionW(
    _In_ LPCWSTR pchHostName,
    _Out_ unsigned long* pResult
)
{
    return ORIG_InternetGetPerSiteCookieDecisionW(pchHostName, pResult);
}

BOOLAPI InternetGoOnlineA(
    _In_opt_ LPCSTR lpszURL,
    _In_ HWND     hwndParent,
    _In_ DWORD    dwFlags
)
{
    return ORIG_InternetGoOnlineA(lpszURL, hwndParent, dwFlags);
}

BOOLAPI InternetGoOnlineW(
    _In_opt_ LPCWSTR lpszURL,
    _In_ HWND     hwndParent,
    _In_ DWORD    dwFlags
)
{
    return ORIG_InternetGoOnlineW(lpszURL, hwndParent, dwFlags);
}

INTERNETAPI_(DWORD) InternetHangUp(
    _In_   DWORD_PTR    dwConnection,
    _Reserved_ DWORD        dwReserved
)
{
    return ORIG_InternetHangUp(dwConnection, dwReserved);
}

BOOLAPI InternetInitializeAutoProxyDll(
    _In_ DWORD dwReserved
)
{
    return ORIG_InternetInitializeAutoProxyDll(dwReserved);
}

BOOLAPI InternetLockRequestFile(
    _In_  HINTERNET hInternet,
    _Out_ HANDLE* lphLockRequestInfo
)
{
    return ORIG_InternetLockRequestFile(hInternet, lphLockRequestInfo);
}

INTERNETAPI_(HINTERNET) InternetOpenA(
    _In_opt_ LPCSTR lpszAgent,
    _In_ DWORD dwAccessType,
    _In_opt_ LPCSTR lpszProxy,
    _In_opt_ LPCSTR lpszProxyBypass,
    _In_ DWORD dwFlags
)
{
    return ORIG_InternetOpenA(lpszAgent, dwAccessType, lpszProxy, lpszProxy, dwFlags);
}

INTERNETAPI_(HINTERNET) InternetOpenUrlA(
    _In_ HINTERNET hInternet,
    _In_ LPCSTR lpszUrl,
    _In_reads_opt_(dwHeadersLength) LPCSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_InternetOpenUrlA(hInternet, lpszUrl, lpszHeaders, dwHeadersLength, dwFlags, dwContext);
}

INTERNETAPI_(HINTERNET) InternetOpenUrlW(
    _In_ HINTERNET hInternet,
    _In_ LPCWSTR lpszUrl,
    _In_reads_opt_(dwHeadersLength) LPCWSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_InternetOpenUrlW(hInternet, lpszUrl, lpszHeaders, dwHeadersLength, dwFlags, dwContext);
}

INTERNETAPI_(HINTERNET) InternetOpenW(
    _In_opt_ LPCWSTR lpszAgent,
    _In_ DWORD dwAccessType,
    _In_opt_ LPCWSTR lpszProxy,
    _In_opt_ LPCWSTR lpszProxyBypass,
    _In_ DWORD dwFlags
)
{
    return ORIG_InternetOpenW(lpszAgent, dwAccessType, lpszProxy, lpszProxyBypass, dwFlags);
}

BOOLAPI InternetQueryDataAvailable(
    _In_ HINTERNET hFile,
    _Out_opt_ __out_data_source(NETWORK) LPDWORD lpdwNumberOfBytesAvailable,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_InternetQueryDataAvailable(hFile, lpdwNumberOfBytesAvailable, dwFlags, dwContext);
}

BOOLAPI InternetQueryOptionA(
    _In_opt_ HINTERNET hInternet,
    _In_ DWORD dwOption,
    _Out_writes_bytes_to_opt_(*lpdwBufferLength, *lpdwBufferLength) __out_data_source(NETWORK) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwBufferLength
)
{
    return ORIG_InternetQueryOptionA(hInternet, dwOption, lpBuffer, lpdwBufferLength);
}

BOOLAPI InternetQueryOptionW(
    _In_opt_ HINTERNET hInternet,
    _In_ DWORD dwOption,
    _Out_writes_bytes_to_opt_(*lpdwBufferLength, *lpdwBufferLength) __out_data_source(NETWORK) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwBufferLength
)
{
    return ORIG_InternetQueryOptionW(hInternet, dwOption, lpBuffer, lpdwBufferLength);
}

BOOLAPI InternetReadFile(
    _In_ HINTERNET hFile,
    _Out_writes_bytes_(dwNumberOfBytesToRead) __out_data_source(NETWORK) LPVOID lpBuffer,
    _In_ DWORD dwNumberOfBytesToRead,
    _Out_ LPDWORD lpdwNumberOfBytesRead
)
{
    return ORIG_InternetReadFile(hFile, lpBuffer, dwNumberOfBytesToRead, lpdwNumberOfBytesRead);
}

BOOLAPI InternetReadFileExA(
    _In_ HINTERNET hFile,
    _Out_ __out_data_source(NETWORK) LPINTERNET_BUFFERSA lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_InternetReadFileExA(hFile, lpBuffersOut, dwFlags, dwContext);
}

BOOLAPI InternetReadFileExW(
    _In_ HINTERNET hFile,
    _Out_ __out_data_source(NETWORK) LPINTERNET_BUFFERSW lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
)
{
    return ORIG_InternetReadFileExW(hFile, lpBuffersOut, dwFlags, dwContext);
}

BOOLAPI InternetSetCookieA(
    _In_ LPCSTR lpszUrl,
    _In_opt_ LPCSTR lpszCookieName,
    _In_ LPCSTR lpszCookieData
)
{
    return ORIG_InternetSetCookieA(lpszUrl, lpszCookieName, lpszCookieData);
}

INTERNETAPI_(DWORD) InternetSetCookieEx2(
    _In_ PCWSTR pcwszUrl,
    _In_ const INTERNET_COOKIE2* pCookie,
    _In_opt_ PCWSTR pcwszP3PPolicy,
    _In_ DWORD dwFlags,
    _Out_ PDWORD pdwCookieState
)
{
    return ORIG_InternetSetCookieEx2(pcwszUrl, pCookie, pcwszP3PPolicy, dwFlags, pdwCookieState);
}

INTERNETAPI_(DWORD) InternetSetCookieExA(
    _In_ LPCSTR lpszUrl,
    _In_opt_ LPCSTR lpszCookieName,
    _In_ LPCSTR lpszCookieData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwReserved
)
{
    return ORIG_InternetSetCookieExA(lpszUrl, lpszCookieData, lpszCookieData, dwFlags, dwReserved);
}

INTERNETAPI_(DWORD) InternetSetCookieExW(
    _In_ LPCWSTR lpszUrl,
    _In_opt_ LPCWSTR lpszCookieName,
    _In_ LPCWSTR lpszCookieData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwReserved
)
{
    return ORIG_InternetSetCookieExW(lpszUrl, lpszCookieData, lpszCookieData, dwFlags, dwReserved);
}

BOOLAPI InternetSetCookieW(
    _In_ LPCWSTR lpszUrl,
    _In_opt_ LPCWSTR lpszCookieName,
    _In_ LPCWSTR lpszCookieData
)
{
    return ORIG_InternetSetCookieW(lpszUrl, lpszCookieName, lpszCookieData);
}

BOOLAPI InternetSetDialStateA(
    _In_opt_ LPCSTR lpszConnectoid,
    _In_ DWORD    dwState,
    _Reserved_ DWORD    dwReserved
)
{
    return ORIG_InternetSetDialStateA(lpszConnectoid, dwState, dwReserved);
}

BOOLAPI InternetSetDialStateW(
    _In_opt_ LPCWSTR lpszConnectoid,
    _In_ DWORD    dwState,
    _Reserved_ DWORD    dwReserved
)
{
    return ORIG_InternetSetDialStateW(lpszConnectoid, dwState, dwReserved);
}

INTERNETAPI_(DWORD) InternetSetFilePointer(
    _In_ HINTERNET hFile,
    _In_ LONG  lDistanceToMove,
    _Inout_opt_ PLONG lpDistanceToMoveHigh,
    _In_ DWORD dwMoveMethod,
    _Reserved_ DWORD_PTR dwContext
)
{
    return ORIG_InternetSetFilePointer(hFile, lDistanceToMove, lpDistanceToMoveHigh, dwMoveMethod, dwContext);
}

BOOLAPI InternetSetOptionA(
    _In_opt_ HINTERNET hInternet,
    _In_       DWORD dwOption,
    _In_opt_ LPVOID lpBuffer,
    _In_       DWORD dwBufferLength
)
{
    return ORIG_InternetSetOptionA(hInternet, dwOption, lpBuffer, dwBufferLength);
}

BOOLAPI InternetSetOptionExA(
    _In_opt_ HINTERNET hInternet,
    _In_       DWORD dwOption,
    _In_opt_ LPVOID lpBuffer,
    _In_       DWORD dwBufferLength,
    _In_       DWORD dwFlags
)
{
    return ORIG_InternetSetOptionExA(hInternet, dwOption, lpBuffer, dwBufferLength, dwFlags);
}

BOOLAPI InternetSetOptionExW(
    _In_opt_ HINTERNET hInternet,
    _In_       DWORD dwOption,
    _In_opt_ LPVOID lpBuffer,
    _In_       DWORD dwBufferLength,
    _In_       DWORD dwFlags
)
{
    return ORIG_InternetSetOptionExW(hInternet, dwOption, lpBuffer, dwBufferLength, dwFlags);
}

BOOLAPI InternetSetOptionW(
    _In_opt_ HINTERNET hInternet,
    _In_       DWORD dwOption,
    _In_opt_ LPVOID lpBuffer,
    _In_       DWORD dwBufferLength
)
{
    return ORIG_InternetSetOptionW(hInternet, dwOption, lpBuffer, dwBufferLength);
}

BOOLAPI InternetSetPerSiteCookieDecisionA(
    _In_ LPCSTR pchHostName,
    _In_ DWORD dwDecision
)
{
    return ORIG_InternetSetPerSiteCookieDecisionA(pchHostName, dwDecision);
}

BOOLAPI InternetSetPerSiteCookieDecisionW(
    _In_ LPCWSTR pchHostName,
    _In_ DWORD dwDecision
)
{
    return ORIG_InternetSetPerSiteCookieDecisionW(pchHostName, dwDecision);
}

INTERNETAPI_(INTERNET_STATUS_CALLBACK) InternetSetStatusCallbackA(
    _In_ HINTERNET hInternet,
    _In_opt_ INTERNET_STATUS_CALLBACK lpfnInternetCallback
)
{
    return ORIG_InternetSetStatusCallbackA(hInternet, lpfnInternetCallback);
}

INTERNETAPI_(INTERNET_STATUS_CALLBACK) InternetSetStatusCallbackW(
    _In_ HINTERNET hInternet,
    _In_opt_ INTERNET_STATUS_CALLBACK lpfnInternetCallback
)
{
    return ORIG_InternetSetStatusCallbackW(hInternet, lpfnInternetCallback);
}

BOOLAPI InternetTimeFromSystemTimeA(
    _In_ CONST SYSTEMTIME* pst,           // input GMT time
    _In_ DWORD dwRFC,                     // RFC format
    _Out_writes_bytes_(cbTime) LPSTR lpszTime,  // output string buffer
    _In_ DWORD cbTime                     // output buffer size
)
{
    return ORIG_InternetTimeFromSystemTimeA(pst, dwRFC, lpszTime, cbTime);
}

BOOLAPI InternetTimeFromSystemTimeW(
    _In_ CONST SYSTEMTIME* pst,            // input GMT time
    _In_ DWORD dwRFC,                      // RFC format
    _Out_writes_bytes_(cbTime) LPWSTR lpszTime,  // output string buffer
    _In_ DWORD cbTime                      // output buffer size
)
{
    return ORIG_InternetTimeFromSystemTimeW(pst, dwRFC, lpszTime, cbTime);
}

BOOLAPI InternetTimeToSystemTimeA(
    _In_ LPCSTR lpszTime,          // NULL terminated string
    _Out_ SYSTEMTIME* pst,         // output in GMT time
    _Reserved_ DWORD dwReserved
)
{
    return ORIG_InternetTimeToSystemTimeA(lpszTime, pst, dwReserved);
}

BOOLAPI InternetTimeToSystemTimeW(
    _In_ LPCWSTR lpszTime,         // NULL terminated string
    _Out_ SYSTEMTIME* pst,         // output in GMT time
    _Reserved_ DWORD dwReserved
)
{
    return ORIG_InternetTimeToSystemTimeW(lpszTime, pst, dwReserved);
}

BOOLAPI InternetUnlockRequestFile(
    _Inout_ HANDLE hLockRequestInfo
)
{
    return ORIG_InternetUnlockRequestFile(hLockRequestInfo);
}

BOOLAPI InternetWriteFile(
    _In_ HINTERNET hFile,
    _In_reads_bytes_(dwNumberOfBytesToWrite) LPCVOID lpBuffer,
    _In_ DWORD dwNumberOfBytesToWrite,
    _Out_ LPDWORD lpdwNumberOfBytesWritten
)
{
    return ORIG_InternetWriteFile(hFile, lpBuffer, dwNumberOfBytesToWrite, lpdwNumberOfBytesWritten);
}

INTERNETAPI_(DWORD) PrivacyGetZonePreferenceW(
    _In_ DWORD dwZone,
    _In_ DWORD dwType,
    _Out_opt_ LPDWORD pdwTemplate,
    _Out_writes_opt_(*pdwBufferLength) LPWSTR pszBuffer,
    _Inout_opt_ LPDWORD pdwBufferLength
)
{
    return ORIG_PrivacyGetZonePreferenceW(dwZone, dwType, pdwTemplate, pszBuffer, pdwBufferLength);
}

INTERNETAPI_(DWORD) PrivacySetZonePreferenceW(
    _In_ DWORD       dwZone,
    _In_ DWORD       dwType,
    _In_ DWORD       dwTemplate,
    _In_opt_ LPCWSTR     pszPreference
)
{
    return ORIG_PrivacySetZonePreferenceW(dwZone, dwType, dwTemplate, pszPreference);
}

BOOLAPI ReadUrlCacheEntryStream(
    _In_ HANDLE hUrlCacheStream,
    _In_ DWORD dwLocation,
    _Out_writes_bytes_(*lpdwLen) __out_data_source(NETWORK) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwLen,
    _Reserved_ DWORD Reserved
)
{
    return ORIG_ReadUrlCacheEntryStream(hUrlCacheStream, dwLocation, lpBuffer, lpdwLen, Reserved);
}

BOOLAPI ResumeSuspendedDownload(
    _In_ HINTERNET hRequest,
    _In_ DWORD dwResultCode
)
{
    return ORIG_ResumeSuspendedDownload(hRequest, dwResultCode);
}

BOOLAPI RetrieveUrlCacheEntryFileA(
    _In_ LPCSTR lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ DWORD dwReserved
)
{
    return ORIG_RetrieveUrlCacheEntryFileA(lpszUrlName, lpCacheEntryInfo, lpcbCacheEntryInfo, dwReserved);
}

BOOLAPI RetrieveUrlCacheEntryFileW(
    _In_ LPCWSTR lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ DWORD dwReserved
)
{
    return ORIG_RetrieveUrlCacheEntryFileW(lpszUrlName, lpCacheEntryInfo, lpcbCacheEntryInfo, dwReserved);
}

INTERNETAPI_(HANDLE) RetrieveUrlCacheEntryStreamA(
    _In_ LPCSTR  lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _In_ BOOL fRandomRead,
    _Reserved_ DWORD dwReserved
)
{
    return ORIG_RetrieveUrlCacheEntryStreamA(lpszUrlName, lpCacheEntryInfo, lpcbCacheEntryInfo, fRandomRead, dwReserved);
}

INTERNETAPI_(HANDLE) RetrieveUrlCacheEntryStreamW(
    _In_ LPCWSTR  lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _In_ BOOL fRandomRead,
    _Reserved_ DWORD dwReserved
)
{
    return ORIG_RetrieveUrlCacheEntryStreamW(lpszUrlName, lpCacheEntryInfo, lpcbCacheEntryInfo, fRandomRead, dwReserved);
}

BOOLAPI SetUrlCacheEntryGroupA(
    _In_   LPCSTR   lpszUrlName,
    _In_   DWORD    dwFlags,
    _In_   GROUPID  GroupId,
    _Reserved_ LPBYTE   pbGroupAttributes,
    _Reserved_ DWORD    cbGroupAttributes,
    _Reserved_ LPVOID   lpReserved
)
{
    return ORIG_SetUrlCacheEntryGroupA(lpszUrlName, dwFlags, GroupId, pbGroupAttributes, cbGroupAttributes, lpReserved);
}

BOOLAPI SetUrlCacheEntryGroupW(
    _In_   LPCWSTR  lpszUrlName,
    _In_   DWORD    dwFlags,
    _In_   GROUPID  GroupId,
    _Reserved_ LPBYTE   pbGroupAttributes,
    _Reserved_ DWORD    cbGroupAttributes,
    _Reserved_ LPVOID   lpReserved
)
{
    return ORIG_SetUrlCacheEntryGroupW(lpszUrlName, dwFlags, GroupId, pbGroupAttributes, cbGroupAttributes, lpReserved);
}

BOOLAPI SetUrlCacheEntryInfoA(
    _In_ LPCSTR lpszUrlName,
    _In_ LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo,
    _In_ DWORD dwFieldControl
)
{
    return ORIG_SetUrlCacheEntryInfoA(lpszUrlName, lpCacheEntryInfo, dwFieldControl);
}

BOOLAPI SetUrlCacheEntryInfoW(
    _In_ LPCWSTR lpszUrlName,
    _In_ LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo,
    _In_ DWORD dwFieldControl
)
{
    return ORIG_SetUrlCacheEntryInfoW(lpszUrlName, lpCacheEntryInfo, dwFieldControl);
}

BOOLAPI SetUrlCacheGroupAttributeA(
    _In_        GROUPID                         gid,
    _Reserved_  DWORD                           dwFlags,
    _In_        DWORD                           dwAttributes,
    _In_        LPINTERNET_CACHE_GROUP_INFOA    lpGroupInfo,
    _Reserved_  LPVOID                          lpReserved
)
{
    return ORIG_SetUrlCacheGroupAttributeA(gid, dwFlags, dwAttributes, lpGroupInfo, lpReserved);
}

BOOLAPI SetUrlCacheGroupAttributeW(
    _In_        GROUPID                         gid,
    _Reserved_  DWORD                           dwFlags,
    _In_        DWORD                           dwAttributes,
    _In_        LPINTERNET_CACHE_GROUP_INFOW    lpGroupInfo,
    _Reserved_  LPVOID                          lpReserved
)
{
    return ORIG_SetUrlCacheGroupAttributeW(gid, dwFlags, dwAttributes, lpGroupInfo, lpReserved);
}

BOOLAPI UnlockUrlCacheEntryFileA(
    _In_ LPCSTR lpszUrlName,
    _Reserved_ DWORD dwReserved
)
{
    return ORIG_UnlockUrlCacheEntryFileA(lpszUrlName, dwReserved);
}

BOOLAPI UnlockUrlCacheEntryFileW(
    _In_ LPCWSTR lpszUrlName,
    _Reserved_ DWORD dwReserved
)
{
    return ORIG_UnlockUrlCacheEntryFileW(lpszUrlName, dwReserved);
}

BOOLAPI UnlockUrlCacheEntryStream(
    _In_ HANDLE hUrlCacheStream,
    _Reserved_ DWORD Reserved
)
{
    return ORIG_UnlockUrlCacheEntryStream(hUrlCacheStream, Reserved);
}

