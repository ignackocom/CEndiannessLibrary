/******************************************************************************
* \file      EndianNet.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Endian net api
* \details
*
* \see       https://github.com/ignackocom
*			 https://en.wikipedia.org/wiki/Endianness
*			 https://github.com/cpredef/predef
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef ENDIANNET_H
#define ENDIANNET_H		20250318L


#ifdef __cplusplus
extern "C" {
#endif


	unsigned short ENDIAN_Net_unsigned_short(unsigned short native_number);

	unsigned int ENDIAN_Net_unsigned_int(unsigned int native_number);

	unsigned long ENDIAN_Net_unsigned_long(unsigned long native_number);

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

	unsigned long long ENDIAN_Net_unsigned_long_long(unsigned long long native_number);

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */



	UINT16 ENDIAN_Net_UINT16(UINT16 native_number);

	UINT32 ENDIAN_Net_UINT32(UINT32 native_number);

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

	UINT64 ENDIAN_Net_UINT64(UINT64 native_number);

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */


#ifdef __cplusplus
}
#endif


#endif /* ENDIANNET_H */
