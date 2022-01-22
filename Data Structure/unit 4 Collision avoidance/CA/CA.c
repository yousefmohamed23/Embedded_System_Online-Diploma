/*
 * CA.c
 *
 *  Created on: Jan 22, 2022
 *      Author: youssef Abo el maaty
 Collision Avoidance controller

 */


/*
 Private global variables of CA
 */
#include "CA.h"

int CA_speed=0;
int CA_distance=0;
int CA_thershold = 50;


void US_SetDistance(int d)
{
	//get distance from US
	CA_distance=d;
	// state transition
	if(CA_distance <= CA_thershold)
	{
		CA_state=STATE_NAME(CA_waiting);
	}
	else
	{
		CA_state=STATE_NAME(CA_driving);
	}
}



STATE(CA_waiting)
{
	// state action
	CA_state_id=waiting;
	//set speed
	CA_speed=0;
	//send speed to dc motor
	DC_MOTOR(CA_speed);

	printf("waiting state : distance = %d speed =%d\n",CA_distance,CA_speed);
}

STATE(CA_driving)
{
	// state action
	CA_state_id=driving;
	//set speed
	CA_speed =30;
	//send speed to dc motor
	DC_MOTOR(CA_speed);


	printf("driving state : distance = %d speed =%d\n",CA_distance,CA_speed);

}


