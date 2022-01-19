/*
 * studentDB.h
 *
 *  Created on: Jan 6, 2022
 *      Author: youss
 */

#ifndef STUDENTDB_H_
#define STUDENTDB_H_
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"
#include "stdint.h"


//Student DataBase Attributes
typedef struct {
	uint8_t day;
	uint8_t month;
	uint32_t year;

} S_birth_date ;

typedef struct
{
	uint8_t name[40];
	uint8_t Id;
	float height;
	S_birth_date birthday;

} S_student;

typedef struct {
	S_student data;
	S_Node * next;
}S_Node;

typedef enum {
	Student_is_added,
	Student_is_deleted,
	Student_Not_added,
	Student_Not_existed
}StudentDB_status;
//API's
//Add Student

StudentDB_status Add_student(S_student* student);
StudentDB_status Delete_student(uint8_t ID);
void View_student(S_Node* head);
void Delete_all(S_Node* head);


#endif /* STUDENTDB_H_ */