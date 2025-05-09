# CEndiannessLibrary
C Endian Library detection code.<br/>
C89, C99 and >C99 compatible.

Example of use

```c
#include <stdio.h>

#if defined(__TURBOC__)
#include <conio.h>
#endif /* defined(__TURBOC__) */


#ifdef _MSC_VER
#pragma warning(disable:4464)
#endif /* _MSC_VER */

#include "../CEndianness/CEndianness.h"

#ifdef _MSC_VER
#pragma warning(default:4464)
#endif /* _MSC_VER */


int main(void)
{
    T_ENDIAN endian;

#if defined(__TURBOC__)
    clrscr();
#endif /* defined(__TURBOC__) */

    printf("Endian test\n");

    printf("Endianness version %ld\n", CENDIANNESS_VERSION());
    printf("\n");

    endian = Endian();
    if (ENDIAN_BIG == endian)               printf("Endian = BIG\n");
    else if (ENDIAN_LITTLE == endian)       printf("Endian = LITTLE\n");
    else if (ENDIAN_BIG_WORD == endian)     printf("Endian = BIG_WORD\n");
    else if (ENDIAN_LITTLE_WORD == endian)  printf("Endian = LITTLE_WORD\n");
    else                                    printf("Endian = UNKNOWN\n");
    printf("\n");

    printf("IS_BIG_ENDIAN()            = %d\n", IS_BIG_ENDIAN());
    printf("IS_LITTLE_ENDIAN()         = %d\n", IS_LITTLE_ENDIAN());
    printf("IS_BIG_WORD_ENDIAN()       = %d\n", IS_BIG_WORD_ENDIAN());
    printf("IS_LITTLE_WORD_ENDIAN()    = %d\n", IS_LITTLE_WORD_ENDIAN());
    printf("\n");

    printf("BSWAP16 0x0123             = %04X\n", BSWAP16(0x0123));
    printf("BSWAP32 0x01234567         = %08lX\n", BSWAP32(0x01234567L));
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    printf("BSWAP64 0x0123456789ABCDEF = %016llX\n", BSWAP64(0x0123456789ABCDEFULL));
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */
    printf("\n");

    printf("ENDIAN Native unsigned short     %04X\n", ENDIAN_Native_unsigned_short(0x0123U));
    printf("ENDIAN Native unsigned int       %08lX\n", ENDIAN_Native_unsigned_int(0x01234567U));
    printf("ENDIAN Native unsigned long      %08lX\n", ENDIAN_Native_unsigned_long(0x01234567UL));
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    printf("ENDIAN Native unsigned long long %016llX\n", ENDIAN_Native_unsigned_long_long(0x0123456789ABCDEFULL));
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */
    printf("\n");

    printf("ENDIAN Native UINT16 %04X\n", ENDIAN_Native_UINT16(0x0123U));
    printf("ENDIAN Native UINT32 %08lX\n", ENDIAN_Native_UINT32(0x01234567U));
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L
    printf("ENDIAN Native UINT64 %016llX\n", ENDIAN_Native_UINT64(0x0123456789ABCDEFULL));
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */
    printf("\n");

    printf("ENDIAN Net unsigned short     %04X\n", ENDIAN_Net_unsigned_short(0x0123U));
    printf("ENDIAN Net unsigned int       %08lX\n", ENDIAN_Net_unsigned_int(0x01234567U));
    printf("ENDIAN Net unsigned long      %08lX\n", ENDIAN_Net_unsigned_long(0x01234567UL));
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    printf("ENDIAN Net unsigned long long %016llX\n", ENDIAN_Net_unsigned_long_long(0x0123456789ABCDEFULL));
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */
    printf("\n");

    printf("ENDIAN Net UINT16 %04X\n", ENDIAN_Net_UINT16(0x0123U));
    printf("ENDIAN Net UINT32 %08lX\n", ENDIAN_Net_UINT32(0x01234567U));
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L
    printf("ENDIAN Net UINT64 %016llX\n", ENDIAN_Net_UINT64(0x0123456789ABCDEFULL));
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */
    printf("\n");

#if defined(__TURBOC__)
    getch();
#endif /* defined(__TURBOC__) */

    return(0);
}
```

NOTE: 
it is not fully tested, 
because it is quite impossible to test all combinations, 
you can make a copy of the source codes and change the code as needed


# History of changes ...
2025 03 30 byte swap macros added <br/>
2025 03 30 endian native code added <br/>
2025 03 30 endian net code added <br/>
2025 05 02 extended by UINT16, UINT32, UINT64<br/>
2025 05 09 repository renamed to CEndiannessLibrary<br/>
