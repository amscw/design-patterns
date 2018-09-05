/*
 * romeCommander.cpp
 *
 *  Created on: 5 сент. 2018 г.
 *      Author: moskw
 */

#include "romeCommander.hpp"

army_c *romeCommander_c::createArmy(army_c::force_t forceType) noexcept
{
	std::unique_ptr<army_c> army;

	switch (forceType)
	{
	case army_c::force_t::ARCHER_FORCE:
		army = std::make_unique<army_c>("Antivirus", 50, forceType);
		army->Formation(army_c::combatFormation_t::ROW);
		break;
	case army_c::force_t::CAVALRY_FORCE:
		army = std::make_unique<army_c>("Antivirus", 15, forceType);
		army->Formation(army_c::combatFormation_t::WEDGE);
		break;
	case army_c::force_t::INFANTRY_FORCE:
		army = std::make_unique<army_c>("Antivirus", 70, forceType);
		army->Formation(army_c::combatFormation_t::PIG);
		break;
	}

	return army.release();
}



