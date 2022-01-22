/*
 * US.h
 *
 *  Created on: Jan 22, 2022
 *      Author: youss
 */

#ifndef US_H_
#define US_H_
#include "state.h"

enum {
	reading
}US_state_id;
//US STATE FUNCTIONS

STATE(US_reading);
void US_init();


void (*US_state)();

#endif /* US_H_ */
