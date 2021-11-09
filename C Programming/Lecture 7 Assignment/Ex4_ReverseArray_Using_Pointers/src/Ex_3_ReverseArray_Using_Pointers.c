///*
// ============================================================================
// Name        : Ex_3_ReverseArray_Using_Pointers.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
// ============================================================================
// */
//
//#include <stdio.h>
//#include <stdlib.h>
//#define MAX 15
//
//int main(void) {
//	int arr[MAX],num_of_elements,i=0;
//	printf("Input the number of elements to store in the array (max %d):",MAX);
//	fflush(stdout);
//	scanf("%d",&num_of_elements);
//
//	printf("Input %d number of elements in the array :\n",num_of_elements);
//	for(;i<num_of_elements;i++)
//	{
//		printf("element - %d:",i+1);
//		fflush(stdout);
//		scanf("%d",&arr[i]);
//	}
//	printf("\nExpected Output:");
//	int* reverse_ptr = arr+num_of_elements-1;
//
//	for(i=num_of_elements-1 ;i>=0 ;i--)
//	{
//		printf("\nelement - %d:%d",i+1,*reverse_ptr--);
//	}
//
//}
