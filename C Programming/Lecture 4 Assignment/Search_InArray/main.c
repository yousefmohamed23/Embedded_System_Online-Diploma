///*
// * main.c
// *
// *  Created on: Oct 12, 2021
// *      Author: youss
// */
//#include <stdio.h>
//#define array_size  100
//
//int linearSearch(int arr[] , int size,int searched_element )
//{
//	int i=0;
//	for(i = 0 ; i < size ; i++)
//	{
//		if(arr[i] == searched_element) return i+1;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[array_size],Number_of_elements , searched_element;
//
//	printf("Enter Number of elements: ");
//	fflush(stdout);
//	scanf("%d",&Number_of_elements);
//
//	if(Number_of_elements > array_size) printf("Error!!, Max number of elements = %d ",array_size);
//
//	else
//	{
//		int i=0;
//		//fill array
//		fflush(stdin);
//		for(i=0;i<Number_of_elements;i++)
//		{
//			scanf("%d",&arr[i]);
//		}
//		//print array
//
//		printf("\nfilled Array : ");
//		for(i=0;i<Number_of_elements;i++)
//		{
//			printf("%d	",arr[i]);
//		}
//		// get searching element
//		printf("\nEnter the element to be searched : ");
//		fflush(stdout);
//		scanf("%d",&searched_element);
//
//		int location = linearSearch(arr,Number_of_elements,searched_element);
//		if(location >=0) printf("Number found at location = %d",location);
//		else printf("number not found in array");
//	}
//}
//
//
