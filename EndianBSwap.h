/******************************************************************************
* \file      EndianBSwap.h
* \version   2025.03.18
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Endian byte swap macros
* \details
*
* \see       https://en.wikipedia.org/wiki/Endianness
*			 https://github.com/cpredef/predef
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef ENDIANBSWAP_H
#define ENDIANBSWAP_H		20250318L


#define BSWAP16(x) 					((((x) & 0x00FFU) << 8) | \
									 (((x) & 0xFF00U) >> 8))

#define BSWAP32(x) 					((((x) & 0x000000FFUL) << 24) | \
									 (((x) & 0x0000FF00UL) <<  8) | \
									 (((x) & 0x00FF0000UL) >>  8) | \
									 (((x) & 0xFF000000UL) >> 24))

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

#define BSWAP64(x) 					((((x) & 0x00000000000000FFULL) << 56) | \
									 (((x) & 0x000000000000FF00ULL) << 40) | \
									 (((x) & 0x0000000000FF0000ULL) << 24) | \
									 (((x) & 0x00000000FF000000ULL) <<  8) | \
									 (((x) & 0x000000FF00000000ULL) >>  8) | \
									 (((x) & 0x0000FF0000000000ULL) >> 24) | \
									 (((x) & 0x00FF000000000000ULL) >> 40) | \
								     (((x) & 0xFF00000000000000ULL) >> 56))

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */


#endif /* ENDIANBSWAP_H */
