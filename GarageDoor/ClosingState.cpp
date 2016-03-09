/*
 * ClosingState.cpp
 *
 *  Created on: Mar 4, 2016
 *      Author: mad1948
 */

#include "ClosingState.h"

ClosingState::ClosingState() {
	// TODO Auto-generated constructor stub

}

ClosingState::~ClosingState() {
	// TODO Auto-generated destructor stub
}

void ClosingState::entry()
{
	// TODO
	// motorDown = 1
}

void ClosingState::exit()
{
	// TODO
	// motorDown = 0
}

void ClosingState::update()
{
	// TODO
	// increment counter
	// if counter == 10 then send fullDown signal
	//			OR let someone else track counter (controller?)
}
