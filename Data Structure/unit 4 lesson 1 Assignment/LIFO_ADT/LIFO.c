/*
 * FIFO.c
 *
 *  Created on: Jan 5, 2022
 *      Author: youss
 */


#include "LIFO.h"


LIFO_bufffer_status LIFO_init(LIFO_buffer_S *lifo , ELEMENT_TYPE *container , ELEMENT_TYPE capacity)
{
	//check if lifo structure and container are existed
	if(lifo == NULL || container == NULL) return LIFO_IS_NULL;

	if(capacity == 0) return LIFO_IS_NULL;

	//init lifo struct
	lifo->base= container;
	lifo->head = container;
	lifo->count=0;
	lifo->capacity = capacity;
	return LIFO_NO_ERROR;
}

LIFO_bufffer_status LIFO_push (LIFO_buffer_S* lifo , ELEMENT_TYPE item){
	if(lifo == NULL || lifo->base == NULL || lifo->head == NULL) return LIFO_IS_NULL;

	//check if lifo is fulL
	if(LIFO_is_full(lifo)== LIFO_IS_FULL) return LIFO_IS_FULL;

	//PUSH ITEM IN LIFO
	lifo->count++;
	*(lifo->head) = item;
	lifo->head++;
	return LIFO_NO_ERROR;

}

LIFO_bufffer_status LIFO_pop (LIFO_buffer_S* lifo , ELEMENT_TYPE * returned_item){
	if(lifo == NULL || lifo->base == NULL || lifo->head == NULL) return LIFO_IS_NULL;

	if(LIFO_is_empty(lifo) == LIFO_IS_EMPTY) return LIFO_IS_EMPTY;

	lifo->count--;
	lifo->head--;
	*(returned_item) = *(lifo->head);
	return LIFO_NO_ERROR;

}

LIFO_bufffer_status  LIFO_is_full (LIFO_buffer_S* lifo){
	if(lifo->count == lifo->capacity) return LIFO_IS_FULL;
	return LIFO_NOT_FULL;
}

LIFO_bufffer_status LIFO_is_empty (LIFO_buffer_S* lifo){
	if(lifo->count==0) return LIFO_IS_EMPTY;
	return LIFO_NOT_EMPTY;
}
