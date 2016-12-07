 
// begin_1_0
// begin_1_1
// begin_1_2
// begin_1_3
/***********************************************************************************
*                                                                                  *
* processthreadsapi.h -- ApiSet Contract for api-ms-win-core-processthreads-l1     *
*                                                                                  *
* Copyright (c) Microsoft Corporation. All rights reserved.                        *
*                                                                                  *
***********************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _PROCESSTHREADSAPI_H_
#define _PROCESSTHREADSAPI_H_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-core-processthreads-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_PROCESSTHREADS_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINTHRESHOLD
#define _APISET_PROCESSTHREADS_VER 0x0103
#elif _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINBLUE
#define _APISET_PROCESSTHREADS_VER 0x0102
#elif _APISET_TARGET_VERSION == _APISET_TARGET_VERSION_WIN8
#define _APISET_PROCESSTHREADS_VER 0x0101
#elif _APISET_TARGET_VERSION == _APISET_TARGET_VERSION_WIN7
#define _APISET_PROCESSTHREADS_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

// end_1_0
// end_1_1
// end_1_2
// end_1_3

// begin_1_0
// begin_1_3

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

typedef struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
} PROCESS_INFORMATION, *PPROCESS_INFORMATION, *LPPROCESS_INFORMATION;

typedef struct _STARTUPINFOA {
    DWORD   cb;
    LPSTR   lpReserved;
    LPSTR   lpDesktop;
    LPSTR   lpTitle;
    DWORD   dwX;
    DWORD   dwY;
    DWORD   dwXSize;
    DWORD   dwYSize;
    DWORD   dwXCountChars;
    DWORD   dwYCountChars;
    DWORD   dwFillAttribute;
    DWORD   dwFlags;
    WORD    wShowWindow;
    WORD    cbReserved2;
    LPBYTE  lpReserved2;
    HANDLE  hStdInput;
    HANDLE  hStdOutput;
    HANDLE  hStdError;
} STARTUPINFOA, *LPSTARTUPINFOA;
typedef struct _STARTUPINFOW {
    DWORD   cb;
    LPWSTR  lpReserved;
    LPWSTR  lpDesktop;
    LPWSTR  lpTitle;
    DWORD   dwX;
    DWORD   dwY;
    DWORD   dwXSize;
    DWORD   dwYSize;
    DWORD   dwXCountChars;
    DWORD   dwYCountChars;
    DWORD   dwFillAttribute;
    DWORD   dwFlags;
    WORD    wShowWindow;
    WORD    cbReserved2;
    LPBYTE  lpReserved2;
    HANDLE  hStdInput;
    HANDLE  hStdOutput;
    HANDLE  hStdError;
} STARTUPINFOW, *LPSTARTUPINFOW;
#ifdef UNICODE
typedef STARTUPINFOW STARTUPINFO;
typedef LPSTARTUPINFOW LPSTARTUPINFO;
#else
typedef STARTUPINFOA STARTUPINFO;
typedef LPSTARTUPINFOA LPSTARTUPINFO;
#endif // UNICODE

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

// end_1_0
// end_1_3
// begin_1_0

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)


#if (_WIN32_WINNT >= 0x0400) || (_WIN32_WINDOWS > 0x0400)

WINBASEAPI
DWORD
WINAPI
QueueUserAPC(
    _In_ PAPCFUNC pfnAPC,
    _In_ HANDLE hThread,
    _In_ ULONG_PTR dwData
    );


#endif /* _WIN32_WINNT >= 0x0400 || _WIN32_WINDOWS > 0x0400 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
GetProcessTimes(
    _In_ HANDLE hProcess,
    _Out_ LPFILETIME lpCreationTime,
    _Out_ LPFILETIME lpExitTime,
    _Out_ LPFILETIME lpKernelTime,
    _Out_ LPFILETIME lpUserTime
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
HANDLE
WINAPI
GetCurrentProcess(
    VOID
    );


WINBASEAPI
DWORD
WINAPI
GetCurrentProcessId(
    VOID
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
DECLSPEC_NORETURN
VOID
WINAPI
ExitProcess(
    _In_ UINT uExitCode
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
TerminateProcess(
    _In_ HANDLE hProcess,
    _In_ UINT uExitCode
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
GetExitCodeProcess(
    _In_ HANDLE hProcess,
    _Out_ LPDWORD lpExitCode
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
SwitchToThread(
    VOID
    );


WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreateThread(
    _In_opt_ LPSECURITY_ATTRIBUTES lpThreadAttributes,
    _In_ SIZE_T dwStackSize,
    _In_ LPTHREAD_START_ROUTINE lpStartAddress,
    _In_opt_ __drv_aliasesMem LPVOID lpParameter,
    _In_ DWORD dwCreationFlags,
    _Out_opt_ LPDWORD lpThreadId
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreateRemoteThread(
    _In_ HANDLE hProcess,
    _In_opt_ LPSECURITY_ATTRIBUTES lpThreadAttributes,
    _In_ SIZE_T dwStackSize,
    _In_ LPTHREAD_START_ROUTINE lpStartAddress,
    _In_opt_ LPVOID lpParameter,
    _In_ DWORD dwCreationFlags,
    _Out_opt_ LPDWORD lpThreadId
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
HANDLE
WINAPI
GetCurrentThread(
    VOID
    );


WINBASEAPI
DWORD
WINAPI
GetCurrentThreadId(
    VOID
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
OpenThread(
    _In_ DWORD dwDesiredAccess,
    _In_ BOOL bInheritHandle,
    _In_ DWORD dwThreadId
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
SetThreadPriority(
    _In_ HANDLE hThread,
    _In_ int nPriority
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
SetThreadPriorityBoost(
    _In_ HANDLE hThread,
    _In_ BOOL bDisablePriorityBoost
    );


WINBASEAPI
BOOL
WINAPI
GetThreadPriorityBoost(
    _In_ HANDLE hThread,
    _Out_ PBOOL pDisablePriorityBoost
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
int
WINAPI
GetThreadPriority(
    _In_ HANDLE hThread
    );


WINBASEAPI
DECLSPEC_NORETURN
VOID
WINAPI
ExitThread(
    _In_ DWORD dwExitCode
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
TerminateThread(
    _In_ HANDLE hThread,
    _In_ DWORD dwExitCode
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
_Success_(return != 0)
BOOL
WINAPI
GetExitCodeThread(
    _In_ HANDLE hThread,
    _Out_ LPDWORD lpExitCode
    );


WINBASEAPI
DWORD
WINAPI
SuspendThread(
    _In_ HANDLE hThread
    );


WINBASEAPI
DWORD
WINAPI
ResumeThread(
    _In_ HANDLE hThread
    );


#ifndef TLS_OUT_OF_INDEXES
#define TLS_OUT_OF_INDEXES ((DWORD)0xFFFFFFFF)
#endif

_Must_inspect_result_
WINBASEAPI
DWORD
WINAPI
TlsAlloc(
    VOID
    );


WINBASEAPI
LPVOID
WINAPI
TlsGetValue(
    _In_ DWORD dwTlsIndex
    );


WINBASEAPI
BOOL
WINAPI
TlsSetValue(
    _In_ DWORD dwTlsIndex,
    _In_opt_ LPVOID lpTlsValue
    );


WINBASEAPI
BOOL
WINAPI
TlsFree(
    _In_ DWORD dwTlsIndex
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#ifndef _APISET_EXPORTS_FILTER

WINBASEAPI
BOOL
WINAPI
CreateProcessA(
    _In_opt_ LPCSTR lpApplicationName,
    _Inout_opt_ LPSTR lpCommandLine,
    _In_opt_ LPSECURITY_ATTRIBUTES lpProcessAttributes,
    _In_opt_ LPSECURITY_ATTRIBUTES lpThreadAttributes,
    _In_ BOOL bInheritHandles,
    _In_ DWORD dwCreationFlags,
    _In_opt_ LPVOID lpEnvironment,
    _In_opt_ LPCSTR lpCurrentDirectory,
    _In_ LPSTARTUPINFOA lpStartupInfo,
    _Out_ LPPROCESS_INFORMATION lpProcessInformation
    );

WINBASEAPI
BOOL
WINAPI
CreateProcessW(
    _In_opt_ LPCWSTR lpApplicationName,
    _Inout_opt_ LPWSTR lpCommandLine,
    _In_opt_ LPSECURITY_ATTRIBUTES lpProcessAttributes,
    _In_opt_ LPSECURITY_ATTRIBUTES lpThreadAttributes,
    _In_ BOOL bInheritHandles,
    _In_ DWORD dwCreationFlags,
    _In_opt_ LPVOID lpEnvironment,
    _In_opt_ LPCWSTR lpCurrentDirectory,
    _In_ LPSTARTUPINFOW lpStartupInfo,
    _Out_ LPPROCESS_INFORMATION lpProcessInformation
    );

#ifdef UNICODE
#define CreateProcess  CreateProcessW
#else
#define CreateProcess  CreateProcessA
#endif // !UNICODE

#endif // _APISET_EXPORTS_FILTER

WINBASEAPI
BOOL
WINAPI
SetProcessShutdownParameters(
    _In_ DWORD dwLevel,
    _In_ DWORD dwFlags
    );


WINBASEAPI
DWORD
WINAPI
GetProcessVersion(
    _In_ DWORD ProcessId
    );


WINBASEAPI
VOID
WINAPI
GetStartupInfoW(
    _Out_ LPSTARTUPINFOW lpStartupInfo
    );

#ifdef UNICODE
#define GetStartupInfo  GetStartupInfoW
#endif

WINADVAPI
BOOL
WINAPI
CreateProcessAsUserW(
    _In_opt_ HANDLE hToken,
    _In_opt_ LPCWSTR lpApplicationName,
    _Inout_opt_ LPWSTR lpCommandLine,
    _In_opt_ LPSECURITY_ATTRIBUTES lpProcessAttributes,
    _In_opt_ LPSECURITY_ATTRIBUTES lpThreadAttributes,
    _In_ BOOL bInheritHandles,
    _In_ DWORD dwCreationFlags,
    _In_opt_ LPVOID lpEnvironment,
    _In_opt_ LPCWSTR lpCurrentDirectory,
    _In_ LPSTARTUPINFOW lpStartupInfo,
    _Out_ LPPROCESS_INFORMATION lpProcessInformation
    );


#ifdef UNICODE
#define CreateProcessAsUser  CreateProcessAsUserW
#endif

//
// TODO: neerajsi-2013/12/08 - this should be moved to official documentation.
//
// These are shorthand ways of referring to the thread token, the process token,
// or the "effective token" (the thread token if it exists, otherwise the
// process token), respectively. These handles only have TOKEN_QUERY and
// TOKEN_QUERY_SOURCE access in Windows 8 (use TOKEN_ACCESS_PSEUDO_HANDLE to
// determine the granted access on the target version of Windows). These handles
// do not need to be closed.
//


#if !defined(MIDL_PASS)

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

FORCEINLINE
HANDLE
GetCurrentProcessToken (
    VOID
    )
{
    return (HANDLE)(LONG_PTR) -4;
}

FORCEINLINE
HANDLE
GetCurrentThreadToken (
    VOID
    )
{
    return (HANDLE)(LONG_PTR) -5;
}

FORCEINLINE
HANDLE
GetCurrentThreadEffectiveToken (
    VOID
    )
{
    return (HANDLE)(LONG_PTR) -6;
}

#endif // (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#endif // !defined(MIDL_PASS)

WINADVAPI
_Must_inspect_result_
BOOL
APIENTRY
SetThreadToken(
    _In_opt_ PHANDLE Thread,
    _In_opt_ HANDLE Token
    );


WINADVAPI
BOOL
WINAPI
OpenProcessToken(
    _In_ HANDLE ProcessHandle,
    _In_ DWORD DesiredAccess,
    _Outptr_ PHANDLE TokenHandle
    );


WINADVAPI
BOOL
WINAPI
OpenThreadToken(
    _In_ HANDLE ThreadHandle,
    _In_ DWORD DesiredAccess,
    _In_ BOOL OpenAsSelf,
    _Outptr_ PHANDLE TokenHandle
    );


WINBASEAPI
BOOL
WINAPI
SetPriorityClass(
    _In_ HANDLE hProcess,
    _In_ DWORD dwPriorityClass
    );


WINBASEAPI
BOOL
WINAPI
SetThreadStackGuarantee(
    _Inout_ PULONG StackSizeInBytes
    );


WINBASEAPI
DWORD
WINAPI
GetPriorityClass(
    _In_ HANDLE hProcess
    );


WINBASEAPI
BOOL
WINAPI
ProcessIdToSessionId(
    _In_ DWORD dwProcessId,
    _Out_ DWORD * pSessionId
    );




#if (_WIN32_WINNT >= 0x0501)

WINBASEAPI
DWORD
WINAPI
GetProcessId(
    _In_ HANDLE Process
    );


#endif // _WIN32_WINNT >= 0x0501

typedef struct _PROC_THREAD_ATTRIBUTE_LIST *PPROC_THREAD_ATTRIBUTE_LIST, *LPPROC_THREAD_ATTRIBUTE_LIST;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)


#if (_WIN32_WINNT >= 0x0502)

WINBASEAPI
DWORD
WINAPI
GetThreadId(
    _In_ HANDLE Thread
    );


#endif // _WIN32_WINNT >= 0x0502


#if (_WIN32_WINNT >= 0x0600)

WINBASEAPI
VOID
WINAPI
FlushProcessWriteBuffers(
    VOID
    );


#endif // _WIN32_WINNT >= 0x0600

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion


#if (_WIN32_WINNT >= 0x0600)

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
DWORD
WINAPI
GetProcessIdOfThread(
    _In_ HANDLE Thread
    );


WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
InitializeProcThreadAttributeList(
    _Out_writes_bytes_to_opt_(*lpSize, *lpSize) LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList,
    _In_ DWORD dwAttributeCount,
    _Reserved_ DWORD dwFlags,
    _When_(lpAttributeList == nullptr, _Out_) _When_(lpAttributeList != nullptr, _Inout_) PSIZE_T lpSize
    );


WINBASEAPI
VOID
WINAPI
DeleteProcThreadAttributeList(
    _Inout_ LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList
    );


#define PROCESS_AFFINITY_ENABLE_AUTO_UPDATE 0x00000001UL

WINBASEAPI
BOOL
WINAPI
SetProcessAffinityUpdateMode(
    _In_ HANDLE hProcess,
    _In_ DWORD dwFlags
    );


WINBASEAPI
BOOL
WINAPI
QueryProcessAffinityUpdateMode(
    _In_ HANDLE hProcess,
    _Out_opt_ LPDWORD lpdwFlags
    );


#define PROC_THREAD_ATTRIBUTE_REPLACE_VALUE     0x00000001

WINBASEAPI
BOOL
WINAPI
UpdateProcThreadAttribute(
    _Inout_ LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList,
    _In_ DWORD dwFlags,
    _In_ DWORD_PTR Attribute,
    _In_reads_bytes_opt_(cbSize) PVOID lpValue,
    _In_ SIZE_T cbSize,
    _Out_writes_bytes_opt_(cbSize) PVOID lpPreviousValue,
    _In_opt_ PSIZE_T lpReturnSize
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif // (_WIN32_WINNT >= 0x0600)

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreateRemoteThreadEx(
    _In_ HANDLE hProcess,
    _In_opt_ LPSECURITY_ATTRIBUTES lpThreadAttributes,
    _In_ SIZE_T dwStackSize,
    _In_ LPTHREAD_START_ROUTINE lpStartAddress,
    _In_opt_ LPVOID lpParameter,
    _In_ DWORD dwCreationFlags,
    _In_opt_ LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList,
    _Out_opt_ LPDWORD lpThreadId
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

// end_1_0
// begin_1_1


#if !defined(MIDL_PASS)

#if (defined(_WIN32_WINNT) && !defined(_CONTRACT_GEN)) || (_APISET_PROCESSTHREADS_VER > 0x0100)

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#if (_WIN32_WINNT >= 0x0602)

WINBASEAPI
VOID
WINAPI
GetCurrentThreadStackLimits(
    _Out_ PULONG_PTR LowLimit,
    _Out_ PULONG_PTR HighLimit
    );


#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
GetThreadContext(
    _In_ HANDLE hThread,
    _Inout_ LPCONTEXT lpContext
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
SetThreadContext(
    _In_ HANDLE hThread,
    _In_ CONST CONTEXT * lpContext
    );



#if (_WIN32_WINNT >= 0x0602)

WINBASEAPI
BOOL
WINAPI
SetProcessMitigationPolicy(
    _In_ PROCESS_MITIGATION_POLICY MitigationPolicy,
    _In_reads_bytes_(dwLength) PVOID lpBuffer,
    _In_ SIZE_T dwLength
    );


WINBASEAPI
BOOL
WINAPI
GetProcessMitigationPolicy(
    _In_ HANDLE hProcess,
    _In_ PROCESS_MITIGATION_POLICY MitigationPolicy,
    _Out_writes_bytes_(dwLength) PVOID lpBuffer,
    _In_ SIZE_T dwLength
    );


#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif // (defined(_WIN32_WINNT) && !defined(_CONTRACT_GEN)) || (_APISET_PROCESSTHREADS_VER > 0x0100)
#endif // defined(MIDL_PASS)


#if (defined(_WIN32_WINNT) && !defined(_CONTRACT_GEN)) || (_APISET_PROCESSTHREADS_VER > 0x0100)

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
FlushInstructionCache(
    _In_ HANDLE hProcess,
    _In_reads_bytes_opt_(dwSize) LPCVOID lpBaseAddress,
    _In_ SIZE_T dwSize
    );


WINBASEAPI
BOOL
WINAPI
GetThreadTimes(
    _In_ HANDLE hThread,
    _Out_ LPFILETIME lpCreationTime,
    _Out_ LPFILETIME lpExitTime,
    _Out_ LPFILETIME lpKernelTime,
    _Out_ LPFILETIME lpUserTime
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
HANDLE
WINAPI
OpenProcess(
    _In_ DWORD dwDesiredAccess,
    _In_ BOOL bInheritHandle,
    _In_ DWORD dwProcessId
    );


BOOL
WINAPI
IsProcessorFeaturePresent(
    _In_ DWORD ProcessorFeature
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif // (defined(_WIN32_WINNT) && !defined(_CONTRACT_GEN)) || (_APISET_PROCESSTHREADS_VER > 0x0100)


#if ((_WIN32_WINNT >= 0x0501) && !defined(_CONTRACT_GEN)) || (_APISET_PROCESSTHREADS_VER > 0x0100)

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
GetProcessHandleCount(
    _In_ HANDLE hProcess,
    _Out_ PDWORD pdwHandleCount
    );


#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#endif // ((_WIN32_WINNT >= 0x0501) && !defined(_CONTRACT_GEN)) || (_APISET_PROCESSTHREADS_VER > 0x0100)


#if ((_WIN32_WINNT >= 0x0502) && !defined(_CONTRACT_GEN)) || (_APISET_PROCESSTHREADS_VER > 0x0100)

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
DWORD
WINAPI
GetCurrentProcessorNumber(
    VOID
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif // ((_WIN32_WINNT >= 0x0502) && !defined(_CONTRACT_GEN)) || (_APISET_PROCESSTHREADS_VER > 0x0100)


#if ((_WIN32_WINNT >= 0x0601) && !defined(_CONTRACT_GEN)) || (_APISET_PROCESSTHREADS_VER > 0x0100)

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
SetThreadIdealProcessorEx(
    _In_ HANDLE hThread,
    _In_ PPROCESSOR_NUMBER lpIdealProcessor,
    _Out_opt_ PPROCESSOR_NUMBER lpPreviousIdealProcessor
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
GetThreadIdealProcessorEx(
    _In_ HANDLE hThread,
    _Out_ PPROCESSOR_NUMBER lpIdealProcessor
    );


WINBASEAPI
VOID
WINAPI
GetCurrentProcessorNumberEx(
    _Out_ PPROCESSOR_NUMBER ProcNumber
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif // ((_WIN32_WINNT >= 0x0601) && !defined(_CONTRACT_GEN)) || (_APISET_PROCESSTHREADS_VER > 0x0100)

// end_1_1
// begin_1_2


#if !defined(_CONTRACT_GEN) || (_APISET_PROCESSTHREADS_VER >= 0x0102)

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#if (_WIN32_WINNT >= _WIN32_WINNT_WINXP)

WINBASEAPI
BOOL
WINAPI
GetProcessPriorityBoost(
    _In_ HANDLE hProcess,
    _Out_ PBOOL pDisablePriorityBoost
    );


WINBASEAPI
BOOL
WINAPI
SetProcessPriorityBoost(
    _In_ HANDLE hProcess,
    _In_ BOOL bDisablePriorityBoost
    );


WINBASEAPI
BOOL
WINAPI
GetThreadIOPendingFlag(
    _In_ HANDLE hThread,
    _Out_ PBOOL lpIOIsPending
    );


WINBASEAPI
BOOL
WINAPI
GetSystemTimes(
    _Out_opt_ PFILETIME lpIdleTime,
    _Out_opt_ PFILETIME lpKernelTime,
    _Out_opt_ PFILETIME lpUserTime
    );


#endif // (_WIN32_WINNT >= _WIN32_WINNT_WINXP)

//
// Thread information classes.
//

typedef enum _THREAD_INFORMATION_CLASS {
    ThreadMemoryPriority,
    ThreadAbsoluteCpuPriority,
    ThreadInformationClassMax
} THREAD_INFORMATION_CLASS;


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

typedef struct _MEMORY_PRIORITY_INFORMATION {
    ULONG MemoryPriority;
} MEMORY_PRIORITY_INFORMATION, *PMEMORY_PRIORITY_INFORMATION;

WINBASEAPI
BOOL
WINAPI
GetThreadInformation(
    _In_ HANDLE hThread,
    _In_ THREAD_INFORMATION_CLASS ThreadInformationClass,
    _Out_writes_bytes_(ThreadInformationSize) LPVOID ThreadInformation,
    _In_ DWORD ThreadInformationSize
    );


WINBASEAPI
BOOL
WINAPI
SetThreadInformation(
    _In_ HANDLE hThread,
    _In_ THREAD_INFORMATION_CLASS ThreadInformationClass,
    _In_reads_bytes_(ThreadInformationSize) LPVOID ThreadInformation,
    _In_ DWORD ThreadInformationSize
    );


#endif // (_WIN32_WINNT >= _WIN32_WINNT_WIN8)


#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)

WINBASEAPI
BOOL
WINAPI
IsProcessCritical(
    _In_ HANDLE hProcess,
    _Out_ PBOOL Critical
    );


#endif // (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10)

WINBASEAPI
BOOL
WINAPI
SetProtectedPolicy(
    _In_ LPCGUID PolicyGuid,
    _In_ ULONG_PTR PolicyValue,
    _Out_opt_ PULONG_PTR OldPolicyValue
    );


WINBASEAPI
BOOL
WINAPI
QueryProtectedPolicy(
    _In_ LPCGUID PolicyGuid,
    _Out_ PULONG_PTR PolicyValue
    );


#endif // (_WIN32_WINNT >= _WIN32_WINNT_WIN10)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif // !defined(_CONTRACT_GEN) || (_APISET_PROCESSTHREADS_VER >= 0x0102)

// end_1_2

// begin_1_3

#if !defined(_CONTRACT_GEN) || (_APISET_PROCESSTHREADS_VER >= 0x0103)

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
DWORD
WINAPI
SetThreadIdealProcessor(
    _In_ HANDLE hThread,
    _In_ DWORD dwIdealProcessor
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

typedef enum _PROCESS_INFORMATION_CLASS {
    ProcessMemoryPriority,
    ProcessMemoryExhaustionInfo,
    ProcessAppMemoryInfo,
    ProcessInPrivateInfo,
    ProcessEDPStateInfo,
    ProcessInformationClassMax
} PROCESS_INFORMATION_CLASS;

typedef struct _APP_MEMORY_INFORMATION {
    ULONG64 AvailableCommit;
    ULONG64 PrivateCommitUsage;
    ULONG64 PeakPrivateCommitUsage;
    ULONG64 TotalCommitUsage;
} APP_MEMORY_INFORMATION, *PAPP_MEMORY_INFORMATION;

typedef struct _EDP_PROCESS_STATE {
    BYTE data[32];
} EDP_PROCESS_STATE, *PEDP_PROCESS_STATE;

typedef struct _EDP_PROCESS_STATE_TLS {
    EDP_PROCESS_STATE EDPProcessState;
    DWORD TlsIndex;
} EDP_PROCESS_STATE_TLS, *PEDP_PROCESS_STATE_TLS;

//
// Constants and structures needed to enable the fail fast on commit failure
// feature.
//

#define PME_CURRENT_VERSION                      1

typedef enum _PROCESS_MEMORY_EXHAUSTION_TYPE {
    PMETypeFailFastOnCommitFailure,
    PMETypeMax
} PROCESS_MEMORY_EXHAUSTION_TYPE, *PPROCESS_MEMORY_EXHAUSTION_TYPE;

#define PME_FAILFAST_ON_COMMIT_FAIL_DISABLE    0x0
#define PME_FAILFAST_ON_COMMIT_FAIL_ENABLE     0x1

typedef struct _PROCESS_MEMORY_EXHAUSTION_INFO {
    USHORT Version;
    USHORT Reserved;
    PROCESS_MEMORY_EXHAUSTION_TYPE Type;
    ULONG_PTR Value;
} PROCESS_MEMORY_EXHAUSTION_INFO, *PPROCESS_MEMORY_EXHAUSTION_INFO;


#if (_WIN32_WINNT >= 0x0602)

WINBASEAPI
BOOL
WINAPI
SetProcessInformation(
    _In_ HANDLE hProcess,
    _In_ PROCESS_INFORMATION_CLASS ProcessInformationClass,
    _In_reads_bytes_(ProcessInformationSize) LPVOID ProcessInformation,
    _In_ DWORD ProcessInformationSize
    );


WINBASEAPI
BOOL
WINAPI
GetProcessInformation(
    _In_ HANDLE hProcess,
    _In_ PROCESS_INFORMATION_CLASS ProcessInformationClass,
    _Out_writes_bytes_(ProcessInformationSize) LPVOID ProcessInformation,
    _In_ DWORD ProcessInformationSize
    );


#endif //(_WIN32_WINNT >= 0x0602)


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10)

_Success_(return != FALSE)
BOOL
WINAPI
GetSystemCpuSetInformation(
    _Out_writes_bytes_to_opt_(BufferLength, *ReturnedLength) PSYSTEM_CPU_SET_INFORMATION Information,
    _In_ ULONG BufferLength,
    _Always_(_Out_) PULONG ReturnedLength,
    _In_opt_ HANDLE Process,
    _Reserved_ ULONG Flags
    );


_Success_(return != FALSE)
BOOL
WINAPI
GetProcessDefaultCpuSets(
    _In_ HANDLE Process,
    _Out_writes_to_opt_(CpuSetIdCount, *RequiredIdCount) PULONG CpuSetIds,
    _In_ ULONG CpuSetIdCount,
    _Always_(_Out_) PULONG RequiredIdCount
    );


_Success_(return != FALSE)
BOOL
WINAPI
SetProcessDefaultCpuSets(
    _In_ HANDLE Process,
    _In_reads_opt_(CpuSetIdCount) const ULONG * CpuSetIds,
    _In_ ULONG CpuSetIdCount
    );


_Success_(return != FALSE)
BOOL
WINAPI
GetThreadSelectedCpuSets(
    _In_ HANDLE Thread,
    _Out_writes_to_opt_(CpuSetIdCount, *RequiredIdCount) PULONG CpuSetIds,
    _In_ ULONG CpuSetIdCount,
    _Always_(_Out_) PULONG RequiredIdCount
    );


_Success_(return != FALSE)
BOOL
WINAPI
SetThreadSelectedCpuSets(
    _In_ HANDLE Thread,
    _In_reads_(CpuSetIdCount) const ULONG * CpuSetIds,
    _In_ ULONG CpuSetIdCount
    );


#endif // (_WIN32_WINNT >= WIN32_WINNT_WIN10)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI
BOOL
WINAPI
CreateProcessAsUserA(
    _In_opt_ HANDLE hToken,
    _In_opt_ LPCSTR lpApplicationName,
    _Inout_opt_ LPSTR lpCommandLine,
    _In_opt_ LPSECURITY_ATTRIBUTES lpProcessAttributes,
    _In_opt_ LPSECURITY_ATTRIBUTES lpThreadAttributes,
    _In_ BOOL bInheritHandles,
    _In_ DWORD dwCreationFlags,
    _In_opt_ LPVOID lpEnvironment,
    _In_opt_ LPCSTR lpCurrentDirectory,
    _In_ LPSTARTUPINFOA lpStartupInfo,
    _Out_ LPPROCESS_INFORMATION lpProcessInformation
    );


#ifndef UNICODE
#define CreateProcessAsUser  CreateProcessAsUserA
#endif

WINBASEAPI
BOOL
WINAPI
GetProcessShutdownParameters(
    _Out_ LPDWORD lpdwLevel,
    _Out_ LPDWORD lpdwFlags
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif // !defined(_CONTRACT_GEN) || (_APISET_PROCESSTHREADS_VER >= 0x0103)

// end_1_3

// begin_1_0
// begin_1_1
// begin_1_2
// begin_1_3

#ifdef __cplusplus
}
#endif

#endif // _PROCESSTHREADSAPI_H_
// end_1_0
// end_1_1
// end_1_2
// end_1_3