/*
 * GarageDoorController.h
 *
 *  Created on: Feb 26, 2016
 *      Author: mad1948
 */

#ifndef GARAGEDOORCONTROLLER_H_
#define GARAGEDOORCONTROLLER_H_

class GarageDoorController {
private:
	GarageDoorStateMachine stateMachine;
	int doorPosition;
	bool motorUp;
	bool motorDown;
	bool IRBeamOn;

public:
	GarageDoorController();
	virtual ~GarageDoorController();
	void accept();

};

#endif /* GARAGEDOORCONTROLLER_H_ */
