/*
 * GarageDoorStateMachine.cpp
 *
 *  Created on: Mar 3, 2016
 *      Author: mad1948
 */

#include "GarageDoorStateMachine.h"

GarageDoorStateMachine::GarageDoorStateMachine() {
	// TODO Auto-generated constructor stub
	currentState = NULL;
}

/*GarageDoorStateMachine::GarageDoorStateMachine( int numStates, int numTrans ) {
	// TODO Auto-generated constructor stub

}*/

GarageDoorStateMachine::~GarageDoorStateMachine() {
	// TODO Auto-generated destructor stub
	// call destructors for all states and transitions in map
}

void GarageDoorStateMachine::accept(/*SensorEvent*/)
{
	// TODO
	// handler for events
	// check event type
	// Iterator< GarageDoorTransition* > iter;
	// for( iterate through all transitions in currentstate vector map )
	//		if( transition.accept( event ) = true )
	//			check transition guard
	//			if guard returns false -> break (do nothing)
	//			else
	//				call exit function on currentstate
	//				execute transition actions
	//				call entry function on transition nextstate
	//				set currentstate to transition nextstate
	//				break;
}

void GarageDoorStateMachine::assignState( GarageDoorState* state )
{
	// TODO
	// only add state if it doesn't already exist
	if( table.find(state) == table.end() )
		table[state] = new vector<GarageDoorTransitions*>();
}

void GarageDoorStateMachine::assignTrans( GarageDoorState* state, GarageDoorTransition* trans )
{
	// TODO
	// create entry if it doesn't already exist
	if( table.find(state) == table.end() )
		table[state] = new vector<GarageDoorTransitions*>();
	// add transition to state table
	table[state]->add(trans);
}
