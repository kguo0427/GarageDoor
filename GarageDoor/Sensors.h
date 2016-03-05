/*
 * Sensors.h
 *
 *  Created on: Mar 4, 2016
 *      Author: mad1948
 */

#ifndef SENSORS_H_
#define SENSORS_H_
// TODO !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
[ event_source(native) ]
class Sensors {
public:
	Sensors();
	virtual ~Sensors();
	__event void ButtonPress();
};

#endif /* SENSORS_H_ */
