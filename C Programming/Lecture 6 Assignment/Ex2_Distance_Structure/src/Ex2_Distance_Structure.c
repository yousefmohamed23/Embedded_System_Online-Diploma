///*
// ============================================================================
// Name        : Ex2_Distance_Structure.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
// ============================================================================
// */
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct SDistance{
//	int feet;
//	float inch;
//};
//// add function declaration
//struct SDistance Add_Two_Distances(struct SDistance, struct SDistance);
//
//struct SDistance Add_Two_Distances(struct SDistance dis1 , struct SDistance dis2)
//{
//	struct SDistance sum ;
//	// 1 foot  = 12 inch
//	// first add inches
//	sum.inch = dis1.inch+ dis2.inch;
//	sum.feet=dis1.feet + dis2.feet;
//	if(sum.inch >= 12)
//	{
//		sum.feet+=sum.inch/12;
//		sum.inch-=(((int)sum.inch/12)*12);
//	}
//	return sum;
//}
//int main(void) {
//
//	struct SDistance s1,s2,sum;
//	printf("Enter Information of Distance1:\n");
//	printf("Enter feet : "); fflush(stdout); scanf("%d",&s1.feet);
//	printf("Enter inch : "); fflush(stdout); scanf("%f",&s1.inch);
//
//	printf("Enter Information of Distance2:\n");
//	printf("Enter feet : "); fflush(stdout); scanf("%d",&s2.feet);
//	printf("Enter inch : "); fflush(stdout); scanf("%f",&s2.inch);
//
//	sum=Add_Two_Distances(s1,s2);
//	printf("Sum of Distances = %d'%0.2f\"",sum.feet,sum.inch);
//}
