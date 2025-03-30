# CEndianness
C Endian detection code

Example of use

```
int main(void)
{
    T_ENDIAN endian;

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

    printf("Endian native short     %04X\n", Endian_native_unsigned_short(0x0123U));
    printf("Endian native int       %08X\n", Endian_native_unsigned_int(0x01234567U));
    printf("Endian native long      %08lX\n", Endian_native_unsigned_long(0x01234567UL));
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    printf("Endian native long long %016llX\n", Endian_native_unsigned_long_long(0x0123456789ABCDEFULL));
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */
    printf("\n");

    printf("Endian net    short     %04X\n", Endian_net_unsigned_short(0x0123U));
    printf("Endian net    int       %08X\n", Endian_net_unsigned_int(0x01234567U));
    printf("Endian net    long      %08lX\n", Endian_net_unsigned_long(0x01234567UL));
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    printf("Endian net    long long %016llX\n", Endian_net_unsigned_long_long(0x0123456789ABCDEFULL));
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L */
    printf("\n");

    return(0);
}
```

NOTE: 
it is not fully tested, 
because it is quite impossible to test all combinations, 
you can make a copy of the source codes and change the code as needed


# History of changes ...
2025 03 30 byte swap macros added
2025 03 30 endian native code added
2025 03 30 endian net code added
