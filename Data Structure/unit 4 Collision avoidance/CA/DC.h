/*
 * DC.h
 *
 *  Created on: Jan 22, 2022
 *      Author: youss
 */

#ifndef DC_H_
#define DC_H_
#include "state.h"

enum {
	idle,
	busy
}DC_state_id;
//DC STATE FUNCTIONS

STATE(DC_idle);
STATE(DC_busy);
void DC_init();


void (*DC_state)();

#endif /* DC_H_ */
