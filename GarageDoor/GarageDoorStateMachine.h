/*
 * GarageDoorStateMachine.h
 *
 *  Created on: Mar 3, 2016
 *      Author: mad1948
 */

#ifndef GARAGEDOORSTATEMACHINE_H_
#define GARAGEDOORSTATEMACHINE_H_

using namespace std;

class GarageDoorStateMachine {
private:
	// POINTERS!!!
	GarageDoorControllingState *currentState;

	// pointer map of states and transitions
	std::map<GarageDoorState*, std::vector<GarageDoorTransition*>*> table;

public:
	GarageDoorStateMachine();
	//GarageDoorStateMachine(int numStates, int numTrans);
	virtual ~GarageDoorStateMachine();
	void accept();
	void assignState( GarageDoorState* state );
	void assignTrans( GarageDoorState* state, GarageDoorTransition* trans );
};

#endif /* GARAGEDOORSTATEMACHINE_H_ */
