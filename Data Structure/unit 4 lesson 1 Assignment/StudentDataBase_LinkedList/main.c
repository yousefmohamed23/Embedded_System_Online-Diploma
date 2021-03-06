/*
 * main.c
 *
 *  Created on: Jan 6, 2022
 *      Author: youss
 */


// client
#include "studentDB.h"
extern S_Node* g_firststudent;
int main()
{
	DPRINTF("============\n        Choose one of the following options\n============\n");
	int optionNum=0 ;
	do{
		DPRINTF("\n");
		DPRINTF("1- AddStudent\n");
		DPRINTF("2- Delete_Student\n");
		DPRINTF("3- view_Students\n");
		DPRINTF("4- Delete All\n");
		DPRINTF("5- Number_of_Students\n");
		DPRINTF("6- Get_Nth_Student\n");
		DPRINTF("7- Reverse_traverse\n");
		DPRINTF("8- Get_NthFromEnd_Student\n");
		DPRINTF("Enter Option Number :");
		scanf("%d",&optionNum);
		fflush(stdin);
		fflush(stdout);
		S_student s;
		uint32_t id=0;


		switch(optionNum)
		{
		case 1:
			DPRINTF("\n============");
			// get student data from client
			DPRINTF("\nEnter the ID :");
			scanf("%d",&(s.Id));
			DPRINTF("\nEnter Student Full Name :");
			gets(s.name);
			DPRINTF("\nEnter the Height :");
			scanf("%f",&(s.height));
			if(List_Add_Student(&s) == List_no_error)
			{DPRINTF("\nStudent is added");}
			else
			{DPRINTF("\nStudent is not added");}
			DPRINTF("\n============\n");
			break;
		case 2:
			DPRINTF("\n============\n");
			DPRINTF("\nEnter the ID :");
			scanf("%d",&id);
			if(List_Delete_Student(id) == List_no_error)
			{
				DPRINTF("\nStudent with id = %d is deleted\n",id);
			}
			else
			{
				DPRINTF("\nStudent with id = %d is not found in the list \n",id);

			}
			DPRINTF("\n============\n");
			break;
		case 3:
			if(List_View_All()== List_no_error)
			{

			}
			else
			{
				DPRINTF("======\nEmpty List\n======");
			}
			break;
		case 4:
			if(List_Delete_All()==List_no_error)
			{
				DPRINTF("======\nDeletion is done\n ======\n");
			}
			else
			{
				DPRINTF("======\nNo students are existed\n=======\n");
			}
			break;
		case 5:

		{
			unsigned int  len =0;
			DPRINTF("\n============\n");
			if(List_GetLength(&len) ==List_no_error)
			{
				DPRINTF("Number of students = %d\n",len);
			}
			else
			{
				DPRINTF("======\nEmpty List\n======");
			}
			DPRINTF("\n============\n");
		}
		break;
		case 6:
		{
			DPRINTF("\n============\n");
			uint32_t index;
			S_student *s;
			DPRINTF("\nEnter Index :");
			scanf("%d",&index);
			s=List_GetNth_Student(index);
			if(s==NULL)
			{
				DPRINTF("\nWrong Index");
			}
			else
			{
				DPRINTF("Student at index = %d\n",index);
				List_print_Student(s);
			}
			DPRINTF("\n============\n");
		}
		break;
		case 7:
			DPRINTF("\n============");
			List_Reverse_Traverse(g_firststudent);
			DPRINTF("\n============");

			break;
		case 8:
		{
			DPRINTF("\n============\n");
			uint32_t index;
			S_student *s;
			DPRINTF("\nEnter Index from the end :");
			scanf("%d",&index);
			s=List_GetNthFromEnd_Student(index);
			if(s==NULL)
			{
				DPRINTF("\nWrong Index");
			}
			else
			{
				DPRINTF("Student at index from the end = %d\n",index);
				List_print_Student(s);
			}
			DPRINTF("\n============\n");
		}
		break;
		default:
			DPRINTF("\n============");
			DPRINTF("\nWrong option , Try again 'Note : Options are from 1 to 7'");
			DPRINTF("\n============\n");
			break;
		}
	}while(1);
}
