///*
// * main.c
// *
// *  Created on: Oct 11, 2021
// *      Author: youss
// */
//
//
//#include <stdio.h>
//int main()
//{
//
//	unsigned int matrix[10][10],transpose[10][10],Num_of_row,Num_of_col,i=0,j=0;
//
//	printf("Enter Num_of_rows and Num_of_columns of matrix");
//	fflush(stdout);
//	scanf("%d %d",&Num_of_row,&Num_of_col);
//
//	printf("Enter Elements of matrix\n");
//	for(i=0 ; i<Num_of_row ; i++)
//	{
//		for(j = 0 ; j<Num_of_col ;j++)
//		{
//			printf("Enter Matrix_1[%d][%d]:",i+1,j+1);
//			fflush(stdout);
//			scanf("%d",&matrix[i][j]);
//		}
//	}
//	printf("Entered Matrix:\n");
//	for(i=0 ; i<Num_of_row ; i++)
//	{
//		for(j = 0 ; j<Num_of_col ;j++)
//		{
//			printf("%d	",matrix[i][j]);
//		}
//		printf("\n");
//	}
//
//	int trans_Num_of_col=Num_of_row , trans_Num_of_row=Num_of_col;
//
//	//get transpose
//	for(i=0 ; i<trans_Num_of_row;i++)
//	{
//		for(j=0; j<trans_Num_of_col;j++)
//		{
//			transpose[i][j]=matrix[j][i];
//		}
//	}
//	printf("Transposed Matrix:\n");
//	for(i=0 ; i<trans_Num_of_row ; i++)
//	{
//		for(j = 0 ; j<trans_Num_of_col ;j++)
//		{
//			printf("%d	",transpose[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
