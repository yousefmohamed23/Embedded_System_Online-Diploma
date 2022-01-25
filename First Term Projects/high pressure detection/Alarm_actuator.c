
/*
Alarm actuator driver
*/

#include "ALarm_actuator.h"

/*Global Varibales*/
unsigned int  period = 1000000; /*Alarm period */

void ALARM_ACTUATOR_init(){
}



void start_alarm(void){

	ALARM_ACTUATOR_state = STATE_NAME(ALARM_ACTUATOR_ON);

}

STATE(ALARM_ACTUATOR_ON){
	
	//set state id
	ALARM_ACTUATOR_state_id=ON;
	
	Set_Alarm_actuator(0);
	Delay(period);

	// next state to execute

	ALARM_ACTUATOR_state = STATE_NAME(ALARM_ACTUATOR_OFF);

}

STATE(ALARM_ACTUATOR_OFF){

	ALARM_ACTUATOR_state_id=OFF;
	Set_Alarm_actuator(1);
	Delay(500);
	//set state id
}
