#include "Linkedlist.h"
S_node * StudentDB ;
int main()
{
	//Test Add Student
	S_student student;
	strcpy(student.name,"Youssef");
	student.id=123;
	student.height = 65;
	Add_Node(&student,&StudentDB);
	S_student student2;
	strcpy(student2.name,"ahmed");
	student2.id=23;
	student2.height = 75;
	Add_Node(&student2,&StudentDB);
	S_student student3;
	strcpy(student3.name,"Mohamed");
	student3.id=12;
	student3.height = 85;

	Add_Node(&student3,&StudentDB);
	DPRINTF("======== View List =======\n");
	view_list(&StudentDB);

	List_Reverse_traverse(&StudentDB);

/*
	uint32_t len=0;
	List_get_length(&StudentDB,&len);
	DPRINTF("List Len =%d\n",len);

	Delete_list(&StudentDB);

	List_get_length(&StudentDB,&len);
	DPRINTF("List Len =%d\n",len);

	DPRINTF("======== View List =======\n");
	view_list(&StudentDB);

	Delete_Node(123,&StudentDB);
	DPRINTF("======== View List =======\n");
	view_list(&StudentDB);
	Delete_Node(23,&StudentDB);
	DPRINTF("======== View List =======\n");
	view_list(&StudentDB);
	 */

}
