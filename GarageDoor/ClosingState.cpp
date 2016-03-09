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

ClosingState::entry()
{
	// TODO
	// motorDown = 1
}

ClosingState::exit()
{
	// TODO
	// motorDown = 0
}

ClosingState::update()
{
	// TODO
	// increment counter
	// if counter == 10 then send fullDown signal
	//			OR let someone else track counter (controller?)
}
