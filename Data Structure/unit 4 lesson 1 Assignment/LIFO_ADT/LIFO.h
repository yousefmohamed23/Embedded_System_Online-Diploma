/*
 * FIFO.h
 *
 *  Created on: Jan 5, 2022
 *      Author: youssef Mohamed Abo el maaty
 */

#ifndef LIFO_H_
#define LIFO_H_
#include "stdint.h"
#include "stdio.h"

//generic stack lifo
#define ELEMENT_TYPE unsigned int

/*------------------------------------------------------------------------------------------------
 [Structure Name] :LIFO_buffer_S
 [Description] : Last in first out structure which includes members that mimic the mechanism of stack data
 structure(LIFO)
 [Members]: Base -> Pointer to the base of stack
 	 	 	head -> top Pointer to available place in stack for insertion and deletion
 	 	 	Count -> Counter that counts element in stack
 	 	 	Capacity -> size of stack
 -----------------------------------------------------------------------------------------------*/

typedef struct {
	ELEMENT_TYPE* base;
	ELEMENT_TYPE* head;
	unsigned int count;
	unsigned int capacity;

}LIFO_buffer_S;

/*-----------------------------------------------------------------------------------------------
[Enumeration Name]: LIFO_bufffer_status
[Enumeration Description]: Describe different status of stack
-------------------------------------------------------------------------------------------------*/
typedef enum {
	LIFO_IS_NULL,
	LIFO_IS_FULL,
	LIFO_IS_EMPTY,
	LIFO_NO_ERROR,
	LIFO_NOT_FULL,
	LIFO_NOT_EMPTY
}LIFO_bufffer_status;


//APIs
/*------------------------------------------------------------------------------------------------
 [Function Name] :	LIFO_init
 [Description] :	initialize stack in memory by connect LIFO_buffer_S with Buffer Container
 [Args] : LIFO_buffer_S *lifo -> pointer to structure of stack members
 	 	 ELEMENT_TYPE *container -> stack container for data
 	 	 ELEMENT_TYPE capacity -> size of container

 [in]:	LIFO_buffer_S *lifo , ELEMENT_TYPE *container , ELEMENT_TYPE capacity

 [Return]: <- Status= NO ERROR -> means the initialized stack is done
 	 	 <-STATUS = NULL-> 	if  LIFO_buffer_S *lifo  structure or  ELEMENT_TYPE *container or no existed in memory
 	 	 or ELEMENT_TYPE capacity =0
 -----------------------------------------------------------------------------------------------*/

LIFO_bufffer_status LIFO_init(LIFO_buffer_S *lifo , ELEMENT_TYPE *container , ELEMENT_TYPE capacity);


/*------------------------------------------------------------------------------------------------
 [Function Name] :LIFO_push
 [Description] : Add element to the top of stack buffer
 [Args] : LIFO_buffer_S *lifo -> pointer to structure of stack members ,
 	 	 ELEMENT_TYPE item -> item to be added

 [Return]: Add item and return status = (NO ERROR )
 OR <-"Status" = Lifo_full-> if no place in stack
 OR <-"status" = LIFO_NULL-> LIFO_buffer_S *lifo structure no existed in memory
 -----------------------------------------------------------------------------------------------*/
LIFO_bufffer_status LIFO_push (LIFO_buffer_S* lifo , ELEMENT_TYPE item);



/*------------------------------------------------------------------------------------------------
 [Function Name] :LIFO_pop
 [Description] : get element to the top of stack buffer
 [Args] : LIFO_buffer_S *lifo -> pointer to structure of stack members ,
 	 	 ELEMENT_TYPE* returned_item -> item to be popped

 [Return]: get item and return status = (NO ERROR )
 OR <-"Status" = Lifo_Empty-> if stack is empty
 OR <-"status" = LIFO_NULL-> LIFO_buffer_S *lifo structure no existed in memory
 -----------------------------------------------------------------------------------------------*/


LIFO_bufffer_status LIFO_pop (LIFO_buffer_S* lifo , ELEMENT_TYPE * returned_item);
/*------------------------------------------------------------------------------------------------
 [Function Name] :LIFO_is_full
 [Description] :Check is lifo capacity is full or not
 [Args] :LIFO_buffer_S *lifo -> pointer to structure of stack members ,

 [Return]:  <-"Status" = Lifo_full-> if no place in stack
   	   	   	<-"Status" = Lifo_Not_full-> if there is a place in stack
 -----------------------------------------------------------------------------------------------*/


LIFO_bufffer_status LIFO_is_full (LIFO_buffer_S* lifo);


/*------------------------------------------------------------------------------------------------
 [Function Name] :LIFO_is_empty
 [Description] :Check is lifo capacity is empty or not
 [Args] :LIFO_buffer_S *lifo -> pointer to structure of stack members ,

 [Return]:  <-"Status" = Lifo_empty-> if stack is empty
   	   	   	<-"Status" = Lifo_Not_empty -> if stack is not empty
 -----------------------------------------------------------------------------------------------*/
LIFO_bufffer_status LIFO_is_empty (LIFO_buffer_S* lifo);

#endif /* LIFO_H_ */
