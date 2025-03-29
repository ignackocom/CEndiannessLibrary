/******************************************************************************
* \file      CEndianness.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Endian detection code, C89, C99 and higher compatible
* \details
*
* \see       https://github.com/cpredef/predef
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef CENDIANNESS_H
#define CENDIANNESS_H		20250318L



typedef enum {
	ENDIAN_UNKNOWN,		/* Unknown-endian */
	ENDIAN_BIG,			/* Big-endian */
	ENDIAN_LITTLE,		/* Little-endian */
	ENDIAN_BIG_WORD,	/* Middle-endian, Honeywell 316 style */
	ENDIAN_LITTLE_WORD	/* Middle-endian, PDP-11 style */
} T_ENDIAN;



#ifdef __cplusplus
extern "C" {
#endif

	/******************************************************************************
	* \brief
	*	Endianness detection function.
	*
	* \return
	*	The return value is endian type.
	*	(ENDIAN_UNKNOWN, ENDIAN_BIG, ENDIAN_LITTLE, ENDIAN_BIG_WORD, ENDIAN_LITTLE_WORD)
	*
	*/
	T_ENDIAN Endian(void);

#ifdef __cplusplus
}
#endif



/******************************************************************************
* \brief
*	Check if endian is BIG_ENDIAN.
*
* \return
*	Returns true or false.
*
*/
#define IS_BIG_ENDIAN()				((Endian()==ENDIAN_BIG)?1:0)

/******************************************************************************
* \brief
*	Check if endian is LITTLE_ENDIAN.
*
* \return
*	Returns true or false.
*
*/
#define IS_LITTLE_ENDIAN()			((Endian()==ENDIAN_LITTLE)?1:0)

/******************************************************************************
* \brief
*	Check if endian is BIG_WORD_ENDIAN.
*
* \return
*	Returns true or false.
*
*/
#define IS_BIG_WORD_ENDIAN()		((Endian()==ENDIAN_BIG_WORD)?1:0)

/******************************************************************************
* \brief
*	Check if endian is LITTLE_WORD_ENDIAN.
*
* \return
*	Returns true or false.
*
*/
#define IS_LITTLE_WORD_ENDIAN()		((Endian()==ENDIAN_LITTLE_WORD)?1:0)



/******************************************************************************
* Example of use
*
* ...
* if (IS_BIG_ENDIAN())                printf("Big endian\n");
* else if (IS_LITTLE_ENDIAN())        printf("Little endian\n");
* else if (IS_BIG_WORD_ENDIAN())      printf("Big word endian\n");
* else if (IS_LITTLE_WORD_ENDIAN())   printf("Little word endian\n");
* else                                printf("unknown endian\n");
* ...
*
*/ 


/******************************************************************************
* Version
*/
#ifdef __cplusplus
extern "C" {
#endif

	long CENDIANNESS_VERSION(void);

#ifdef __cplusplus
}
#endif


#endif /* CENDIANNESS_H */
