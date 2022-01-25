

#include "PressureSensor.h"
/*Global variables*/

int pressure=0; /*pressure sensor reading value*/
void PRESSURE_SENSOR_init(){

}


STATE(PRESSURE_SENSOR_idle){

	// set state id
	PRESSURE_SENSOR_state_id=idle;

	//event
	// get pressure value
	pressure = getPressureVal();
	
	// send pressure value
	read_pressure_value(pressure);

	//next state
	PRESSURE_SENSOR_state=STATE_NAME(PRESSURE_SENSOR_busy);


}
STATE(PRESSURE_SENSOR_busy){

	// set state id
	PRESSURE_SENSOR_state_id = busy;
	//delay

	Delay(50);
	//change state
	PRESSURE_SENSOR_state=STATE_NAME(PRESSURE_SENSOR_idle);

}
