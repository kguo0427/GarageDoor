/*
 * GarageDoorState.h
 *
 *  Created on: Feb 26, 2016
 *      Author: mad1948
 */

#ifndef GARAGEDOORSTATE_H_
#define GARAGEDOORSTATE_H_

class GarageDoorState {
private:
	virtual string stateID;

public:
	GarageDoorState();
	virtual ~GarageDoorState();
	virtual void entry();
	virtual void exit();
	virtual void update();

};

#endif /* GARAGEDOORSTATE_H_ */
