/*
 * FIFO.h
 *
 *  Created on: Jan 5, 2022
 *      Author: youss
 */

#ifndef FIFO_H_
#define FIFO_H_
#include "stdint.h"
#include "stdio.h"

#define DPRINTF(...)   fflush(stdout);\
						fflush(stdin);\
						printf( __VA_ARGS__);\
						fflush(stdout);\
						fflush(stdin)

//generic queue FIFO
#define ELEMENT_TYPE unsigned int

/*------------------------------------------------------------------------------------------------
 [Structure Name] :FIFO_buffer_S
 [Description] : Last in first out structure which includes members that mimic the mechanism of queue data
 structure(FIFO)
 [Members]: Base -> Pointer to the base of queue
 	 	 	head -> top Pointer is used for insertion
 	 	 	tail-> Pointer is used for deletion
 	 	 	Count -> Counter that counts element in queue
 	 	 	Capacity -> size of queue
 -----------------------------------------------------------------------------------------------*/

typedef struct {
	ELEMENT_TYPE* base;
	ELEMENT_TYPE* head;
	ELEMENT_TYPE* tail;
	unsigned int count;
	unsigned int capacity;

}FIFO_buffer_S;

/*-----------------------------------------------------------------------------------------------
[Enumeration Name]: FIFO_bufffer_status
[Enumeration Description]: Describe different status of queue
-------------------------------------------------------------------------------------------------*/
typedef enum {
	FIFO_IS_NULL,
	FIFO_IS_FULL,
	FIFO_IS_EMPTY,
	FIFO_NO_ERROR,
	FIFO_NOT_FULL,
	FIFO_NOT_EMPTY
}FIFO_bufffer_status;


//APIs
/*------------------------------------------------------------------------------------------------
 [Function Name] :	FIFO_init
 [Description] :	initialize queue in memory by connect FIFO_buffer_S with Buffer Container
 [Args] : FIFO_buffer_S *FIFO -> pointer to structure of queue members
 	 	 ELEMENT_TYPE *container -> queue container for data
 	 	 ELEMENT_TYPE capacity -> size of container

 [in]:	FIFO_buffer_S *FIFO , ELEMENT_TYPE *container , ELEMENT_TYPE capacity

 [Return]:
 	 	 <- Status= NO ERROR -> means the initialized queue is done
 	 	 <-STATUS = NULL-> 	if  FIFO_buffer_S *FIFO  structure or  ELEMENT_TYPE *container or no existed in memory
 	 	 or ELEMENT_TYPE capacity =0
 -----------------------------------------------------------------------------------------------*/

FIFO_bufffer_status FIFO_init(FIFO_buffer_S *FIFO , ELEMENT_TYPE *container , ELEMENT_TYPE capacity);


/*------------------------------------------------------------------------------------------------
 [Function Name] :FIFO_enqueue
 [Description] : Add element to the top of queue buffer
 [Args] :
 	 	 FIFO_buffer_S *FIFO -> pointer to structure of queue members ,
 	 	 ELEMENT_TYPE item -> item to be added

 [Return]:
 	 	 Add item and return status = (NO ERROR )
 	 	 OR <-"Status" = FIFO_full-> if no place in queue
 	 	 OR <-"status" = FIFO_NULL-> FIFO_buffer_S *FIFO structure no existed in memory
 -----------------------------------------------------------------------------------------------*/
FIFO_bufffer_status FIFO_enqueue (FIFO_buffer_S* fifo , ELEMENT_TYPE item);



/*------------------------------------------------------------------------------------------------
 [Function Name] :FIFO_dequeue
 [Description] : get element "first in" from the  queue buffer
 [Args] :
 	 	 FIFO_buffer_S *FIFO -> pointer to structure of queue members ,
 	 	 ELEMENT_TYPE* returned_item -> item to be popped

 [Return]:
 	 	 get item and return status = (NO ERROR )
 	 	 OR <-"Status" = FIFO_Empty-> if queue is empty
 	 	 OR <-"status" = FIFO_NULL-> FIFO_buffer_S *FIFO structure no existed in memory
 -----------------------------------------------------------------------------------------------*/


FIFO_bufffer_status FIFO_dequeue (FIFO_buffer_S* fifo , ELEMENT_TYPE * returned_item);
/*------------------------------------------------------------------------------------------------
 [Function Name] :FIFO_is_full
 [Description] :Check is FIFO capacity is full or not
 [Args] :FIFO_buffer_S *FIFO -> pointer to structure of queue members ,

 [Return]:  <-"Status" = FIFO_full-> if no place in queue
   	   	   	<-"Status" = FIFO_Not_full-> if there is a place in queue
 -----------------------------------------------------------------------------------------------*/


FIFO_bufffer_status FIFO_is_full (FIFO_buffer_S* fifo);


/*------------------------------------------------------------------------------------------------
 [Function Name] :FIFO_is_empty
 [Description] :Check is FIFO capacity is empty or not
 [Args] :FIFO_buffer_S *FIFO -> pointer to structure of queue members ,

 [Return]:  <-"Status" = FIFO_empty-> if queue is empty
   	   	   	<-"Status" = FIFO_Not_empty -> if queue is not empty
 -----------------------------------------------------------------------------------------------*/
FIFO_bufffer_status FIFO_is_empty (FIFO_buffer_S* fifo);

/*------------------------------------------------------------------------------------------------
 [Function Name] :FIFO_print
 [Description] :Print FIFO buffer data
 [Args] :FIFO_buffer_S *FIFO -> pointer to structure of queue members ,

 [Return]:void
 -----------------------------------------------------------------------------------------------*/

void FIFO_print(FIFO_buffer_S* fifo);
#endif /* FIFO_H_ */



