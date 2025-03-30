/******************************************************************************
* \file      EndianNative.c
* \version   2025.03.18
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Endian native api
* \details
*
* \see       https://en.wikipedia.org/wiki/Endianness
*			 https://github.com/cpredef/predef
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#include <limits.h>

#include "EndianNative.h"


#if defined(__clang__)
#pragma clang unsafe_buffer_usage begin
#endif /* defined(__clang__) */

unsigned short Endian_native_unsigned_short(unsigned short net_number)
{
	unsigned short result = 0;
	int i;

	for (i = 0; i < (int)sizeof(result); i++) {
		result <<= CHAR_BIT;
		result += (((unsigned char*)&net_number)[i] & UCHAR_MAX);
	}
	return result;
}

unsigned int Endian_native_unsigned_int(unsigned int net_number)
{
	unsigned int result = 0;
	int i;

	for (i = 0; i < (int)sizeof(result); i++) {
		result <<= CHAR_BIT;
		result += (((unsigned char*)&net_number)[i] & UCHAR_MAX);
	}
	return result;
}

unsigned long Endian_native_unsigned_long(unsigned long net_number)
{
	unsigned long result = 0;
	int i;

	for (i = 0; i < (int)sizeof(result); i++) {
		result <<= CHAR_BIT;
		result += (((unsigned char*)&net_number)[i] & UCHAR_MAX);
	}
	return result;
}

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

unsigned long long Endian_native_unsigned_long_long(unsigned long long net_number)
{
	unsigned long long result = 0;
	int i;

	for (i = 0; i < (int)sizeof(result); i++) {
		result <<= CHAR_BIT;
		result += (((unsigned char*)&net_number)[i] & UCHAR_MAX);
	}
	return result;
}

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */

#if defined(__clang__)
#pragma clang unsafe_buffer_usage end
#endif /* defined(__clang__) */
