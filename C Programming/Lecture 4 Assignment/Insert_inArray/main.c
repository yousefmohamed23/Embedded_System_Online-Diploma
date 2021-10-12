///*
//
// * main.c
// *
// *  Created on: Oct 11, 2021
// *      Author: youss
//*/
//#include <stdio.h>
//#define array_size  100
//
//int main()
//{
//	int arr[array_size],Number_of_elements;
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
//
//		int inserted_number ;unsigned int  location;
//
//		printf("\nEnter the element to be inserted : ");
//		fflush(stdout);
//		scanf("%d",&inserted_number);
//
//		printf("\nEnter the location : ");
//		fflush(stdout);
//
//		scanf("%d",&location);
//		if(location < 0 && location > Number_of_elements)
//		{
//			printf("Location Not available -> should be > 0 && <= %d",Number_of_elements);
//
//		}
//		else{
//				int new_arr[array_size+1];
//				for (i = 0 ; i<Number_of_elements+1 ;i++)
//				{
//					if(i<location-1) new_arr[i]=arr[i];
//					else if(i>location-1) new_arr[i]=arr[i-1];
//					else new_arr[i]=inserted_number;
//				}
//				printf("\nnew Array : ");
//				for(i=0;i<Number_of_elements+1;i++)
//				{
//					printf(" %d	",new_arr[i]);
//				}
//
//		}
//	}
//
//
//}
//
//
