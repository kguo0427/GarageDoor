/*
 * Sensors.h
 *
 *  Created on: Mar 4, 2016
 *      Author: mad1948
 */

#ifndef SENSORS_H_
#define SENSORS_H_
// TODO !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
class Sensors {
public:
	Sensors();
	virtual ~Sensors();
	void ButtonPress();
	void MotorOvercurrent();
	void IRBeamInterrupt();
};

#endif /* SENSORS_H_ */
