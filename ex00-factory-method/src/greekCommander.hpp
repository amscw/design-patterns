/*
 * greekCommander.hpp
 *
 *  Created on: 5 ����. 2018 �.
 *      Author: moskw
 */

#ifndef GREEKCOMMANDER_HPP_
#define GREEKCOMMANDER_HPP_

#include "commander.hpp"

class greekCommander_c : public commander_c
{
	virtual army_c *createArmy(force_t forceType) noexcept;
};


#endif /* GREEKCOMMANDER_HPP_ */
