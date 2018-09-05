/*
 * greekCommander.cpp
 *
 *  Created on: 5 сент. 2018 г.
 *      Author: moskw
 */

#include "greekCommander.hpp"

army_c *greekCommander_c::createArmy(army_c::force_t forceType) noexcept
{
	std::unique_ptr<army_c> army;

	switch (forceType)
	{
	case army_c::force_t::ARCHER_FORCE:
		army = std::make_unique<army_c>("Odessey", 55, forceType);
		army->Formation(army_c::combatFormation_t::ROW);
		break;
	case army_c::force_t::CAVALRY_FORCE:
		army = std::make_unique<army_c>("Odessey", 10, forceType);
		army->Formation(army_c::combatFormation_t::WEDGE);
		break;
	case army_c::force_t::INFANTRY_FORCE:
		army = std::make_unique<army_c>("Odessey", 85, forceType);
		army->Formation(army_c::combatFormation_t::PIG);
		break;
	}

	return army.release();
}



