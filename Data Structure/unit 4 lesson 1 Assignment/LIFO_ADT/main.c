/*
 * main.c
 *
 *  Created on: Jan 5, 2022
 *      Author: youssef Mohamed Abo el maaty
 */
#include "LIFO.h"
#define BUFFER_SIZE 5
int main()
{
	ELEMENT_TYPE i = 0 , temp = 0;
	LIFO_buffer_S lifo;
	ELEMENT_TYPE buffer_container[BUFFER_SIZE];
	//init buffer
	if(LIFO_init(&lifo , buffer_container,BUFFER_SIZE) == LIFO_NO_ERROR)
	{
		printf("Lifo is Ready ......\n");
		for(i=0 ; i<7 ; i++)
		{
			unsigned int LIFO_STATUS = LIFO_push(&lifo,i);
			switch(LIFO_STATUS)
			{
				case LIFO_NO_ERROR:
					printf("Push value = %x is done \n",i);
					break;
				case LIFO_IS_FULL:
					printf("Lifo is full \n");
					break;
				case LIFO_IS_NULL:
					printf("lifo is not existed\n");
					break;
			}
		}
		for(i=0 ; i<7 ; i++)
			{
				unsigned int LIFO_STATUS =LIFO_pop(&lifo,&temp) ;
				switch(LIFO_STATUS)
				{
					case LIFO_NO_ERROR:
						printf("POP value = %x is done\n",temp);
						break;
					case LIFO_IS_EMPTY:
						printf("Lifo is Empty\n");
						break;
					case LIFO_IS_NULL:
						printf("Lifo is not existed\n");
						break;
				}
			}
	}
	else
	{
		printf("Lifo is not ready\n");
	}
}

