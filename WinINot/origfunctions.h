#pragma once

#include "pch.h"

typedef BOOL(__stdcall* DEFI_CommitUrlCacheEntryA) (
    _In_ LPCSTR lpszUrlName,
    _In_opt_ LPCSTR lpszLocalFileName,
    _In_ FILETIME ExpireTime,
    _In_ FILETIME LastModifiedTime,
    _In_ DWORD CacheEntryType,
    _In_reads_opt_(cchHeaderInfo) LPBYTE lpHeaderInfo,
    _In_ DWORD cchHeaderInfo,
    _Reserved_ LPCSTR lpszFileExtension,
    _In_opt_ LPCSTR lpszOriginalUrl
    );
extern DEFI_CommitUrlCacheEntryA ORIG_CommitUrlCacheEntryA;

typedef BOOL(__stdcall* DEFI_CommitUrlCacheEntryW) (
    _In_ LPCWSTR lpszUrlName,
    _In_opt_ LPCWSTR lpszLocalFileName,
    _In_ FILETIME ExpireTime,
    _In_ FILETIME LastModifiedTime,
    _In_ DWORD CacheEntryType,
    _In_reads_opt_(cchHeaderInfo) LPWSTR lpszHeaderInfo,
    _In_ DWORD cchHeaderInfo,
    _Reserved_ LPCWSTR lpszFileExtension,
    _In_opt_ LPCWSTR lpszOriginalUrl
    );
extern DEFI_CommitUrlCacheEntryW ORIG_CommitUrlCacheEntryW;

typedef BOOL(__stdcall* DEFI_CreateMD5SSOHash) (
    _In_ PWSTR    pszChallengeInfo,
    _In_ PWSTR    pwszRealm,
    _In_ PWSTR    pwszTarget,
    _Out_ PBYTE   pbHexHash
    );
extern DEFI_CreateMD5SSOHash ORIG_CreateMD5SSOHash;

typedef BOOL(__stdcall* DEFI_CreateUrlCacheEntryA) (
    _In_       LPCSTR lpszUrlName,
    _In_       DWORD dwExpectedFileSize,
    _In_opt_ LPCSTR lpszFileExtension,
    _Inout_updates_(MAX_PATH) LPSTR lpszFileName,
    _In_       DWORD dwReserved
    );
extern DEFI_CreateUrlCacheEntryA ORIG_CreateUrlCacheEntryA;

typedef BOOL(__stdcall* DEFI_CreateUrlCacheEntryW) (
    _In_       LPCWSTR lpszUrlName,
    _In_       DWORD dwExpectedFileSize,
    _In_opt_ LPCWSTR lpszFileExtension,
    _Inout_updates_(MAX_PATH) LPWSTR lpszFileName,
    _In_       DWORD dwReserved
    );
extern DEFI_CreateUrlCacheEntryW ORIG_CreateUrlCacheEntryW;

typedef GROUPID(__stdcall* DEFI_CreateUrlCacheGroup) (
    _In_   DWORD  dwFlags,
    _Reserved_ LPVOID lpReserved
    );
extern DEFI_CreateUrlCacheGroup ORIG_CreateUrlCacheGroup;

typedef BOOL(__stdcall* DEFI_DeleteUrlCacheEntry) (
    _In_ LPCSTR lpszUrlName
    );
extern DEFI_DeleteUrlCacheEntry ORIG_DeleteUrlCacheEntry;

typedef BOOL(__stdcall* DEFI_DeleteUrlCacheEntryA) (
    _In_ LPCSTR lpszUrlName
    );
extern DEFI_DeleteUrlCacheEntryA ORIG_DeleteUrlCacheEntryA;

typedef BOOL(__stdcall* DEFI_DeleteUrlCacheEntryW) (
    _In_ LPCWSTR lpszUrlName
    );
extern DEFI_DeleteUrlCacheEntryW ORIG_DeleteUrlCacheEntryW;

typedef BOOL(__stdcall* DEFI_DeleteUrlCacheGroup) (
    _In_   GROUPID GroupId,
    _In_   DWORD   dwFlags,       // must pass 0
    _Reserved_ LPVOID  lpReserved
    );
extern DEFI_DeleteUrlCacheGroup ORIG_DeleteUrlCacheGroup;

typedef BOOL(__stdcall* DEFI_DetectAutoProxyUrl) (
    _Out_writes_(cchAutoProxyUrl) PSTR pszAutoProxyUrl,
    _In_ DWORD cchAutoProxyUrl,
    _In_ DWORD dwDetectFlags
    );
extern DEFI_DetectAutoProxyUrl ORIG_DetectAutoProxyUrl;

typedef BOOL(__stdcall* DEFI_FindCloseUrlCache) (
    _In_ HANDLE hEnumHandle
    );
extern DEFI_FindCloseUrlCache ORIG_FindCloseUrlCache;

typedef HANDLE(__stdcall* DEFI_FindFirstUrlCacheEntryA) (
    _In_opt_ LPCSTR lpszUrlSearchPattern,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpFirstCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo
    );
extern DEFI_FindFirstUrlCacheEntryA ORIG_FindFirstUrlCacheEntryA;

typedef HANDLE(__stdcall* DEFI_FindFirstUrlCacheEntryExA) (
    _In_opt_ LPCSTR  lpszUrlSearchPattern,
    _In_ DWORD dwFlags,
    _In_ DWORD  dwFilter,
    _In_ GROUPID  GroupId,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpFirstCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPVOID lpGroupAttributes,
    _Reserved_ LPDWORD lpcbGroupAttributes,
    _Reserved_ LPVOID lpReserved
    );
extern DEFI_FindFirstUrlCacheEntryExA ORIG_FindFirstUrlCacheEntryExA;

typedef HANDLE(__stdcall* DEFI_FindFirstUrlCacheEntryExW) (
    _In_opt_ LPCWSTR  lpszUrlSearchPattern,
    _In_ DWORD dwFlags,
    _In_ DWORD  dwFilter,
    _In_ GROUPID  GroupId,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpFirstCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPVOID lpGroupAttributes,
    _Reserved_ LPDWORD lpcbGroupAttributes,
    _Reserved_ LPVOID lpReserved
    );
extern DEFI_FindFirstUrlCacheEntryExW ORIG_FindFirstUrlCacheEntryExW;

typedef HANDLE(__stdcall* DEFI_FindFirstUrlCacheEntryW) (
    _In_opt_ LPCWSTR lpszUrlSearchPattern,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpFirstCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo
    );
extern DEFI_FindFirstUrlCacheEntryW ORIG_FindFirstUrlCacheEntryW;

typedef HANDLE(__stdcall* DEFI_FindFirstUrlCacheGroup) (
    _In_        DWORD       dwFlags,
    _In_        DWORD       dwFilter,
    _Reserved_  LPVOID      lpSearchCondition,
    _Reserved_  DWORD       dwSearchCondition,
    _Out_       GROUPID* lpGroupId,
    _Reserved_  LPVOID      lpReserved
    );
extern DEFI_FindFirstUrlCacheGroup ORIG_FindFirstUrlCacheGroup;

typedef BOOL(__stdcall* DEFI_FindNextUrlCacheEntryA) (
    _In_ HANDLE hEnumHandle,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpNextCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo
    );
extern DEFI_FindNextUrlCacheEntryA ORIG_FindNextUrlCacheEntryA;

typedef BOOL(__stdcall* DEFI_FindNextUrlCacheEntryExA) (
    _In_ HANDLE hEnumHandle,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpNextCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPVOID lpGroupAttributes,
    _Reserved_ LPDWORD lpcbGroupAttributes,
    _Reserved_ LPVOID lpReserved
    );
extern DEFI_FindNextUrlCacheEntryExA ORIG_FindNextUrlCacheEntryExA;

typedef BOOL(__stdcall* DEFI_FindNextUrlCacheEntryExW) (
    _In_ HANDLE hEnumHandle,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpNextCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPVOID lpGroupAttributes,
    _Reserved_ LPDWORD lpcbGroupAttributes,
    _Reserved_ LPVOID lpReserved
    );
