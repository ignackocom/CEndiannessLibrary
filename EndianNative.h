/******************************************************************************
* \file      EndianNative.h
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

#ifndef ENDIANNATIVE_H
#define ENDIANNATIVE_H		20250318L


#ifdef __cplusplus
extern "C" {
#endif

	unsigned short Endian_native_unsigned_short(unsigned short net_number);

	unsigned int Endian_native_unsigned_int(unsigned int net_number);

	unsigned long Endian_native_unsigned_long(unsigned long net_number);

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

	unsigned long long Endian_native_unsigned_long_long(unsigned long long net_number);

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */


#ifdef __cplusplus
}
#endif


#endif /* ENDIANNATIVE_H */
