/*
 * DETECT_PRESSURE_ALGO.h
 *
 *  Created on: Jan 22, 2022
 *      Author: youss
 */

#ifndef DETECT_PRESSURE_ALGO_H_
#define DETECT_PRESSURE_ALGO_H_
#include "state.h"


/*-----------------------------------------------------------------------------------------------
[Enumeration Name]: DETECT_PRESSURE_ALGO_state_id
[Enumeration Description]: Describe different states of DETECT_PRESSURE_ALGO_
	reading -> algorithm is ready for reading new pressure value from sensor
	high -> pressure value is higher than threshold "predefined"
	low-> pressure value is lower than  or equal threshold "predefined"
-------------------------------------------------------------------------------------------------*/
enum {
	reading,
	high,
	low
}DETECT_PRESSURE_ALGO_state_id;

//DETECT_PRESSURE_ALGO STATE FUNCTIONS

/*------------------------------------------------------------------------------------------------
 [Function Name] :	DETECT_PRESSURE_ALGO_reading
 [Description] :	algorithm is ready for reading new pressure value from sensor
 [Args]: void
 [in]:	void
 [Return]:void
 -----------------------------------------------------------------------------------------------*/
STATE(DETECT_PRESSURE_ALGO_reading);

/*------------------------------------------------------------------------------------------------
 [Function Name] :	DETECT_PRESSURE_ALGO_high
 [Description] :	pressure value is higher than threshold "predefined"
 [Args] : void
 [in]:	void
 [Return]:void
 -----------------------------------------------------------------------------------------------*/


STATE(DETECT_PRESSURE_ALGO_high);

/*------------------------------------------------------------------------------------------------
 [Function Name] :	DETECT_PRESSURE_ALGO_low
 [Description] :	pressure value is lower than or equal threshold "predefined"
 [Args] : void
 [in]:	void
 [Return]:void
 -----------------------------------------------------------------------------------------------*/
STATE(DETECT_PRESSURE_ALGO_low);

/*global pointer to function return void and take nothing which represent
  the DETECT_PRESSURE_ALGO_ state which will be executed*/
void (*DETECT_PRESSURE_ALGO_state)();

#endif /* DETECT_PRESSURE_ALGO_H_ */
