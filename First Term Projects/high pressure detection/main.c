#include <stdint.h>
#include <stdio.h>
#include "PressureSensor.h"
#include "DetectPressureAlgo.h"
#include "Alarm_actuator.h"

void setup()
{
	GPIO_INITIALIZATION();
	PRESSURE_SENSOR_init();
	ALARM_ACTUATOR_init();
	
	//initiate states
	PRESSURE_SENSOR_state=STATE_NAME(PRESSURE_SENSOR_idle);
	DETECT_PRESSURE_ALGO_state = STATE_NAME(DETECT_PRESSURE_ALGO_reading);
	ALARM_ACTUATOR_state= STATE_NAME(ALARM_ACTUATOR_OFF);
	
	// set alarm to off bydefault
	
	ALARM_ACTUATOR_state();
		
}
int main (){
	
	setup();
	while (1)
	{
		//Implement your Design
		PRESSURE_SENSOR_state();
		DETECT_PRESSURE_ALGO_state();
		ALARM_ACTUATOR_state();
		
	}

}
