/*
 * Platform_Types.h
 *
 *  Created on: Nov 22, 2021
 *      Author: youss
 */
/*
 * integer types -> char , short , int  ,long long (signed , unsigned)
 * real types -> float double long double (signed and unsigned)
 * boolean
 * volatile types
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_
/*CPU CONFIG */
#define CPU_TYPE	 	CPU_TYPES_32
#define CPU_BIT_ORDER	MSB_FIRST
#define CPU_BYTE_ORDER	HIGH_BYTE_ORDER

// integer types(unsigned ,signed )
typedef unsigned char uint_8;
typedef signed char sint_8;

typedef unsigned short uint_16;
typedef signed short sint_16;

typedef unsigned int uint_32;
typedef signed int sint_32;

typedef unsigned long long uint_64;
typedef signed long long sint_64;

//real types
typedef float float_32;
typedef double float_64;
typedef long double float_80;

//volatile data types(unsigned , signed)
typedef volatile uint_8 vuint_8;
typedef volatile sint_8 vsint_8;

typedef volatile uint_16 vuint_16;
typedef volatile sint_16 vsint_16;

typedef volatile uint_32 vuint_32;
typedef volatile sint_32 vsint_32;

typedef volatile uint_64 vuint_64;
typedef volatile sint_64 vsint_64;

//boolean
typedef unsigned char boolean;
#ifndef TRUE
#define TRUE (boolean) 1
#endif

#ifndef FALSE
#define FALSE (boolean) 0
#endif



#endif /* PLATFORM_TYPES_H_ */