extern DEFI_FindNextUrlCacheEntryExW ORIG_FindNextUrlCacheEntryExW;

typedef BOOL(__stdcall* DEFI_FindNextUrlCacheEntryW) (
    _In_ HANDLE hEnumHandle,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpNextCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo
    );
extern DEFI_FindNextUrlCacheEntryW ORIG_FindNextUrlCacheEntryW;

typedef BOOL(__stdcall* DEFI_FindNextUrlCacheGroup) (
    _In_        HANDLE      hFind,
    _Out_       GROUPID* lpGroupId,
    _Reserved_  LPVOID      lpReserved
    );
extern DEFI_FindNextUrlCacheGroup ORIG_FindNextUrlCacheGroup;

typedef BOOL(__stdcall* DEFI_FtpCommandA) (
    _In_ HINTERNET hConnect,
    _In_ BOOL fExpectResponse,
    _In_ DWORD dwFlags,
    _In_ LPCSTR lpszCommand,
    _In_opt_ DWORD_PTR dwContext,
    _Out_opt_ HINTERNET* phFtpCommand
    );
extern DEFI_FtpCommandA ORIG_FtpCommandA;

typedef BOOL(__stdcall* DEFI_FtpCommandW) (
    _In_ HINTERNET hConnect,
    _In_ BOOL fExpectResponse,
    _In_ DWORD dwFlags,
    _In_ LPCWSTR lpszCommand,
    _In_opt_ DWORD_PTR dwContext,
    _Out_opt_ HINTERNET* phFtpCommand
    );
extern DEFI_FtpCommandW ORIG_FtpCommandW;

typedef BOOL(__stdcall* DEFI_FtpCreateDirectoryA) (
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszDirectory
    );
extern DEFI_FtpCreateDirectoryA ORIG_FtpCreateDirectoryA;

typedef BOOL(__stdcall* DEFI_FtpCreateDirectoryW) (
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszDirectory
    );
extern DEFI_FtpCreateDirectoryW ORIG_FtpCreateDirectoryW;

typedef BOOL(__stdcall* DEFI_FtpDeleteFileA) (
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszFileName
    );
extern DEFI_FtpDeleteFileA ORIG_FtpDeleteFileA;

typedef BOOL(__stdcall* DEFI_FtpDeleteFileW) (
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszFileName
    );
extern DEFI_FtpDeleteFileW ORIG_FtpDeleteFileW;

