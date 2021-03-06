/*
 * FIFO.c
 *
 *  Created on: Jan 5, 2022
 *      Author: youss
 */
#include "FIFO.h"


FIFO_bufffer_status FIFO_init(FIFO_buffer_S *fifo , ELEMENT_TYPE *container , ELEMENT_TYPE capacity){

	// check Fifo struct or container is  exist

	if(fifo==NULL || container == NULL) return FIFO_IS_NULL;

	//if(capacity <= 0 ) return FIFO_IS_NULL;

	//initiate fifo
	fifo->base=container;
	fifo->tail=container;
	fifo->head=container;
	fifo->count=0;
	fifo->capacity=capacity;

	return FIFO_NO_ERROR;
}

FIFO_bufffer_status FIFO_dequeue (FIFO_buffer_S* fifo , ELEMENT_TYPE * returned_item)
{
	// check Fifo struct or container is  exist

	if(!fifo || !(fifo->base) || !(fifo->head) || !(fifo->tail)) return FIFO_IS_NULL;

	//check if fifo is empty
	if(FIFO_is_empty(fifo) == FIFO_IS_EMPTY) return FIFO_IS_EMPTY;

	//get element
	fifo->count--;  //decrement count

	*(returned_item)= *(fifo->tail); //get element

	//increment pointer "circular"

	if(fifo->tail == ((fifo->base)+ (sizeof(ELEMENT_TYPE)*fifo->capacity) ) )
		fifo->tail=fifo->base;
	else
		fifo->tail++;
	return FIFO_NO_ERROR;

}
FIFO_bufffer_status FIFO_enqueue (FIFO_buffer_S* fifo , ELEMENT_TYPE item){

	if(!fifo || !(fifo->base) || !(fifo->head) || !(fifo->tail)) return FIFO_IS_NULL;

	//check if fifo is full
	if(FIFO_is_full(fifo) == FIFO_IS_FULL) return FIFO_IS_FULL;

	//add element
	fifo->count++;			//increment count
	*(fifo->head)=item;    // set element

	//circular fifo
	if(fifo->head == ((fifo->base)+ (sizeof(ELEMENT_TYPE)*fifo->capacity) ) )
		fifo->head = fifo->base;
	else fifo->head++;
	return FIFO_NO_ERROR;
}

FIFO_bufffer_status FIFO_is_full (FIFO_buffer_S* fifo){
	if(fifo->count == fifo->capacity) return FIFO_IS_FULL;
	return FIFO_NOT_FULL;
}
FIFO_bufffer_status FIFO_is_empty (FIFO_buffer_S* fifo){
	if(fifo->count == 0 ) return FIFO_IS_EMPTY;
	return FIFO_NOT_EMPTY;
}

void FIFO_print(FIFO_buffer_S* fifo){

	if(FIFO_is_empty(fifo) == FIFO_IS_EMPTY)
	{
		DPRINTF("==== FIFO Buffer is empty ====\n");
		return;
	}
		else {
		ELEMENT_TYPE * temp = fifo->tail;
		int i=0;
		DPRINTF("==== FIFO Buffer Data ====\n");
		for(i=0 ; i<fifo->count ;i++)
		{
			DPRINTF("\t\t %d\n",*(temp));
			if(temp == ((fifo->base) + (fifo->capacity * sizeof(ELEMENT_TYPE) ) ) )
				temp= fifo->base;
			else
				temp++;
		}
	}
}

