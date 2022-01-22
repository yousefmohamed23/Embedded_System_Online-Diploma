/*
 * CA.h
 *
 *  Created on: Jan 22, 2022
 *      Author: youss
 */

#ifndef CA_H_
#define CA_H_
#include "state.h"

enum {
	waiting,
	driving
}CA_state_id;

//CA STATE FUNCTIONS
STATE(CA_waiting);
STATE(CA_driving);


void (*CA_state)();

#endif /* CA_H_ */
