///*
// * main.c
// *
// *  Created on: Sep 26, 2021
// *      Author: youss
// */
//
//#include <stdio.h>
//int main()
//{
//	unsigned char operator ;
//	float operand1 , operand2;
//	printf("Enter operator either + or - or  * or divide:");
//	fflush (stdin);fflush(stdout);
//	scanf("%c",&operator);
//
//	printf("Enter Two Operands:");
//	fflush (stdin);fflush(stdout);
//	scanf("%f %f",&operand1,&operand2);
//
//	// calculator using switch
//	switch(operator)
//	{
//	case '+':
//	{
//		float result = operand1 + operand2;
//		printf("%f %c %f = %f",operand1,operator,operand2,result);
//	}
//	break;
//	case '-':
//	{
//		float result = operand1 - operand2;
//		printf("%f %c %f = %f",operand1,operator,operand2,result);
//	}
//	break;
//	case '*':
//	{
//		float result = operand1 * operand2;
//		printf("%f %c %f = %f",operand1,operator,operand2,result);
//	}
//	break;
//	case '/':
//	{
//		float result = operand1 / operand2;
//		printf("%f %c %f = %f",operand1,operator,operand2,result);
//	}
//	break;
//	default:
//	{
//		printf("Error !!! Wrong operator");
//	}
//	break;
//	}
//
//	return 0;
//}
