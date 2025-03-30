/******************************************************************************
* \file      CEndianness.c
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

#include "CEndianness.h"


long CENDIANNESS_VERSION(void)
{
	return (CENDIANNESS_H);
}
