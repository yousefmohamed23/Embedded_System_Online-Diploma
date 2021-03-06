/*
 * studentDB.h
 *
 *  Created on: Jan 6, 2022
 *      Author: youssef Abo el maaty
 */

#ifndef STUDENTDB_H_
#define STUDENTDB_H_
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"
#include "stdint.h"


/*------------------------------------------------------------------------------------------------
 [Macro Name] : DPRINTF
 [Description] : Macro for printing on the console using 'printf'
 and 'fflush' for refresh buffer in and out
 -----------------------------------------------------------------------------------------------*/
#define DPRINTF(...)   fflush(stdout);\
						fflush(stdin);\
						printf( __VA_ARGS__);\
						fflush(stdout);\
						fflush(stdin)


//Student DataBase Attributes

/*------------------------------------------------------------------------------------------------
 [Macro Name] :NAME_SIZE
 [Description] : Represent size of student
 [Args] :none
 [in]:none

 [out]:none

 [Return]:none
 -----------------------------------------------------------------------------------------------*/
#define NAME_SIZE 40


/*------------------------------------------------------------------------------------------------
 [Structure Name] :S_student
 [Description] :Structure includes attributes of student
 [Members]: Name[Name_SIZE] -> Array of Chars for the student full name
 	 	 	id -> Id of the student
 	 	 	height -> height of student
 -----------------------------------------------------------------------------------------------*/

typedef struct
{
	char name[NAME_SIZE];
	unsigned Id;
	float height;
	//S_birth_date birthday;

}S_student;


/*------------------------------------------------------------------------------------------------
 [Structure Name] :S_Node
 [Description] : Structure represents the Node in the LinkedList
 [Members]: data -> data section of the node
 	 	 	*p_next -> pointer to Next Node in the list
 -----------------------------------------------------------------------------------------------*/

typedef struct S_Node S_Node;
struct S_Node {
	S_student data;
	S_Node * p_next;
};

/*-----------------------------------------------------------------------------------------------
[Enumeration Name]:List_status
[Enumeration Description]:representing different status for the node in the list
-------------------------------------------------------------------------------------------------*/
typedef enum {
	List_error,
	List_no_error,
	List_not_found
}List_status;
//API's
//Add Student
/*------------------------------------------------------------------------------------------------
 [Function Name] :List_print_Student
 [Description] :Print student data on the console
 [Args] :S_student* student -> Pointer to student Structure


 [Return]: List_status -> List_no_error == Student is printed
 	 	 	 	 	 	 List_error == student is not printed
 -----------------------------------------------------------------------------------------------*/

List_status List_print_Student(S_student* student);
/*------------------------------------------------------------------------------------------------
 [Function Name] :List_Add_Student
 [Description] : Add student to the list
 [Args] :S_student* student -> Pointer to student Structure

 [Return]:List_status -> List_no_error == Student is added
 	 	 	 	 	 	 List_error == student is not added
 -----------------------------------------------------------------------------------------------*/

List_status List_Add_Student(S_student* student);
/*------------------------------------------------------------------------------------------------
 [Function Name] :List_Delete_Student
 [Description] :delete student from the list
 [Args] :uint8_t ID -> Id of student which will be removed


 [Return]:List_status -> List_no_error == Student is deleted
 	 	 	 	 	 	 List_not_found == student is not found
 -----------------------------------------------------------------------------------------------*/

List_status List_Delete_Student(uint32_t ID);
/*------------------------------------------------------------------------------------------------
 [Function Name] :List_View_All
 [Description] : print all student in the list from the front
 to the end
 [Args] : NONE

 [Return]:List_status -> List_no_error == list is printed
 	 	 	 	 	 	 List_error == list is not printed , there is an error or list is empty

 -----------------------------------------------------------------------------------------------*/

List_status List_View_All(void);
/*------------------------------------------------------------------------------------------------
 [Function Name] :List_Delete_All
 [Description] : delete all student in the list from the front
 to the end
 [Args] : NONE

 [Return]:List_status -> List_no_error == list is printed
 	 	 	 	 	 	 List_error == list is empty
 -----------------------------------------------------------------------------------------------*/

List_status List_Delete_All(void);
/*------------------------------------------------------------------------------------------------
 [Function Name] :List_GetLength
 [Description] : get length of the list -> no of students in the list
 [Args] :uint32_t * length -> pointer to length variable of the list
 (passing by reference)

 [Return]:List_status -> List_no_error == get the length successfully
 	 	 	 	 	 	 List_error == list is empty or not existed
 -----------------------------------------------------------------------------------------------*/

List_status List_GetLength(uint32_t * length);
/*------------------------------------------------------------------------------------------------
 [Function Name] :List_GetNth_Student
 [Description] :get the student with specific index from the front
 [Args] : uint32_t index -> index of student


 [Return]:S_student *	 -> pointer to student structure related to the index
 	 	 	 	 	 	 -> NULL if index is wrong
 -----------------------------------------------------------------------------------------------*/

S_student * List_GetNth_Student(uint32_t index);
/*------------------------------------------------------------------------------------------------
 [Function Name] :List_GetNthFromEnd_Student_
 [Description] :get the student with specific index from the end
 [Args] : uint32_t index -> index of student


 [Return]:S_student *	 -> pointer to student structure related to the index
 	 	 	 	 	 	 -> NULL if index is wrong
 -----------------------------------------------------------------------------------------------*/

S_student * List_GetNthFromEnd_Student(uint32_t index);
/*------------------------------------------------------------------------------------------------
 [Function Name] :List_Reverse_Traverse
 [Description] : print list in reverse order
 [Args] :S_Node* head -> pointer to first node

 [Return]: NONE
 -----------------------------------------------------------------------------------------------*/

void List_Reverse_Traverse(S_Node* head);



#endif /* STUDENTDB_H_ */
