#pragma once

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

struct syscall_context
{
	/* DO NOT REORDER */
	/* Context for fork() */
	DWORD sp;

	/* The following are not used by fork() */
	DWORD eax;
	DWORD eflags;
};