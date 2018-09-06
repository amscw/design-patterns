/*
 * greekCommander.cpp
 *
 *  Created on: 5 сент. 2018 г.
 *      Author: moskw
 */

#include "greekCommander.hpp"
#include "greekArmy.hpp"

army_c *greekCommander_c::createArmy(force_t forceType) noexcept
{
	std::unique_ptr<army_c> army;

	switch (forceType)
	{
	case force_t::ARCHER_FORCE:
		army = std::make_unique<greekArcherArmy_c>("Odessey", 55);
		army->Formation(army_c::combatFormation_t::ROW);
		break;
	case force_t::CAVALRY_FORCE:
		army = std::make_unique<greekCavalryArmy_c>("Odessey", 10);
		army->Formation(army_c::combatFormation_t::WEDGE);
		break;
	case force_t::INFANTRY_FORCE:
		army = std::make_unique<greekInfantryArmy_c>("Odessey", 85);
		army->Formation(army_c::combatFormation_t::PIG);
		break;
	}

	return army.release();
}



