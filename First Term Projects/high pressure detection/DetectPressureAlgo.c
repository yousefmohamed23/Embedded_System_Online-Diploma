

#include "DetectPressureAlgo.h"

int Detected_pressure=0; /*pressure sensor value */
int pressure_threshold = 20; /*predefined threshold value */


void read_pressure_value(int pressureVal){

	//get the pressure from sensor
	Detected_pressure = pressureVal;


	// set next state according to value of Detected_pressure

	if(Detected_pressure > pressure_threshold)
		DETECT_PRESSURE_ALGO_state=STATE_NAME(DETECT_PRESSURE_ALGO_high);
	else
		DETECT_PRESSURE_ALGO_state=STATE_NAME(DETECT_PRESSURE_ALGO_low);
}

STATE(DETECT_PRESSURE_ALGO_reading){

	//State id
	DETECT_PRESSURE_ALGO_state_id = reading;

}


STATE(DETECT_PRESSURE_ALGO_high){
	//state id
	DETECT_PRESSURE_ALGO_state_id = high;

	//event
	//send alarm on signal to alarm actuator
	start_alarm();

	//next state
	DETECT_PRESSURE_ALGO_state = STATE_NAME(DETECT_PRESSURE_ALGO_reading);


}
STATE(DETECT_PRESSURE_ALGO_low){

	//state id
	DETECT_PRESSURE_ALGO_state_id = low;

	//event

	//next state
	DETECT_PRESSURE_ALGO_state = STATE_NAME(DETECT_PRESSURE_ALGO_reading);


}
