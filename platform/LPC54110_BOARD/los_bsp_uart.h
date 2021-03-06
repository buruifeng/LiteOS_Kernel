#ifndef _LOS_BSP_UART_H
#define _LOS_BSP_UART_H

#include <stdio.h>
#include <string.h>

#ifdef LOS_LPC54114
	#define LOS_EvbUartPrintf DbgConsole_Printf
#endif

extern void LOS_EvbUartInit(void);
extern void LOS_EvbUartReadByte(char* c);
extern void LOS_EvbUartWriteByte(char c);
extern void LOS_EvbUartWriteStr(const char* str);


#endif
