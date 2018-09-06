/*
 * romeCommander.hpp
 *
 *  Created on: 5 сент. 2018 г.
 *      Author: moskw
 */

#ifndef ROMECOMMANDER_HPP_
#define ROMECOMMANDER_HPP_

#include "commander.hpp"

class romeCommander_c : public commander_c
{
	virtual army_c *createArmy(force_t forceType) noexcept;
};


#endif /* ROMECOMMANDER_HPP_ */
