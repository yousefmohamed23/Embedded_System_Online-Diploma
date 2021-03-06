/*
 * main.c
 *
 *  Created on: Jan 5, 2022
 *      Author: youss
 */

#include "FIFO.h"
#define BUFFER_SIZE 5

int main()
{
	ELEMENT_TYPE i = 0 , temp = 0;
	FIFO_buffer_S fifo;
	ELEMENT_TYPE buffer_container[BUFFER_SIZE];
	//init buffer
	if(FIFO_init(&fifo , buffer_container,BUFFER_SIZE) == FIFO_NO_ERROR)
	{

			DPRINTF("Fifo is Ready ......\n");

			for(i=0 ; i<7 ; i++)
			{
				unsigned int FIFO_STATUS = FIFO_enqueue(&fifo,i);

				switch(FIFO_STATUS)
				{
				case FIFO_NO_ERROR:
					DPRINTF("Enqueue value = %x is done \n",i);
					break;
				case FIFO_IS_FULL:
					DPRINTF("Fifo is full \n");
					break;
				case FIFO_IS_NULL:
					DPRINTF("Fifo is not existed\n");
					break;
				}
			}
			FIFO_print(&fifo);
			for(i=0 ; i<2 ; i++)
			{
				unsigned int FIFO_STATUS =FIFO_dequeue(&fifo,&temp) ;
				switch(FIFO_STATUS)
				{
				case FIFO_NO_ERROR:
					DPRINTF("Dequeue value = %x is done\n",temp);
					break;
				case FIFO_IS_EMPTY:
					DPRINTF("fifo is Empty\n");
					break;
				case FIFO_IS_NULL:
					DPRINTF("fifo is not existed\n");
					break;
				}
			}
			FIFO_print(&fifo);

		for(i=0 ; i<2 ; i++)
		{
			unsigned int FIFO_STATUS = FIFO_enqueue(&fifo,i);

			switch(FIFO_STATUS)
			{
			case FIFO_NO_ERROR:
				DPRINTF("Enqueue value = %x is done \n",i);
				break;
			case FIFO_IS_FULL:
				DPRINTF("Fifo is full \n");
				break;
			case FIFO_IS_NULL:
				DPRINTF("Fifo is not existed\n");
				break;
			}
		}
	FIFO_print(&fifo);
	}
	else
	{
		DPRINTF("fifo is not ready\n");
	}
}
