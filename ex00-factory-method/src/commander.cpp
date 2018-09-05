/*
 * commander.cpp
 *
 *  Created on: 5 сент. 2018 г.
 *      Author: moskw
 */


#include "commander.hpp"

void commander_c::PatrolStrategy(army_c::force_t forceType) noexcept
{
	std::shared_ptr<army_c> army(createArmy(forceType));

	army->MoveToPosition(0, 100);
	army->Defend();
	army->MoveToPosition(100, 100);
	army->Defend();
	army->MoveToPosition(100, 0);
	army->Defend();
	army->MoveToPosition(0, 0);
	army->Defend();
}

void commander_c::CaptureStrategy(army_c::force_t forceType) noexcept
{
	std::shared_ptr<army_c> army(createArmy(forceType));

	army->MoveToPosition(100, 100);
	army->Attack();
	army->Defend();
}

