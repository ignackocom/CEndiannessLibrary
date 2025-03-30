/******************************************************************************
* \file      Endian.c
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Endian detection code, C89, C99 and higher compatible
* \details
*
* \see       https://en.wikipedia.org/wiki/Endianness
*			 https://github.com/cpredef/predef
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
/* C99 and higher */
#include <stdint.h>
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */

#include "Endian.h"


#if defined(__clang__)
#pragma clang unsafe_buffer_usage begin
#endif /* defined(__clang__) */

T_ENDIAN Endian(void)
{
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

	/* C99 and higher */
	union {
		uint32_t value;
		uint8_t data[sizeof(uint32_t)];
	} num;

#else /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */

	/* C89 and lower */
	union {
		unsigned long value;
		unsigned char data[sizeof(unsigned long)];
	} num;

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */

	num.data[0] = 0x00;
	num.data[1] = 0x01;
	num.data[2] = 0x02;
	num.data[3] = 0x03;

	switch (num.value) {
		case 0x00010203: return(ENDIAN_BIG);
		case 0x03020100: return(ENDIAN_LITTLE);
		case 0x02030001: return(ENDIAN_BIG_WORD);
		case 0x01000302: return(ENDIAN_LITTLE_WORD);
		default: break;
	}

	return(ENDIAN_UNKNOWN);
}

#if defined(__clang__)
#pragma clang unsafe_buffer_usage end
#endif /* defined(__clang__) */
