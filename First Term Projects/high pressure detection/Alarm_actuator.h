/*
 * ALARM_ACTUATOR.h
 *
 *  Created on: Jan 22, 2022
 *      Author: youss
 */

#ifndef ALARM_ACTUATOR_H_
#define ALARM_ACTUATOR_H_
#include "state.h"


/*-----------------------------------------------------------------------------------------------
[Enumeration Name]: ALARM_ACTUATOR_state_id
[Enumeration Description]: represent the states of Alarm actuator
	ON	->	 Alarm is ON
	OFF	-> 	 Alarm is OFF
-------------------------------------------------------------------------------------------------*/
enum {
	OFF,
	ON
}ALARM_ACTUATOR_state_id;

//ALARM_ACTUATOR STATE FUNCTIONS

//APIs
/*------------------------------------------------------------------------------------------------
 [Function Name] :	ALARM_ACTUATOR_ON
 [Description] : represent the state "ALARM_ACTUATOR_state_id =ON" which
 turns the alarm actuator on for a 60 second when the is higher than predefined
 threshold value
 [Args] : void
 [in]:	void
 [Return]: void
 -----------------------------------------------------------------------------------------------*/
STATE(ALARM_ACTUATOR_ON);


/*------------------------------------------------------------------------------------------------
 [Function Name] :	ALARM_ACTUATOR_OFF
 [Description] : represent the state "ALARM_ACTUATOR_state_id =OFF" which
 turns the alarm actuator OFF when the pressure is low
 [Args] : void
 [in]:	void
 [Return]: void
 -----------------------------------------------------------------------------------------------*/
STATE(ALARM_ACTUATOR_OFF);



/*------------------------------------------------------------------------------------------------
 [Function Name] :	ALARM_ACTUATOR_init
 [Description] :	initialize ALARM_ACTUATOR
 [Args] : void
 [in]: void
 [Return]:void

 -----------------------------------------------------------------------------------------------*/
void ALARM_ACTUATOR_init();

/*global pointer to function return void and take nothing which represent
  the ALARM_ACTUATOR state which will be executed*/
void (*ALARM_ACTUATOR_state)();

#endif /* ALARM_ACTUATOR_H_ */
