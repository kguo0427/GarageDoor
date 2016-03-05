/*
 * ClosingState.h
 *
 *  Created on: Mar 4, 2016
 *      Author: mad1948
 */

#ifndef CLOSINGSTATE_H_
#define CLOSINGSTATE_H_

#include "GarageDoorState.h"

class ClosingState: public GarageDoorState {
private:
	string stateID = "closing";
public:
	ClosingState();
	virtual ~ClosingState();
	void entry();
	void exit();
	void update();
};

#endif /* CLOSINGSTATE_H_ */
