/*
 * GarageDoorController.cpp
 *
 *  Created on: Feb 26, 2016
 *      Author: mad1948
 */

#include "GarageDoorController.h"

GarageDoorController::GarageDoorController() {
	// TODO Auto-generated constructor stub
	// Construct State Machine
	// Construct controller states
	// Construct state transitions
	// assign states and transitions in state machine
	// default currentState to fullClose in state machine

}

GarageDoorController::~GarageDoorController() {
	// TODO Auto-generated destructor stub
	// Destroy controller states
	// Destroy state transitions
	// Destroy state machine
	// kill threads?
}

void accept()
{
	/*
	 * pressButton event:
	 * 	// switch currentState
	//	if fullClose -> nextState = opening
	// 	if fullOpen -> nextState = closing
	// 	if closing -> nextState = closingPrior
	// 	if opening -> nextState = openingPrior
	// 	if openingPrior -> nextState = closing
	// 	if closingPrior -> nextState = opening
	 *
	 * IRBeamInterrupt
	 * //if currentState is closing
	//	nextState = opening
	 *
	 * MotorOvercurrent
	 * //if currentState is closing
	//	nextState = opening
	//elsif currentstate is opening
	// 	nextState = openingPrior
	 *
	 *
	 */
}
