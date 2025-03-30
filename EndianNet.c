/******************************************************************************
* \file      EndianNet.c
* \version   2025.03.18
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Endian net api
* \details
*
* \see       https://en.wikipedia.org/wiki/Endianness
*			 https://github.com/cpredef/predef
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#include <limits.h>

#include "EndianNet.h"


#if defined(__clang__)
#pragma clang unsafe_buffer_usage begin
#endif /* defined(__clang__) */


unsigned short Endian_net_unsigned_short(unsigned short native_number)
{
	unsigned short result = 0;
	int i;

	for (i = (int)sizeof(result) - 1; i >= 0; i--) {
		((unsigned char*)&result)[i] = native_number & UCHAR_MAX;
		native_number >>= CHAR_BIT;
	}
	return result;
}

unsigned int Endian_net_unsigned_int(unsigned int native_number)
{
	unsigned int result = 0;
	int i;

	for (i = (int)sizeof(result) - 1; i >= 0; i--) {
		((unsigned char*)&result)[i] = native_number & UCHAR_MAX;
		native_number >>= CHAR_BIT;
	}
	return result;
}

unsigned long Endian_net_unsigned_long(unsigned long native_number)
{
	unsigned long result = 0;
	int i;

	for (i = (int)sizeof(result) - 1; i >= 0; i--) {
		((unsigned char*)&result)[i] = native_number & UCHAR_MAX;
		native_number >>= CHAR_BIT;
	}
	return result;
}

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

unsigned long long Endian_net_unsigned_long_long(unsigned long long native_number)
{
	unsigned long long result = 0;
	int i;

	for (i = (int)sizeof(result) - 1; i >= 0; i--) {
		((unsigned char*)&result)[i] = native_number & UCHAR_MAX;
		native_number >>= CHAR_BIT;
	}
	return result;
}

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */

#if defined(__clang__)
#pragma clang unsafe_buffer_usage end
#endif /* defined(__clang__) */