typedef HINTERNET(__stdcall* DEFI_FtpFindFirstFileA) (
    _In_ HINTERNET hConnect,
    _In_opt_ LPCSTR lpszSearchFile,
    _Out_opt_ LPWIN32_FIND_DATAA lpFindFileData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_FtpFindFirstFileA ORIG_FtpFindFirstFileA;

typedef HINTERNET(__stdcall* DEFI_FtpFindFirstFileW) (
    _In_ HINTERNET hConnect,
    _In_opt_ LPCWSTR lpszSearchFile,
    _Out_opt_ LPWIN32_FIND_DATAW lpFindFileData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_FtpFindFirstFileW ORIG_FtpFindFirstFileW;

typedef BOOL(__stdcall* DEFI_FtpGetCurrentDirectoryA) (
    _In_ HINTERNET hConnect,
    _Out_writes_(*lpdwCurrentDirectory) LPSTR lpszCurrentDirectory,
    _Inout_ LPDWORD lpdwCurrentDirectory
    );
extern DEFI_FtpGetCurrentDirectoryA ORIG_FtpGetCurrentDirectoryA;

typedef BOOL(__stdcall* DEFI_FtpGetCurrentDirectoryW) (
    _In_ HINTERNET hConnect,
    _Out_writes_(*lpdwCurrentDirectory) LPWSTR lpszCurrentDirectory,
    _Inout_ LPDWORD lpdwCurrentDirectory
    );
extern DEFI_FtpGetCurrentDirectoryW ORIG_FtpGetCurrentDirectoryW;

typedef BOOL(__stdcall* DEFI_FtpGetFileA) (
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszRemoteFile,
    _In_ LPCSTR lpszNewFile,
    _In_ BOOL fFailIfExists,
    _In_ DWORD dwFlagsAndAttributes,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_FtpGetFileA ORIG_FtpGetFileA;

typedef DWORD(__stdcall* DEFI_FtpGetFileSize) (
    _In_ HINTERNET hFile,
    _Out_opt_ LPDWORD lpdwFileSizeHigh
    );
extern DEFI_FtpGetFileSize ORIG_FtpGetFileSize;

typedef BOOL(__stdcall* DEFI_FtpGetFileW) (
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszRemoteFile,
    _In_ LPCWSTR lpszNewFile,
    _In_ BOOL fFailIfExists,
    _In_ DWORD dwFlagsAndAttributes,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_FtpGetFileW ORIG_FtpGetFileW;

typedef HINTERNET(__stdcall* DEFI_FtpOpenFileA) (
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszFileName,
    _In_ DWORD dwAccess,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_FtpOpenFileA ORIG_FtpOpenFileA;

typedef HINTERNET(__stdcall* DEFI_FtpOpenFileW) (
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszFileName,
    _In_ DWORD dwAccess,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_FtpOpenFileW ORIG_FtpOpenFileW;

typedef BOOL(__stdcall* DEFI_FtpPutFileA) (
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszLocalFile,
    _In_ LPCSTR lpszNewRemoteFile,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_FtpPutFileA ORIG_FtpPutFileA;

typedef BOOL(__stdcall* DEFI_FtpPutFileW) (
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszLocalFile,
    _In_ LPCWSTR lpszNewRemoteFile,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_FtpPutFileW ORIG_FtpPutFileW;

typedef BOOL(__stdcall* DEFI_FtpRemoveDirectoryA) (
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszDirectory
    );
extern DEFI_FtpRemoveDirectoryA ORIG_FtpRemoveDirectoryA;

typedef BOOL(__stdcall* DEFI_FtpRemoveDirectoryW) (
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszDirectory
    );
extern DEFI_FtpRemoveDirectoryW ORIG_FtpRemoveDirectoryW;

typedef BOOL(__stdcall* DEFI_FtpRenameFileA) (
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszExisting,
    _In_ LPCSTR lpszNew
    );
extern DEFI_FtpRenameFileA ORIG_FtpRenameFileA;

typedef BOOL(__stdcall* DEFI_FtpRenameFileW) (
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszExisting,
    _In_ LPCWSTR lpszNew
    );
extern DEFI_FtpRenameFileW ORIG_FtpRenameFileW;

typedef BOOL(__stdcall* DEFI_FtpSetCurrentDirectoryA) (
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszDirectory
    );
extern DEFI_FtpSetCurrentDirectoryA ORIG_FtpSetCurrentDirectoryA;

typedef BOOL(__stdcall* DEFI_FtpSetCurrentDirectoryW) (
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszDirectory
    );
extern DEFI_FtpSetCurrentDirectoryW ORIG_FtpSetCurrentDirectoryW;

typedef BOOL(__stdcall* DEFI_GetUrlCacheEntryInfoA) (
    _In_ LPCSTR lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo,
    _Inout_opt_ LPDWORD lpcbCacheEntryInfo
    );
extern DEFI_GetUrlCacheEntryInfoA ORIG_GetUrlCacheEntryInfoA;

typedef BOOL(__stdcall* DEFI_GetUrlCacheEntryInfoExA) (
    _In_ LPCSTR lpszUrl,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo,
    _Inout_opt_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPSTR lpszRedirectUrl,
    _Reserved_ LPDWORD lpcbRedirectUrl,
    _Reserved_ LPVOID lpReserved,
    _In_ DWORD dwFlags
    );
extern DEFI_GetUrlCacheEntryInfoExA ORIG_GetUrlCacheEntryInfoExA;

typedef BOOL(__stdcall* DEFI_GetUrlCacheEntryInfoExW) (
    _In_ LPCWSTR lpszUrl,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo,
    _Inout_opt_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ LPWSTR lpszRedirectUrl,
    _Reserved_ LPDWORD lpcbRedirectUrl,
    _Reserved_ LPVOID lpReserved,
    _In_ DWORD dwFlags
    );
extern DEFI_GetUrlCacheEntryInfoExW ORIG_GetUrlCacheEntryInfoExW;

typedef BOOL(__stdcall* DEFI_GetUrlCacheEntryInfoW) (
    _In_ LPCWSTR lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo,
    _Inout_opt_ LPDWORD lpcbCacheEntryInfo
    );
extern DEFI_GetUrlCacheEntryInfoW ORIG_GetUrlCacheEntryInfoW;

typedef BOOL(__stdcall* DEFI_GetUrlCacheGroupAttributeA) (
    _In_                            GROUPID                         gid,
    _Reserved_                      DWORD                           dwFlags,
    _In_                            DWORD                           dwAttributes,
    _Out_writes_bytes_(*lpcbGroupInfo)    LPINTERNET_CACHE_GROUP_INFOA    lpGroupInfo,
    _Inout_                         LPDWORD                         lpcbGroupInfo,
    _Reserved_                      LPVOID                          lpReserved
    );
extern DEFI_GetUrlCacheGroupAttributeA ORIG_GetUrlCacheGroupAttributeA;

typedef BOOL(__stdcall* DEFI_GetUrlCacheGroupAttributeW) (
    _In_                            GROUPID                         gid,
    _Reserved_                      DWORD                           dwFlags,
    _In_                            DWORD                           dwAttributes,
    _Out_writes_bytes_(*lpcbGroupInfo)    LPINTERNET_CACHE_GROUP_INFOW    lpGroupInfo,
    _Inout_                         LPDWORD                         lpcbGroupInfo,
    _Reserved_                      LPVOID                          lpReserved
    );
extern DEFI_GetUrlCacheGroupAttributeW ORIG_GetUrlCacheGroupAttributeW;

typedef BOOL(__stdcall* DEFI_GopherCreateLocatorA) (
    _In_ LPCSTR lpszHost,
    _In_ INTERNET_PORT nServerPort,
    _In_opt_ LPCSTR lpszDisplayString,
    _In_opt_ LPCSTR lpszSelectorString,
    _In_ DWORD dwGopherType,
    _Out_writes_opt_(*lpdwBufferLength) LPSTR lpszLocator,
    _Inout_ LPDWORD lpdwBufferLength
    );
extern DEFI_GopherCreateLocatorA ORIG_GopherCreateLocatorA;

typedef BOOL(__stdcall* DEFI_GopherCreateLocatorW) (
    _In_ LPCWSTR lpszHost,
    _In_ INTERNET_PORT nServerPort,
    _In_opt_ LPCWSTR lpszDisplayString,
    _In_opt_ LPCWSTR lpszSelectorString,
    _In_ DWORD dwGopherType,
    _Out_writes_opt_(*lpdwBufferLength) LPWSTR lpszLocator,
    _Inout_ LPDWORD lpdwBufferLength
    );
extern DEFI_GopherCreateLocatorW ORIG_GopherCreateLocatorW;

typedef HINTERNET(__stdcall* DEFI_GopherFindFirstFileA) (
    _In_ HINTERNET hConnect,
    _In_opt_ LPCSTR lpszLocator,
    _In_opt_ LPCSTR lpszSearchString,
    _Out_opt_ LPGOPHER_FIND_DATAA lpFindData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_GopherFindFirstFileA ORIG_GopherFindFirstFileA;

typedef HINTERNET(__stdcall* DEFI_GopherFindFirstFileW) (
    _In_ HINTERNET hConnect,
    _In_opt_ LPCWSTR lpszLocator,
    _In_opt_ LPCWSTR lpszSearchString,
    _Out_opt_ LPGOPHER_FIND_DATAW lpFindData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_GopherFindFirstFileW ORIG_GopherFindFirstFileW;

typedef BOOL(__stdcall* DEFI_GopherGetAttributeA) (
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszLocator,
    _In_opt_ LPCSTR lpszAttributeName,
    _At_((LPSTR)lpBuffer, _Out_writes_(dwBufferLength)) LPBYTE lpBuffer,
    _In_ DWORD dwBufferLength,
    _Out_ LPDWORD lpdwCharactersReturned,
    _In_opt_ GOPHER_ATTRIBUTE_ENUMERATOR lpfnEnumerator,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_GopherGetAttributeA ORIG_GopherGetAttributeA;

typedef BOOL(__stdcall* DEFI_GopherGetAttributeW) (
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszLocator,
    _In_opt_ LPCWSTR lpszAttributeName,
    _At_((LPWSTR)lpBuffer, _Out_writes_(dwBufferLength)) LPBYTE lpBuffer,
    _In_ DWORD dwBufferLength,
    _Out_ LPDWORD lpdwCharactersReturned,
    _In_opt_ GOPHER_ATTRIBUTE_ENUMERATOR lpfnEnumerator,
    _In_opt_ DWORD_PTR dwContext

    );
extern DEFI_GopherGetAttributeW ORIG_GopherGetAttributeW;

typedef BOOL(__stdcall* DEFI_GopherGetLocatorTypeA) (
    _In_ LPCSTR lpszLocator,
    _Out_ LPDWORD lpdwGopherType
    );
extern DEFI_GopherGetLocatorTypeA ORIG_GopherGetLocatorTypeA;

typedef BOOL(__stdcall* DEFI_GopherGetLocatorTypeW) (
    _In_ LPCWSTR lpszLocator,
    _Out_ LPDWORD lpdwGopherType
    );
extern DEFI_GopherGetLocatorTypeW ORIG_GopherGetLocatorTypeW;

typedef HINTERNET(__stdcall* DEFI_GopherOpenFileA) (
    _In_ HINTERNET hConnect,
    _In_ LPCSTR lpszLocator,
    _In_opt_ LPCSTR lpszView,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_GopherOpenFileA ORIG_GopherOpenFileA;

typedef HINTERNET(__stdcall* DEFI_GopherOpenFileW) (
    _In_ HINTERNET hConnect,
    _In_ LPCWSTR lpszLocator,
    _In_opt_ LPCWSTR lpszView,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_GopherOpenFileW ORIG_GopherOpenFileW;

typedef BOOL(__stdcall* DEFI_HttpAddRequestHeadersA) (
    _In_ HINTERNET hRequest,
    _When_(dwHeadersLength == (DWORD)-1, _In_z_)
    _When_(dwHeadersLength != (DWORD)-1, _In_reads_(dwHeadersLength))
    LPCSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_ DWORD dwModifiers
    );
extern DEFI_HttpAddRequestHeadersA ORIG_HttpAddRequestHeadersA;

typedef BOOL(__stdcall* DEFI_HttpAddRequestHeadersW) (
    _In_ HINTERNET hRequest,
    _When_(dwHeadersLength == (DWORD)-1, _In_z_)
    _When_(dwHeadersLength != (DWORD)-1, _In_reads_(dwHeadersLength))
    LPCWSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_ DWORD dwModifiers
    );
extern DEFI_HttpAddRequestHeadersW ORIG_HttpAddRequestHeadersW;

typedef BOOL(__stdcall* DEFI_HttpEndRequestA) (
    _In_ HINTERNET hRequest,
    _Out_opt_ LPINTERNET_BUFFERSA lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_HttpEndRequestA ORIG_HttpEndRequestA;

typedef BOOL(__stdcall* DEFI_HttpEndRequestW) (
    _In_ HINTERNET hRequest,
    _Out_opt_ LPINTERNET_BUFFERSW lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_HttpEndRequestW ORIG_HttpEndRequestW;

typedef HINTERNET(__stdcall* DEFI_HttpOpenRequestA) (
    _In_ HINTERNET hConnect,
    _In_opt_ LPCSTR lpszVerb,
    _In_opt_ LPCSTR lpszObjectName,
    _In_opt_ LPCSTR lpszVersion,
    _In_opt_ LPCSTR lpszReferrer,
    _In_opt_z_ LPCSTR FAR* lplpszAcceptTypes,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_HttpOpenRequestA ORIG_HttpOpenRequestA;

typedef HINTERNET(__stdcall* DEFI_HttpOpenRequestW) (
    _In_ HINTERNET hConnect,
    _In_opt_ LPCWSTR lpszVerb,
    _In_opt_ LPCWSTR lpszObjectName,
    _In_opt_ LPCWSTR lpszVersion,
    _In_opt_ LPCWSTR lpszReferrer,
    _In_opt_z_ LPCWSTR FAR* lplpszAcceptTypes,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_HttpOpenRequestW ORIG_HttpOpenRequestW;

typedef BOOL(__stdcall* DEFI_HttpQueryInfoA) (
    _In_ HINTERNET hRequest,
    _In_ DWORD dwInfoLevel,
    _Inout_updates_bytes_to_opt_(*lpdwBufferLength, *lpdwBufferLength) __out_data_source(NETWORK) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _Inout_opt_ LPDWORD lpdwIndex
    );
extern DEFI_HttpQueryInfoA ORIG_HttpQueryInfoA;

typedef BOOL(__stdcall* DEFI_HttpQueryInfoW) (
    _In_ HINTERNET hRequest,
    _In_ DWORD dwInfoLevel,
    _Inout_updates_bytes_to_opt_(*lpdwBufferLength, *lpdwBufferLength) __out_data_source(NETWORK) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _Inout_opt_ LPDWORD lpdwIndex
    );
extern DEFI_HttpQueryInfoW ORIG_HttpQueryInfoW;

typedef BOOL(__stdcall* DEFI_HttpSendRequestA) (
    _In_ HINTERNET hRequest,
    _In_reads_opt_(dwHeadersLength) LPCSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_reads_bytes_opt_(dwOptionalLength) LPVOID lpOptional,
    _In_ DWORD dwOptionalLength
    );
extern DEFI_HttpSendRequestA ORIG_HttpSendRequestA;

typedef BOOL(__stdcall* DEFI_HttpSendRequestExA) (
    _In_ HINTERNET hRequest,
    _In_opt_ LPINTERNET_BUFFERSA lpBuffersIn,
    _Out_opt_ LPINTERNET_BUFFERSA lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_HttpSendRequestExA ORIG_HttpSendRequestExA;

typedef BOOL(__stdcall* DEFI_HttpSendRequestExW) (
    _In_ HINTERNET hRequest,
    _In_opt_ LPINTERNET_BUFFERSW lpBuffersIn,
    _Out_opt_ LPINTERNET_BUFFERSW lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_HttpSendRequestExW ORIG_HttpSendRequestExW;

typedef BOOL(__stdcall* DEFI_HttpSendRequestW) (
    _In_ HINTERNET hRequest,
    _In_reads_opt_(dwHeadersLength) LPCWSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_reads_bytes_opt_(dwOptionalLength) LPVOID lpOptional,
    _In_ DWORD dwOptionalLength
    );
extern DEFI_HttpSendRequestW ORIG_HttpSendRequestW;

typedef DWORD(__stdcall* DEFI_InternetAttemptConnect) (
    _In_ DWORD dwReserved
    );
extern DEFI_InternetAttemptConnect ORIG_InternetAttemptConnect;

typedef BOOL(__stdcall* DEFI_InternetAutodial) (
    _In_       DWORD  dwFlags,
    _In_opt_ HWND   hwndParent
    );
extern DEFI_InternetAutodial ORIG_InternetAutodial;

typedef BOOL(__stdcall* DEFI_InternetAutodialHangup) (
    _Reserved_ DWORD    dwReserved
    );
extern DEFI_InternetAutodialHangup ORIG_InternetAutodialHangup;

typedef BOOL(__stdcall* DEFI_InternetCanonicalizeUrlA) (
    _In_ LPCSTR lpszUrl,
    _Out_writes_(*lpdwBufferLength) LPSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _In_ DWORD dwFlags
    );
extern DEFI_InternetCanonicalizeUrlA ORIG_InternetCanonicalizeUrlA;

typedef BOOL(__stdcall* DEFI_InternetCanonicalizeUrlW) (
    _In_ LPCWSTR lpszUrl,
    _Out_writes_(*lpdwBufferLength) LPWSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _In_ DWORD dwFlags
    );
extern DEFI_InternetCanonicalizeUrlW ORIG_InternetCanonicalizeUrlW;

typedef BOOL(__stdcall* DEFI_InternetCheckConnectionA) (
    _In_ LPCSTR lpszUrl,
    _In_ DWORD dwFlags,
    _In_ DWORD dwReserved
    );
extern DEFI_InternetCheckConnectionA ORIG_InternetCheckConnectionA;

typedef BOOL(__stdcall* DEFI_InternetCheckConnectionW) (
    _In_ LPCWSTR lpszUrl,
    _In_ DWORD dwFlags,
    _In_ DWORD dwReserved
    );
extern DEFI_InternetCheckConnectionW ORIG_InternetCheckConnectionW;

typedef BOOL(__stdcall* DEFI_InternetClearAllPerSiteCookieDecisions) ();
extern DEFI_InternetClearAllPerSiteCookieDecisions ORIG_InternetClearAllPerSiteCookieDecisions;

typedef BOOL(__stdcall* DEFI_InternetCloseHandle) (
    _In_ HINTERNET hInternet
    );
extern DEFI_InternetCloseHandle ORIG_InternetCloseHandle;

typedef BOOL(__stdcall* DEFI_InternetCombineUrlA) (
    _In_ LPCSTR lpszBaseUrl,
    _In_ LPCSTR lpszRelativeUrl,
    _Out_writes_(*lpdwBufferLength) LPSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _In_ DWORD dwFlags
    );
extern DEFI_InternetCombineUrlA ORIG_InternetCombineUrlA;

typedef BOOL(__stdcall* DEFI_InternetCombineUrlW) (
    _In_ LPCWSTR lpszBaseUrl,
    _In_ LPCWSTR lpszRelativeUrl,
    _Out_writes_(*lpdwBufferLength) LPWSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength,
    _In_ DWORD dwFlags
    );
extern DEFI_InternetCombineUrlW ORIG_InternetCombineUrlW;

typedef DWORD(__stdcall* DEFI_InternetConfirmZoneCrossing) (
    _In_ HWND hWnd,
    _In_ LPSTR szUrlPrev,
    _In_ LPSTR szUrlNew,
    _In_ BOOL bPost
    );
extern DEFI_InternetConfirmZoneCrossing ORIG_InternetConfirmZoneCrossing;

typedef DWORD(__stdcall* DEFI_InternetConfirmZoneCrossingA) (
    _In_ HWND hWnd,
    _In_ LPSTR szUrlPrev,
    _In_ LPSTR szUrlNew,
    _In_ BOOL bPost
    );
extern DEFI_InternetConfirmZoneCrossingA ORIG_InternetConfirmZoneCrossingA;

typedef DWORD(__stdcall* DEFI_InternetConfirmZoneCrossingW) (
    _In_ HWND hWnd,
    _In_ LPWSTR szUrlPrev,
    _In_ LPWSTR szUrlNew,
    _In_ BOOL bPost
    );
extern DEFI_InternetConfirmZoneCrossingW ORIG_InternetConfirmZoneCrossingW;

typedef HINTERNET(__stdcall* DEFI_InternetConnectA) (
    _In_ HINTERNET hInternet,
    _In_ LPCSTR lpszServerName,
    _In_ INTERNET_PORT nServerPort,
    _In_opt_ LPCSTR lpszUserName,
    _In_opt_ LPCSTR lpszPassword,
    _In_ DWORD dwService,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_InternetConnectA ORIG_InternetConnectA;

typedef HINTERNET(__stdcall* DEFI_InternetConnectW) (
    _In_ HINTERNET hInternet,
    _In_ LPCWSTR lpszServerName,
    _In_ INTERNET_PORT nServerPort,
    _In_opt_ LPCWSTR lpszUserName,
    _In_opt_ LPCWSTR lpszPassword,
    _In_ DWORD dwService,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_InternetConnectW ORIG_InternetConnectW;

typedef BOOL(__stdcall* DEFI_InternetCrackUrlA) (
    _In_reads_(dwUrlLength) LPCSTR lpszUrl,
    _In_ DWORD dwUrlLength,
    _In_ DWORD dwFlags,
    _Inout_ LPURL_COMPONENTSA lpUrlComponents
    );
extern DEFI_InternetCrackUrlA ORIG_InternetCrackUrlA;

typedef BOOL(__stdcall* DEFI_InternetCrackUrlW) (
    _In_reads_(dwUrlLength) LPCWSTR lpszUrl,
    _In_ DWORD dwUrlLength,
    _In_ DWORD dwFlags,
    _Inout_ LPURL_COMPONENTSW lpUrlComponents
    );
extern DEFI_InternetCrackUrlW ORIG_InternetCrackUrlW;

typedef BOOL(__stdcall* DEFI_InternetCreateUrlA) (
    _In_ LPURL_COMPONENTSA lpUrlComponents,
    _In_ DWORD dwFlags,
    _Out_writes_opt_(*lpdwUrlLength) LPSTR lpszUrl,
    _Inout_ LPDWORD lpdwUrlLength
    );
extern DEFI_InternetCreateUrlA ORIG_InternetCreateUrlA;

typedef BOOL(__stdcall* DEFI_InternetCreateUrlW) (
    _In_ LPURL_COMPONENTSW lpUrlComponents,
    _In_ DWORD dwFlags,
    _Out_writes_opt_(*lpdwUrlLength) LPWSTR lpszUrl,
    _Inout_ LPDWORD lpdwUrlLength
    );
extern DEFI_InternetCreateUrlW ORIG_InternetCreateUrlW;

typedef DWORD(__stdcall* DEFI_InternetDial) (
    _In_ HWND     hwndParent,
    _In_opt_ LPSTR   lpszConnectoid,
    _In_ DWORD    dwFlags,
    _Out_ LPDWORD lpdwConnection,
    _In_ DWORD    dwReserved
    );
extern DEFI_InternetDial ORIG_InternetDial;

typedef DWORD(__stdcall* DEFI_InternetDialA) (
    _In_ HWND     hwndParent,
    _In_opt_ LPSTR   lpszConnectoid,
    _In_ DWORD    dwFlags,
    _Out_ DWORD_PTR* lpdwConnection,
    _Reserved_ DWORD    dwReserved
    );
extern DEFI_InternetDialA ORIG_InternetDialA;

typedef DWORD(__stdcall* DEFI_InternetDialW) (
    _In_ HWND     hwndParent,
    _In_opt_ LPWSTR   lpszConnectoid,
    _In_ DWORD    dwFlags,
    _Out_ DWORD_PTR* lpdwConnection,
    _Reserved_ DWORD    dwReserved
    );
extern DEFI_InternetDialW ORIG_InternetDialW;

typedef BOOL(__stdcall* DEFI_InternetEnumPerSiteCookieDecisionA) (
    _Out_writes_to_(*pcSiteNameSize, *pcSiteNameSize) LPSTR pszSiteName,
    _Inout_ unsigned long* pcSiteNameSize,
    _Out_ unsigned long* pdwDecision,
    _In_ unsigned long dwIndex
    );
extern DEFI_InternetEnumPerSiteCookieDecisionA ORIG_InternetEnumPerSiteCookieDecisionA;

typedef BOOL(__stdcall* DEFI_InternetEnumPerSiteCookieDecisionW) (
    _Out_writes_to_(*pcSiteNameSize, *pcSiteNameSize) LPWSTR pszSiteName,
    _Inout_ unsigned long* pcSiteNameSize,
    _Out_ unsigned long* pdwDecision,
    _In_ unsigned long dwIndex
    );
extern DEFI_InternetEnumPerSiteCookieDecisionW ORIG_InternetEnumPerSiteCookieDecisionW;

typedef DWORD(__stdcall* DEFI_InternetErrorDlg) (
    _In_ HWND hWnd,
    _Inout_opt_ HINTERNET hRequest,
    _In_ DWORD dwError,
    _In_ DWORD dwFlags,
    _Inout_opt_ LPVOID* lppvData
    );
extern DEFI_InternetErrorDlg ORIG_InternetErrorDlg;

typedef BOOL(__stdcall* DEFI_InternetFindNextFileA) (
    _In_ HINTERNET hFind,
    _Out_ LPVOID lpvFindData
    );
extern DEFI_InternetFindNextFileA ORIG_InternetFindNextFileA;

typedef BOOL(__stdcall* DEFI_InternetFindNextFileW) (
    _In_ HINTERNET hFind,
    _Out_ LPVOID lpvFindData
    );
extern DEFI_InternetFindNextFileW ORIG_InternetFindNextFileW;

typedef VOID(__stdcall* DEFI_InternetFreeCookies) (
    _Inout_opt_ INTERNET_COOKIE2* pCookies,
    _In_ DWORD dwCookieCount
    );
extern DEFI_InternetFreeCookies ORIG_InternetFreeCookies;

typedef BOOL(__stdcall* DEFI_InternetGetConnectedState) (
    _Out_  LPDWORD  lpdwFlags,
    _Reserved_ DWORD    dwReserved
    );
extern DEFI_InternetGetConnectedState ORIG_InternetGetConnectedState;

typedef BOOL(__stdcall* DEFI_InternetGetConnectedStateExA) (
    _Out_opt_ LPDWORD lpdwFlags,
    _Out_writes_opt_(cchNameLen) LPSTR lpszConnectionName,
    _In_ DWORD cchNameLen,
    _Reserved_ DWORD dwReserved
    );
extern DEFI_InternetGetConnectedStateExA ORIG_InternetGetConnectedStateExA;

typedef BOOL(__stdcall* DEFI_InternetGetConnectedStateExW) (
    _Out_opt_ LPDWORD lpdwFlags,
    _Out_writes_opt_(cchNameLen) LPWSTR lpszConnectionName,
    _In_ DWORD cchNameLen,
    _Reserved_ DWORD dwReserved
    );
extern DEFI_InternetGetConnectedStateExW ORIG_InternetGetConnectedStateExW;

typedef BOOL(__stdcall* DEFI_InternetGetCookieA) (
    _In_ LPCSTR lpszUrl,
    _In_opt_ LPCSTR lpszCookieName,
    _Out_writes_opt_(*lpdwSize) LPSTR lpszCookieData,
    _Inout_ LPDWORD lpdwSize
    );
extern DEFI_InternetGetCookieA ORIG_InternetGetCookieA;

typedef DWORD(__stdcall* DEFI_InternetGetCookieEx2) (
    _In_ PCWSTR pcwszUrl,
    _In_opt_ PCWSTR pcwszCookieName,
    _In_ DWORD dwFlags,
    _Outptr_ INTERNET_COOKIE2** ppCookies,
    _Out_ PDWORD pdwCookieCount
    );
extern DEFI_InternetGetCookieEx2 ORIG_InternetGetCookieEx2;

typedef BOOL(__stdcall* DEFI_InternetGetCookieExA) (
    _In_ LPCSTR lpszUrl,
    _In_opt_ LPCSTR lpszCookieName,
    _In_reads_opt_(*lpdwSize) LPSTR lpszCookieData,
    _Inout_ LPDWORD lpdwSize,
    _In_ DWORD dwFlags,
    _Reserved_ LPVOID lpReserved
    );
extern DEFI_InternetGetCookieExA ORIG_InternetGetCookieExA;

typedef BOOL(__stdcall* DEFI_InternetGetCookieExW) (
    _In_ LPCWSTR lpszUrl,
    _In_opt_ LPCWSTR lpszCookieName,
    _In_reads_opt_(*lpdwSize) LPWSTR lpszCookieData,
    _Inout_ LPDWORD lpdwSize,
    _In_ DWORD dwFlags,
    _Reserved_ LPVOID lpReserved
    );
extern DEFI_InternetGetCookieExW ORIG_InternetGetCookieExW;

typedef BOOL(__stdcall* DEFI_InternetGetCookieW) (
    _In_ LPCWSTR lpszUrl,
    _In_opt_ LPCWSTR lpszCookieName,
    _Out_writes_opt_(*lpdwSize) LPWSTR lpszCookieData,
    _Inout_ LPDWORD lpdwSize
    );
extern DEFI_InternetGetCookieW ORIG_InternetGetCookieW;

typedef BOOL(__stdcall* DEFI_InternetGetLastResponseInfoA) (
    _Out_ LPDWORD lpdwError,
    _Out_writes_opt_(*lpdwBufferLength) LPSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength
    );
extern DEFI_InternetGetLastResponseInfoA ORIG_InternetGetLastResponseInfoA;

typedef BOOL(__stdcall* DEFI_InternetGetLastResponseInfoW) (
    _Out_ LPDWORD lpdwError,
    _Out_writes_opt_(*lpdwBufferLength) LPWSTR lpszBuffer,
    _Inout_ LPDWORD lpdwBufferLength
    );
extern DEFI_InternetGetLastResponseInfoW ORIG_InternetGetLastResponseInfoW;

typedef BOOL(__stdcall* DEFI_InternetGetPerSiteCookieDecisionA) (
    _In_ LPCSTR pchHostName,
    _Out_ unsigned long* pResult
    );
extern DEFI_InternetGetPerSiteCookieDecisionA ORIG_InternetGetPerSiteCookieDecisionA;

typedef BOOL(__stdcall* DEFI_InternetGetPerSiteCookieDecisionW) (
    _In_ LPCWSTR pchHostName,
    _Out_ unsigned long* pResult
    );
extern DEFI_InternetGetPerSiteCookieDecisionW ORIG_InternetGetPerSiteCookieDecisionW;

typedef BOOL(__stdcall* DEFI_InternetGoOnline) (
    _In_opt_ LPSTR   lpszURL,
    _In_ HWND     hwndParent,
    _In_ DWORD    dwFlags
    );
extern DEFI_InternetGoOnline ORIG_InternetGoOnline;

typedef BOOL(__stdcall* DEFI_InternetGoOnlineA) (
    _In_opt_ LPCSTR lpszURL,
    _In_ HWND     hwndParent,
    _In_ DWORD    dwFlags
    );
extern DEFI_InternetGoOnlineA ORIG_InternetGoOnlineA;

typedef BOOL(__stdcall* DEFI_InternetGoOnlineW) (
    _In_opt_ LPCWSTR lpszURL,
    _In_ HWND     hwndParent,
    _In_ DWORD    dwFlags
    );
extern DEFI_InternetGoOnlineW ORIG_InternetGoOnlineW;

typedef DWORD(__stdcall* DEFI_InternetHangUp) (
    _In_   DWORD_PTR    dwConnection,
    _Reserved_ DWORD        dwReserved
    );
extern DEFI_InternetHangUp ORIG_InternetHangUp;

typedef BOOL(__stdcall* DEFI_InternetInitializeAutoProxyDll) (
    _In_ DWORD dwReserved
    );
extern DEFI_InternetInitializeAutoProxyDll ORIG_InternetInitializeAutoProxyDll;

typedef BOOL(__stdcall* DEFI_InternetLockRequestFile) (
    _In_  HINTERNET hInternet,
    _Out_ HANDLE* lphLockRequestInfo
    );
extern DEFI_InternetLockRequestFile ORIG_InternetLockRequestFile;

typedef HINTERNET(__stdcall* DEFI_InternetOpenA) (
    _In_opt_ LPCSTR lpszAgent,
    _In_ DWORD dwAccessType,
    _In_opt_ LPCSTR lpszProxy,
    _In_opt_ LPCSTR lpszProxyBypass,
    _In_ DWORD dwFlags
    );
extern DEFI_InternetOpenA ORIG_InternetOpenA;

typedef HINTERNET(__stdcall* DEFI_InternetOpenUrlA) (
    _In_ HINTERNET hInternet,
    _In_ LPCSTR lpszUrl,
    _In_reads_opt_(dwHeadersLength) LPCSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_InternetOpenUrlA ORIG_InternetOpenUrlA;

typedef HINTERNET(__stdcall* DEFI_InternetOpenUrlW) (
    _In_ HINTERNET hInternet,
    _In_ LPCWSTR lpszUrl,
    _In_reads_opt_(dwHeadersLength) LPCWSTR lpszHeaders,
    _In_ DWORD dwHeadersLength,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_InternetOpenUrlW ORIG_InternetOpenUrlW;

typedef HINTERNET(__stdcall* DEFI_InternetOpenW) (
    _In_opt_ LPCWSTR lpszAgent,
    _In_ DWORD dwAccessType,
    _In_opt_ LPCWSTR lpszProxy,
    _In_opt_ LPCWSTR lpszProxyBypass,
    _In_ DWORD dwFlags
    );
extern DEFI_InternetOpenW ORIG_InternetOpenW;

typedef BOOL(__stdcall* DEFI_InternetQueryDataAvailable) (
    _In_ HINTERNET hFile,
    _Out_opt_ __out_data_source(NETWORK) LPDWORD lpdwNumberOfBytesAvailable,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_InternetQueryDataAvailable ORIG_InternetQueryDataAvailable;

typedef BOOL(__stdcall* DEFI_InternetQueryOptionA) (
    _In_opt_ HINTERNET hInternet,
    _In_ DWORD dwOption,
    _Out_writes_bytes_to_opt_(*lpdwBufferLength, *lpdwBufferLength) __out_data_source(NETWORK) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwBufferLength
    );
extern DEFI_InternetQueryOptionA ORIG_InternetQueryOptionA;

typedef BOOL(__stdcall* DEFI_InternetQueryOptionW) (
    _In_opt_ HINTERNET hInternet,
    _In_ DWORD dwOption,
    _Out_writes_bytes_to_opt_(*lpdwBufferLength, *lpdwBufferLength) __out_data_source(NETWORK) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwBufferLength
    );
extern DEFI_InternetQueryOptionW ORIG_InternetQueryOptionW;

typedef BOOL(__stdcall* DEFI_InternetReadFile) (
    _In_ HINTERNET hFile,
    _Out_writes_bytes_(dwNumberOfBytesToRead) __out_data_source(NETWORK) LPVOID lpBuffer,
    _In_ DWORD dwNumberOfBytesToRead,
    _Out_ LPDWORD lpdwNumberOfBytesRead
    );
extern DEFI_InternetReadFile ORIG_InternetReadFile;

typedef BOOL(__stdcall* DEFI_InternetReadFileExA) (
    _In_ HINTERNET hFile,
    _Out_ __out_data_source(NETWORK) LPINTERNET_BUFFERSA lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_InternetReadFileExA ORIG_InternetReadFileExA;

typedef BOOL(__stdcall* DEFI_InternetReadFileExW) (
    _In_ HINTERNET hFile,
    _Out_ __out_data_source(NETWORK) LPINTERNET_BUFFERSW lpBuffersOut,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwContext
    );
extern DEFI_InternetReadFileExW ORIG_InternetReadFileExW;

typedef BOOL(__stdcall* DEFI_InternetSetCookieA) (
    _In_ LPCSTR lpszUrl,
    _In_opt_ LPCSTR lpszCookieName,
    _In_ LPCSTR lpszCookieData
    );
extern DEFI_InternetSetCookieA ORIG_InternetSetCookieA;

typedef DWORD(__stdcall* DEFI_InternetSetCookieEx2) (
    _In_ PCWSTR pcwszUrl,
    _In_ const INTERNET_COOKIE2* pCookie,
    _In_opt_ PCWSTR pcwszP3PPolicy,
    _In_ DWORD dwFlags,
    _Out_ PDWORD pdwCookieState
    );
extern DEFI_InternetSetCookieEx2 ORIG_InternetSetCookieEx2;

typedef DWORD(__stdcall* DEFI_InternetSetCookieExA) (
    _In_ LPCSTR lpszUrl,
    _In_opt_ LPCSTR lpszCookieName,
    _In_ LPCSTR lpszCookieData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwReserved
    );
extern DEFI_InternetSetCookieExA ORIG_InternetSetCookieExA;

typedef DWORD(__stdcall* DEFI_InternetSetCookieExW) (
    _In_ LPCWSTR lpszUrl,
    _In_opt_ LPCWSTR lpszCookieName,
    _In_ LPCWSTR lpszCookieData,
    _In_ DWORD dwFlags,
    _In_opt_ DWORD_PTR dwReserved
    );
extern DEFI_InternetSetCookieExW ORIG_InternetSetCookieExW;

typedef BOOL(__stdcall* DEFI_InternetSetCookieW) (
    _In_ LPCWSTR lpszUrl,
    _In_opt_ LPCWSTR lpszCookieName,
    _In_ LPCWSTR lpszCookieData
    );
extern DEFI_InternetSetCookieW ORIG_InternetSetCookieW;

typedef BOOL(__stdcall* DEFI_InternetSetDialState) (
    _In_opt_ LPCSTR lpszConnectoid,
    _In_ DWORD    dwState,
    _In_ DWORD    dwReserved
    );
extern DEFI_InternetSetDialState ORIG_InternetSetDialState;

typedef BOOL(__stdcall* DEFI_InternetSetDialStateA) (
    _In_opt_ LPCSTR lpszConnectoid,
    _In_ DWORD    dwState,
    _Reserved_ DWORD    dwReserved
    );
extern DEFI_InternetSetDialStateA ORIG_InternetSetDialStateA;

typedef BOOL(__stdcall* DEFI_InternetSetDialStateW) (
    _In_opt_ LPCWSTR lpszConnectoid,
    _In_ DWORD    dwState,
    _Reserved_ DWORD    dwReserved
    );
extern DEFI_InternetSetDialStateW ORIG_InternetSetDialStateW;

typedef DWORD(__stdcall* DEFI_InternetSetFilePointer) (
    _In_ HINTERNET hFile,
    _In_ LONG  lDistanceToMove,
    _Inout_opt_ PLONG lpDistanceToMoveHigh,
    _In_ DWORD dwMoveMethod,
    _Reserved_ DWORD_PTR dwContext
    );
extern DEFI_InternetSetFilePointer ORIG_InternetSetFilePointer;

typedef BOOL(__stdcall* DEFI_InternetSetOptionA) (
    _In_opt_ HINTERNET hInternet,
    _In_       DWORD dwOption,
    _In_opt_ LPVOID lpBuffer,
    _In_       DWORD dwBufferLength
    );
extern DEFI_InternetSetOptionA ORIG_InternetSetOptionA;

typedef BOOL(__stdcall* DEFI_InternetSetOptionExA) (
    _In_opt_ HINTERNET hInternet,
    _In_       DWORD dwOption,
    _In_opt_ LPVOID lpBuffer,
    _In_       DWORD dwBufferLength,
    _In_       DWORD dwFlags
    );
extern DEFI_InternetSetOptionExA ORIG_InternetSetOptionExA;

typedef BOOL(__stdcall* DEFI_InternetSetOptionExW) (
    _In_opt_ HINTERNET hInternet,
    _In_       DWORD dwOption,
    _In_opt_ LPVOID lpBuffer,
    _In_       DWORD dwBufferLength,
    _In_       DWORD dwFlags
    );
extern DEFI_InternetSetOptionExW ORIG_InternetSetOptionExW;

typedef BOOL(__stdcall* DEFI_InternetSetOptionW) (
    _In_opt_ HINTERNET hInternet,
    _In_       DWORD dwOption,
    _In_opt_ LPVOID lpBuffer,
    _In_       DWORD dwBufferLength
    );
extern DEFI_InternetSetOptionW ORIG_InternetSetOptionW;

typedef BOOL(__stdcall* DEFI_InternetSetPerSiteCookieDecisionA) (
    _In_ LPCSTR pchHostName,
    _In_ DWORD dwDecision
    );
extern DEFI_InternetSetPerSiteCookieDecisionA ORIG_InternetSetPerSiteCookieDecisionA;

typedef BOOL(__stdcall* DEFI_InternetSetPerSiteCookieDecisionW) (
    _In_ LPCWSTR pchHostName,
    _In_ DWORD dwDecision
    );
extern DEFI_InternetSetPerSiteCookieDecisionW ORIG_InternetSetPerSiteCookieDecisionW;

typedef INTERNET_STATUS_CALLBACK(__stdcall* DEFI_InternetSetStatusCallback) (
    _In_ HINTERNET hInternet,
    _In_opt_ INTERNET_STATUS_CALLBACK lpfnInternetCallback
    );
extern DEFI_InternetSetStatusCallback ORIG_InternetSetStatusCallback;

typedef INTERNET_STATUS_CALLBACK(__stdcall* DEFI_InternetSetStatusCallbackA) (
    _In_ HINTERNET hInternet,
    _In_opt_ INTERNET_STATUS_CALLBACK lpfnInternetCallback
    );
extern DEFI_InternetSetStatusCallbackA ORIG_InternetSetStatusCallbackA;

typedef INTERNET_STATUS_CALLBACK(__stdcall* DEFI_InternetSetStatusCallbackW) (
    _In_ HINTERNET hInternet,
    _In_opt_ INTERNET_STATUS_CALLBACK lpfnInternetCallback
    );
extern DEFI_InternetSetStatusCallbackW ORIG_InternetSetStatusCallbackW;

typedef BOOL(__stdcall* DEFI_InternetTimeFromSystemTime) (
    _In_ CONST SYSTEMTIME* pst,           // input GMT time
    _In_ DWORD dwRFC,                     // RFC format
    _Out_writes_bytes_(cbTime) LPSTR lpszTime,  // output string buffer
    _In_ DWORD cbTime                     // output buffer size
    );
extern DEFI_InternetTimeFromSystemTime ORIG_InternetTimeFromSystemTime;

typedef BOOL(__stdcall* DEFI_InternetTimeFromSystemTimeA) (
    _In_ CONST SYSTEMTIME* pst,           // input GMT time
    _In_ DWORD dwRFC,                     // RFC format
    _Out_writes_bytes_(cbTime) LPSTR lpszTime,  // output string buffer
    _In_ DWORD cbTime                     // output buffer size
    );
extern DEFI_InternetTimeFromSystemTimeA ORIG_InternetTimeFromSystemTimeA;

typedef BOOL(__stdcall* DEFI_InternetTimeFromSystemTimeW) (
    _In_ CONST SYSTEMTIME* pst,            // input GMT time
    _In_ DWORD dwRFC,                      // RFC format
    _Out_writes_bytes_(cbTime) LPWSTR lpszTime,  // output string buffer
    _In_ DWORD cbTime                      // output buffer size
    );
extern DEFI_InternetTimeFromSystemTimeW ORIG_InternetTimeFromSystemTimeW;

typedef BOOL(__stdcall* DEFI_InternetTimeToSystemTime) (
    _In_ LPCSTR lpszTime,          // NULL terminated string
    _Out_ SYSTEMTIME* pst,         // output in GMT time
    _Reserved_ DWORD dwReserved
    );
extern DEFI_InternetTimeToSystemTime ORIG_InternetTimeToSystemTime;

typedef BOOL(__stdcall* DEFI_InternetTimeToSystemTimeA) (
    _In_ LPCSTR lpszTime,          // NULL terminated string
    _Out_ SYSTEMTIME* pst,         // output in GMT time
    _Reserved_ DWORD dwReserved
    );
extern DEFI_InternetTimeToSystemTimeA ORIG_InternetTimeToSystemTimeA;

typedef BOOL(__stdcall* DEFI_InternetTimeToSystemTimeW) (
    _In_ LPCWSTR lpszTime,         // NULL terminated string
    _Out_ SYSTEMTIME* pst,         // output in GMT time
    _Reserved_ DWORD dwReserved
    );
extern DEFI_InternetTimeToSystemTimeW ORIG_InternetTimeToSystemTimeW;

typedef BOOL(__stdcall* DEFI_InternetUnlockRequestFile) (
    _Inout_ HANDLE hLockRequestInfo
    );
extern DEFI_InternetUnlockRequestFile ORIG_InternetUnlockRequestFile;

typedef BOOL(__stdcall* DEFI_InternetWriteFile) (
    _In_ HINTERNET hFile,
    _In_reads_bytes_(dwNumberOfBytesToWrite) LPCVOID lpBuffer,
    _In_ DWORD dwNumberOfBytesToWrite,
    _Out_ LPDWORD lpdwNumberOfBytesWritten
    );
extern DEFI_InternetWriteFile ORIG_InternetWriteFile;

typedef DWORD(__stdcall* DEFI_PrivacyGetZonePreferenceW) (
    _In_ DWORD dwZone,
    _In_ DWORD dwType,
    _Out_opt_ LPDWORD pdwTemplate,
    _Out_writes_opt_(*pdwBufferLength) LPWSTR pszBuffer,
    _Inout_opt_ LPDWORD pdwBufferLength
    );
extern DEFI_PrivacyGetZonePreferenceW ORIG_PrivacyGetZonePreferenceW;

typedef DWORD(__stdcall* DEFI_PrivacySetZonePreferenceW) (
    _In_ DWORD       dwZone,
    _In_ DWORD       dwType,
    _In_ DWORD       dwTemplate,
    _In_opt_ LPCWSTR     pszPreference
    );
extern DEFI_PrivacySetZonePreferenceW ORIG_PrivacySetZonePreferenceW;

typedef BOOL(__stdcall* DEFI_ReadUrlCacheEntryStream) (
    _In_ HANDLE hUrlCacheStream,
    _In_ DWORD dwLocation,
    _Out_writes_bytes_(*lpdwLen) __out_data_source(NETWORK) LPVOID lpBuffer,
    _Inout_ LPDWORD lpdwLen,
    _Reserved_ DWORD Reserved
    );
extern DEFI_ReadUrlCacheEntryStream ORIG_ReadUrlCacheEntryStream;

typedef BOOL(__stdcall* DEFI_ResumeSuspendedDownload) (
    _In_ HINTERNET hRequest,
    _In_ DWORD dwResultCode
    );
extern DEFI_ResumeSuspendedDownload ORIG_ResumeSuspendedDownload;

typedef BOOL(__stdcall* DEFI_RetrieveUrlCacheEntryFileA) (
    _In_ LPCSTR lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ DWORD dwReserved
    );
extern DEFI_RetrieveUrlCacheEntryFileA ORIG_RetrieveUrlCacheEntryFileA;

typedef BOOL(__stdcall* DEFI_RetrieveUrlCacheEntryFileW) (
    _In_ LPCWSTR lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _Reserved_ DWORD dwReserved
    );
extern DEFI_RetrieveUrlCacheEntryFileW ORIG_RetrieveUrlCacheEntryFileW;

typedef HANDLE(__stdcall* DEFI_RetrieveUrlCacheEntryStreamA) (
    _In_ LPCSTR  lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _In_ BOOL fRandomRead,
    _Reserved_ DWORD dwReserved
    );
extern DEFI_RetrieveUrlCacheEntryStreamA ORIG_RetrieveUrlCacheEntryStreamA;

typedef HANDLE(__stdcall* DEFI_RetrieveUrlCacheEntryStreamW) (
    _In_ LPCWSTR  lpszUrlName,
    _Inout_updates_bytes_opt_(*lpcbCacheEntryInfo) LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo,
    _Inout_ LPDWORD lpcbCacheEntryInfo,
    _In_ BOOL fRandomRead,
    _Reserved_ DWORD dwReserved
    );
extern DEFI_RetrieveUrlCacheEntryStreamW ORIG_RetrieveUrlCacheEntryStreamW;

typedef BOOL(__stdcall* DEFI_SetUrlCacheEntryGroup) (
    _In_   LPCSTR   lpszUrlName,
    _In_   DWORD    dwFlags,
    _In_   GROUPID  GroupId,
    _Reserved_ LPBYTE   pbGroupAttributes,
    _Reserved_ DWORD    cbGroupAttributes,
    _Reserved_ LPVOID   lpReserved
    );
extern DEFI_SetUrlCacheEntryGroup ORIG_SetUrlCacheEntryGroup;

typedef BOOL(__stdcall* DEFI_SetUrlCacheEntryGroupA) (
    _In_   LPCSTR   lpszUrlName,
    _In_   DWORD    dwFlags,
    _In_   GROUPID  GroupId,
    _Reserved_ LPBYTE   pbGroupAttributes,
    _Reserved_ DWORD    cbGroupAttributes,
    _Reserved_ LPVOID   lpReserved
    );
extern DEFI_SetUrlCacheEntryGroupA ORIG_SetUrlCacheEntryGroupA;

typedef BOOL(__stdcall* DEFI_SetUrlCacheEntryGroupW) (
    _In_   LPCWSTR  lpszUrlName,
    _In_   DWORD    dwFlags,
    _In_   GROUPID  GroupId,
    _Reserved_ LPBYTE   pbGroupAttributes,
    _Reserved_ DWORD    cbGroupAttributes,
    _Reserved_ LPVOID   lpReserved
    );
extern DEFI_SetUrlCacheEntryGroupW ORIG_SetUrlCacheEntryGroupW;

typedef BOOL(__stdcall* DEFI_SetUrlCacheEntryInfoA) (
    _In_ LPCSTR lpszUrlName,
    _In_ LPINTERNET_CACHE_ENTRY_INFOA lpCacheEntryInfo,
    _In_ DWORD dwFieldControl
    );
extern DEFI_SetUrlCacheEntryInfoA ORIG_SetUrlCacheEntryInfoA;

typedef BOOL(__stdcall* DEFI_SetUrlCacheEntryInfoW) (
    _In_ LPCWSTR lpszUrlName,
    _In_ LPINTERNET_CACHE_ENTRY_INFOW lpCacheEntryInfo,
    _In_ DWORD dwFieldControl
    );
extern DEFI_SetUrlCacheEntryInfoW ORIG_SetUrlCacheEntryInfoW;

typedef BOOL(__stdcall* DEFI_SetUrlCacheGroupAttributeA) (
    _In_        GROUPID                         gid,
    _Reserved_  DWORD                           dwFlags,
    _In_        DWORD                           dwAttributes,
    _In_        LPINTERNET_CACHE_GROUP_INFOA    lpGroupInfo,
    _Reserved_  LPVOID                          lpReserved
    );
extern DEFI_SetUrlCacheGroupAttributeA ORIG_SetUrlCacheGroupAttributeA;

typedef BOOL(__stdcall* DEFI_SetUrlCacheGroupAttributeW) (
    _In_        GROUPID                         gid,
    _Reserved_  DWORD                           dwFlags,
    _In_        DWORD                           dwAttributes,
    _In_        LPINTERNET_CACHE_GROUP_INFOW    lpGroupInfo,
    _Reserved_  LPVOID                          lpReserved
    );
extern DEFI_SetUrlCacheGroupAttributeW ORIG_SetUrlCacheGroupAttributeW;

typedef BOOL(__stdcall* DEFI_UnlockUrlCacheEntryFile) (
    _In_ LPCSTR lpszUrlName,
    _Reserved_ DWORD dwReserved
    );
extern DEFI_UnlockUrlCacheEntryFile ORIG_UnlockUrlCacheEntryFile;

typedef BOOL(__stdcall* DEFI_UnlockUrlCacheEntryFileA) (
    _In_ LPCSTR lpszUrlName,
    _Reserved_ DWORD dwReserved
    );
extern DEFI_UnlockUrlCacheEntryFileA ORIG_UnlockUrlCacheEntryFileA;

typedef BOOL(__stdcall* DEFI_UnlockUrlCacheEntryFileW) (
    _In_ LPCWSTR lpszUrlName,
    _Reserved_ DWORD dwReserved
    );
extern DEFI_UnlockUrlCacheEntryFileW ORIG_UnlockUrlCacheEntryFileW;

typedef BOOL(__stdcall* DEFI_UnlockUrlCacheEntryStream) (
    _In_ HANDLE hUrlCacheStream,
    _Reserved_ DWORD Reserved
    );
extern DEFI_UnlockUrlCacheEntryStream ORIG_UnlockUrlCacheEntryStream;