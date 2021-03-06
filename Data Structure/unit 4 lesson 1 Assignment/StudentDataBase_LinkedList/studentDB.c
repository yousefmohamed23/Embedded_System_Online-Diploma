/*
 * StudentDB.c
 *
 *  Created on: Jan 6, 2022
 *      Author: youss
 */

#include "studentDB.h"
//global pointer to first Node

S_Node* g_firststudent = NULL;

List_status List_print_Student(S_student* student){
	if(g_firststudent == NULL || student == NULL) return List_error;
	DPRINTF("Student id = %d \n",student->Id);
	DPRINTF("Student name = %s \n",student->name);
	DPRINTF("Student height = %f \n\n",student->height);
	return List_no_error;
}
List_status List_Add_Student(S_student* student){
	if(student == NULL) return List_error;
	// CREATE NEW NODE USING DYNAMIC ALLOCATION
	S_Node * new_Student = (S_Node*) malloc(sizeof(S_Node));

	//SET NEW STUDENT DATA
	new_Student->data.Id=student->Id;  //Set Id
	new_Student->data.height=student->height; // Set height
	strcpy(new_Student->data.name,student->name); // Set name
	//Add new student in the list

	//if the new student is the first in the list
	if(g_firststudent == NULL)
	{
		g_firststudent = new_Student;
		new_Student->p_next=NULL;
	}
	else
	{
		//Add new student to the end of the list
		// loop till reach last student then add the student
		S_Node* temp = g_firststudent;
		while(temp->p_next!= NULL)
		{
			temp = temp->p_next;
		}
		temp->p_next = new_Student;
		new_Student->p_next=NULL;
	}

	return List_no_error;

}
List_status List_View_All(void){
	if(g_firststudent == NULL) return List_error;
	S_Node* temp = g_firststudent;
	uint32_t Record_Number=0;
	while(temp!= NULL)
	{
		DPRINTF("\n============");
		DPRINTF("\nRecord Number = %d\n\n",++Record_Number);
		List_print_Student(&(temp->data));
		DPRINTF("\n============\n");
		temp = temp->p_next;
	}
	return List_no_error;

}

List_status List_Delete_Student(uint32_t ID){
	if(g_firststudent == NULL) return List_error;
	S_Node* prev =NULL;
	S_Node * current = g_firststudent;
	//loop until find id or not
	while(current !=NULL)
	{
		if(current->data.Id == ID)
		{
			//DELETE NODE
			// if node is the first
			if(prev == NULL)
			{
				g_firststudent= current->p_next;
				free(current);
			}
			//if node is the last
			else if(current -> p_next == NULL)
			{
				prev->p_next = NULL;
				free(current);
			}
			else
			{
				prev->p_next = current->p_next;
				free(current);
			}
			return List_no_error;
			// if in the middle
		}
		else {
			prev = current;
			current = current->p_next;
		}
	}
	return List_not_found;
}

List_status List_Delete_All(void){
	if(g_firststudent == NULL) return List_error;
	while(g_firststudent !=NULL)
	{
		S_Node* deleted_Node = g_firststudent;
		g_firststudent = g_firststudent->p_next;
		free(deleted_Node);
	}
	return List_no_error;


}
List_status List_GetLength(uint32_t * length){
	if(g_firststudent == NULL || length==NULL) return List_error;
	*length=0;
	S_Node* temp =g_firststudent;
	while(temp != NULL){
		(*length)++;
		temp = temp ->p_next;
	}
	return List_no_error;
}

S_student * List_GetNth_Student(uint32_t index){
	if(g_firststudent == NULL) return NULL;
	unsigned int count =0;
	S_Node * temp = g_firststudent;
	while(temp != NULL)
	{
		if(count == index)
			//return current node student;
			return &(temp->data);
		else
		{
			temp = temp->p_next;
			count++;
		}
	}
	return NULL;

}
S_student * List_GetNthFromEnd_Student(uint32_t index){
	if(g_firststudent == NULL) return NULL;
	uint32_t count =0;
	S_Node* main_ptr = g_firststudent;
	S_Node* ref_ptr = g_firststudent;
	while(count != index)
	{
		count++;
		ref_ptr=ref_ptr->p_next;
		if(ref_ptr ==NULL) return NULL;
	}
	while(ref_ptr != NULL)
	{
		ref_ptr = ref_ptr->p_next;
		main_ptr=main_ptr->p_next;
	}
	return &(main_ptr->data);

}

void List_Reverse_Traverse(S_Node* head){
	if(head == NULL) return;
	List_Reverse_Traverse(head->p_next);
	List_print_Student(&(head->data));
}
