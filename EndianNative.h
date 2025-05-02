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

	unsigned short ENDIAN_Native_unsigned_short(unsigned short net_number);

	unsigned int ENDIAN_Native_unsigned_int(unsigned int net_number);

	unsigned long ENDIAN_Native_unsigned_long(unsigned long net_number);

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

	unsigned long long ENDIAN_Native_unsigned_long_long(unsigned long long net_number);

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */



	UINT16 ENDIAN_Native_UINT16(UINT16 net_number);

	UINT32 ENDIAN_Native_UINT32(UINT32 net_number);

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

	UINT64 ENDIAN_Native_UINT64(UINT64 net_number);

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */


#ifdef __cplusplus
}
#endif


#endif /* ENDIANNATIVE_H */
