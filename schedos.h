#ifndef WEENSYOS_SCHEDOS_H
#define WEENSYOS_SCHEDOS_H
#include "types.h"

/*****************************************************************************
 * schedos.h
 *
 *   Constants and variables shared by SchedOS's kernel and applications.
 *
 *****************************************************************************/

// System call numbers.
// An application calls a system call by causing the specified interrupt.

#define INT_SYS_YIELD		48
#define INT_SYS_EXIT		49
#define INT_SYS_SETPRIORITY	50
#define INT_SYS_SHARE		51
#define INT_SYS_PRINT		52
#define INT_SYS_ADDTICKET	53
#define INT_SYS_DELTICKET	54



// The current screen cursor position (stored at memory location 0x198000).

extern uint16_t * volatile cursorpos;
extern uint32_t   spinlock;

#endif
