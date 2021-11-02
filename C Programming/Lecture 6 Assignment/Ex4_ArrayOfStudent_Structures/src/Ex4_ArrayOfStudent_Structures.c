///*
// ============================================================================
// Name        : Ex4_ArrayOfStudent_Structures.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
// ============================================================================
// */
//
//#include <stdio.h>
//#include <stdlib.h>
//#define studentNumber 10
//struct SStudent
//{
//	char name[50];
//	int roll;
//	float marks;
//};
//
//struct SStudent readdata(int);
//struct SStudent readdata(int RollNumber)
//{
//	struct SStudent s;
//	s.roll=RollNumber;
//	printf("for Roll Number %d",RollNumber);
//	printf("\nEnter name: "); fflush(stdout); gets(s.name);
//	printf("Enter marks: "); fflush(stdout); scanf("%f",&s.marks);
//	return s;
//}
//
//void printdata(struct SStudent);
//void printdata(struct SStudent s)
//{
//	printf("Information for roll number %d:\nName: %s\nMarks: %f\n",s.roll,s.name,s.marks);
//}
//
//int main(void) {
//
//	struct SStudent s[studentNumber];
//	int RollNumber=0;
//	while(RollNumber <studentNumber)
//	{
//		fflush(stdin);
//		//read data of each student
//		s[RollNumber]=readdata(RollNumber+1);
//		RollNumber++;
//	}
//	printf("\nDisplaying information of student");
//	int i=0;
//	while(i<studentNumber)
//	{
//		printdata(s[i]);
//		i++;
//	}
//}
