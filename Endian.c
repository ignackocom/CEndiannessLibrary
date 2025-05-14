/******************************************************************************
* \file      Endian.c
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Endian detection code, C89, C99 and higher compatible
* \details
*
* \see       https://github.com/ignackocom
*			 https://en.wikipedia.org/wiki/Endianness
*			 https://github.com/cpredef/predef
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/


#include "Datatype.h"
#include "Endian.h"


#if defined(__clang__)
#pragma clang unsafe_buffer_usage begin
#endif /* defined(__clang__) */

T_ENDIAN Endian(void)
{
	/* all C versions */
	union {
		UINT32 value;
		UINT8 data[sizeof(UINT32)];
	} num;

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
