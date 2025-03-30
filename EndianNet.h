/******************************************************************************
* \file      EndianNet.h
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

#ifndef ENDIANNET_H
#define ENDIANNET_H		20250318L


#ifdef __cplusplus
extern "C" {
#endif


	unsigned short Endian_net_unsigned_short(unsigned short native_number);

	unsigned int Endian_net_unsigned_int(unsigned int native_number);

	unsigned long Endian_net_unsigned_long(unsigned long native_number);

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

	unsigned long long Endian_net_unsigned_long_long(unsigned long long native_number);

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */


#ifdef __cplusplus
}
#endif


#endif /* ENDIANNET_H */
