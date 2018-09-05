/*
 * greekCommander.hpp
 *
 *  Created on: 5 сент. 2018 г.
 *      Author: moskw
 */

#ifndef GREEKCOMMANDER_HPP_
#define GREEKCOMMANDER_HPP_

#include "commander.hpp"

class greekCommander_c : public commander_c
{
	virtual army_c *createArmy(army_c::force_t forceType) noexcept;
};


#endif /* GREEKCOMMANDER_HPP_ */
