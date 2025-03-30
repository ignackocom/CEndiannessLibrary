/******************************************************************************
* \file      CEndianness.h
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

#ifndef CENDIANNESS_H
#define CENDIANNESS_H		20250318L


/* All includes. */
#include "Endian.h"
#include "EndianBSwap.h"
#include "EndianNative.h"
#include "EndianNet.h"


/* Version */
#ifdef __cplusplus
extern "C" {
#endif

	long CENDIANNESS_VERSION(void);

#ifdef __cplusplus
}
#endif


#endif /* CENDIANNESS_H */
