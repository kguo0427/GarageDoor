/*
 * OpeningState.cpp
 *
 *  Created on: Mar 4, 2016
 *      Author: mad1948
 */

#include "OpeningState.h"

OpeningState::OpeningState() {
	// TODO Auto-generated constructor stub

}

OpeningState::~OpeningState() {
	// TODO Auto-generated destructor stub
}

void OpeningState::entry()
{
	// TODO
	// motorUp = 1
}

void OpeningState::exit()
{
	// TODO
	// motorUp = 0
}

void OpeningState::update()
{
	// TODO
	// decrement counter
	// if counter == 0 then send fullOpen signal 
	//			OR let someone else track counter (controller?)
}
