/*
 * commander.hpp
 *
 *  Created on: 5 сент. 2018 г.
 *      Author: moskw
 */

#ifndef COMMANDER_HPP_
#define COMMANDER_HPP_

#include <memory>
#include "army.hpp"

class commander_c
{
protected:
	virtual army_c *createArmy(army_c::force_t forceType) noexcept = 0;		// !!! factory method !!!

public:
	virtual ~commander_c(){}

	void PatrolStrategy(army_c::force_t forceType) noexcept;		// !!! well-known logic !!!
	void CaptureStrategy(army_c::force_t forceType) noexcept;		// !!! well-known logic !!!


};


#endif /* COMMANDER_HPP_ */
