/*
 * OpeningState.h
 *
 *  Created on: Mar 4, 2016
 *      Author: mad1948
 */

#ifndef OPENINGSTATE_H_
#define OPENINGSTATE_H_

#include "GarageDoorState.h"

class OpeningState: public GarageDoorState {
public:
	OpeningState();
	virtual ~OpeningState();
	void entry();
	void exit();
	void update();
};

#endif /* OPENINGSTATE_H_ */
