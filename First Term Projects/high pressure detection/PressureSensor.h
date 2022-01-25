/*
 * PRESSURE_SENSOR.h
 *
 *  Created on: Jan 22, 2022
 *      Author: youss
 */

#ifndef PRESSURE_SENSOR_H_
#define PRESSURE_SENSOR_H_
#include "state.h"


/*-----------------------------------------------------------------------------------------------
[Enumeration Name]: PRESSURE_SENSOR_state_id
[Enumeration Description]: Describe different states of PRESSURE_SENSOR
	idle->	PRESSURE_SENSOR in ready mode
	busy -> PRESSURE_SENSOR in reading mode
-------------------------------------------------------------------------------------------------*/
enum {
	idle,
	busy
}PRESSURE_SENSOR_state_id;

//PRESSURE_SENSOR STATE FUNCTIONS

/*------------------------------------------------------------------------------------------------
 [Function Name] :	PRESSURE_SENSOR_idle
 [Description] :	it describes the pressure sensor in the idle state in which
 pressure value sets and send to the algorithm
 [Args] :void
 [in]:void
 [Return]:void

 -----------------------------------------------------------------------------------------------*/
STATE(PRESSURE_SENSOR_idle);


/*------------------------------------------------------------------------------------------------
 [Function Name] :	PRESSURE_SENSOR_busy
 [Description] :	it describes the pressure sensor is busy and
 it is waiting for reading another pressure value

 [Args] :void
 [in]:void
 [Return]:void

 -----------------------------------------------------------------------------------------------*/

STATE(PRESSURE_SENSOR_busy);

/*------------------------------------------------------------------------------------------------
 [Function Name] :	PRESSURE_SENSOR_init
 [Description] :	initialize PRESSURE_SENSOR
 [Args] : void
 [in]:	void
 [Return]:void
 -----------------------------------------------------------------------------------------------*/
void PRESSURE_SENSOR_init();
/*global pointer to function return void and take nothing which represent
  the PRESSURE_SENSOR state which will be executed*/
void (*PRESSURE_SENSOR_state)();

#endif /* PRESSURE_SENSOR_H_ */
