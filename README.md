# CEndianness
C Endian detection code

Example of use

```
if (IS_BIG_ENDIAN())                printf("Big endian\n");
else if (IS_LITTLE_ENDIAN())        printf("Little endian\n");
else if (IS_BIG_WORD_ENDIAN())      printf("Big word endian\n");
else if (IS_LITTLE_WORD_ENDIAN())   printf("Little word endian\n");
else                                printf("unknown endian\n");
```

NOTE: 
it is not fully tested, 
because it is quite impossible to test all combinations, 
you can make a copy of the source codes and change the code as needed
