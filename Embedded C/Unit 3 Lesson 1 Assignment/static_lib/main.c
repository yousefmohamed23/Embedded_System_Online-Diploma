#include <stdio.h>
#include "uart.h"
int main()
{
	uart_init();
}




// int main()
// {
// 	clock_t t;
// 	t=clock();
// 	int num1,num2,sum;
// 	printf("enter first number ");
// 	num1=5;
// 	printf("enter second number ");
// 	num2=6;
// 	sum=num1+num2;
// 	t=clock()-t;
// 	double time_in_sec=(double) t/CLOCKS_PER_SEC;
// 	printf("time in sec %lf",time_in_sec);
// }