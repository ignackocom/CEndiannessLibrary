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

#include <stddef.h>
#include <limits.h>

#include "Datatype.h"
#include "EndianNet.h"


#if defined(__clang__)
#pragma clang unsafe_buffer_usage begin
#endif /* defined(__clang__) */


unsigned short ENDIAN_Net_unsigned_short(unsigned short native_number)
{
	size_t i;
	unsigned short result;

	result = 0;

	for (i = sizeof(result); i > 0; i--) {
		((unsigned char*)&result)[i-1] = native_number & UCHAR_MAX;
		native_number >>= CHAR_BIT;
	}
	return result;
}

unsigned int ENDIAN_Net_unsigned_int(unsigned int native_number)
{
	size_t i;
	unsigned int result;

	result = 0;

	for (i = sizeof(result); i > 0; i--) {
		((unsigned char*)&result)[i-1] = native_number & UCHAR_MAX;
		native_number >>= CHAR_BIT;
	}
	return result;
}

unsigned long ENDIAN_Net_unsigned_long(unsigned long native_number)
{
	size_t i;
	unsigned long result;

	result = 0;

	for (i = sizeof(result); i > 0; i--) {
		((unsigned char*)&result)[i-1] = native_number & UCHAR_MAX;
		native_number >>= CHAR_BIT;
	}
	return result;
}

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

unsigned long long ENDIAN_Net_unsigned_long_long(unsigned long long native_number)
{
	size_t i;
	unsigned long long result;

	result = 0;

	for (i = sizeof(result); i > 0; i--) {
		((unsigned char*)&result)[i-1] = native_number & UCHAR_MAX;
		native_number >>= CHAR_BIT;
	}
	return result;
}

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */



UINT16 ENDIAN_Net_UINT16(UINT16 native_number)
{
	size_t i;
	UINT16 result;

	result = 0;

	for (i = sizeof(result); i > 0; i--) {
		((unsigned char*)&result)[i - 1] = native_number & UCHAR_MAX;
		native_number >>= CHAR_BIT;
	}
	return result;
}

UINT32 ENDIAN_Net_UINT32(UINT32 native_number)
{
	size_t i;
	UINT32 result;

	result = 0;

	for (i = sizeof(result); i > 0; i--) {
		((unsigned char*)&result)[i - 1] = native_number & UCHAR_MAX;
		native_number >>= CHAR_BIT;
	}
	return result;
}

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

UINT64 ENDIAN_Net_UINT64(UINT64 native_number)
{
	size_t i;
	UINT64 result;

	result = 0;

	for (i = sizeof(result); i > 0; i--) {
		((unsigned char*)&result)[i - 1] = native_number & UCHAR_MAX;
		native_number >>= CHAR_BIT;
	}
	return result;
}

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */


#if defined(__clang__)
#pragma clang unsafe_buffer_usage end
#endif /* defined(__clang__) */
