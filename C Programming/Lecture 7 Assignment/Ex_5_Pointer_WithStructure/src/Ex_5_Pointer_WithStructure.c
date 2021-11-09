/*
 ============================================================================
 Name        : Ex_5_Pointer_WithStructure.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct employee
{
	char name[50];
	int id;
};
int main(void) {
	struct employee e1={"ahmed",23} , e2={"Alex",1002};
	struct employee *emp1=&e1;
	struct employee *emp2=&e2;
	struct employee * arr[2]={emp1,emp2};
	//print struct content
	for(int i=0 ;i<2;i++)
	{
		printf("Employee Name : %s\n",(*(arr+i))->name);
		printf("Employee Id :%d\n",(*(arr+i))->id);
	}

}
