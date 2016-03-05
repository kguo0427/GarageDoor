/*
 * GarageDoorTransition.h
 *
 *  Created on: Mar 3, 2016
 *      Author: mad1948
 */

#ifndef GARAGEDOORTRANSITION_H_
#define GARAGEDOORTRANSITION_H_

class GarageDoorTransition {
private:
	GarageDoorState *nextState;
public:
	GarageDoorTransition();
	virtual ~GarageDoorTransition();
	void guard();
	void accept();
	void setDefault();
};

#endif /* GARAGEDOORTRANSITION_H_ */
