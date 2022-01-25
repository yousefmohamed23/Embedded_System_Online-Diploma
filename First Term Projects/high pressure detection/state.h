/*
 * state.h
 *
 *  Created on: Jan 22, 2022
 *      Author: youss
 */

#ifndef STATE_H_
#define STATE_H_
#include "stdio.h"
#include "stdlib.h"
#include "driver.h"


#define DPRINTF(...)   fflush(stdout);\
						fflush(stdin);\
						printf( __VA_ARGS__);\
						fflush(stdout);\
						fflush(stdin)

#define STATE(_ST_Name_) void State_##_ST_Name_()
#define STATE_NAME(_ST_Name_) State_##_ST_Name_



//connections 

/*------------------------------------------------------------------------------------------------
 [Function Name] :	start_alarm
 [Description] :	send signal from algorithm to alarm actuator to turn
 	 alarm on
 [Args] : void
 [in]:	void
 [Return]:void
 -----------------------------------------------------------------------------------------------*/
void start_alarm(void);
/*------------------------------------------------------------------------------------------------
 [Function Name] :	read_pressure_value
 [Description] :	read pressure sensor value and send it to the algorithm
 [Args] : pressureVal -> pressure sensor value which is read
 [Return]:void
 -----------------------------------------------------------------------------------------------*/
void read_pressure_value(int pressureVal);

#endif /* STATE_H_ */
