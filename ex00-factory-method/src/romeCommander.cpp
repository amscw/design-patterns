/*
 * romeCommander.cpp
 *
 *  Created on: 5 сент. 2018 г.
 *      Author: moskw
 */

#include "romeCommander.hpp"
#include "romeArmy.hpp"


army_c *romeCommander_c::createArmy(force_t forceType) noexcept
{
	std::unique_ptr<army_c> army;

	switch (forceType)
	{
	case force_t::ARCHER_FORCE:
		army = std::make_unique<romeArcherArmy_c>("Antivirus", 50);
		army->Formation(army_c::combatFormation_t::ROW);
		break;
	case force_t::CAVALRY_FORCE:
		army = std::make_unique<romeCavalryArmy_c>("Antivirus", 15);
		army->Formation(army_c::combatFormation_t::WEDGE);
		break;
	case force_t::INFANTRY_FORCE:
		army = std::make_unique<romeInfantryArmy_c>("Antivirus", 70);
		army->Formation(army_c::combatFormation_t::PIG);
		break;
	}

	return army.release();
}



