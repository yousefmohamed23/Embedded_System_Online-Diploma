///*
// ============================================================================
// Name        : FindPrimeNumbers.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
// ============================================================================
// */
//
//#include <stdio.h>
//unsigned char IsPrime(unsigned int num);
//void Get_Range_OfPrimeNumbers(unsigned int start , unsigned int end);
//
//unsigned char IsPrime(unsigned int num)
//{
//	if(num == 1 || num == 0) return 0;
//	int i;
//	for(i=2 ; i<=num/2;i++)
//	{
//		if(num % i == 0)
//			return 0;
//	}
//	return 1;
//
//}
//void Get_Range_OfPrimeNumbers(unsigned int start , unsigned int end)
//{
//	unsigned int i=0;
//	printf("Prime Numbers between %d and %d are : ",start,end);
//	for(i=start+1 ; i<=end ; i++)
//	{
//		unsigned char result = IsPrime(i);
//		if(result == 1) printf("%d ",i);
//	}
//}
//
//int main(void) {
//
//	unsigned int start_num  , last_num;
//	printf("Enter two Numbers(intervals) :");
//	fflush(stdout);
//	scanf("%d %d",&start_num, &last_num);
//	Get_Range_OfPrimeNumbers(start_num,last_num);
//
//}
