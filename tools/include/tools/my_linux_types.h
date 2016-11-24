#ifndef my_linux_types_h
#define my_linux_types_h

#ifdef __linux__
# include "linux/types.h"
#else

#ifndef __ASM_ARM_TYPES_H
#define __ASM_ARM_TYPES_H

#ifndef __ASSEMBLY__

typedef unsigned short umode_t;

typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;

#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
typedef __signed__ long long __s64;
typedef unsigned long long __u64;
#endif

#endif

#endif


#endif

#endif