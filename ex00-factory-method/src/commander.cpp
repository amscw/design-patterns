/*
 * commander.cpp
 *
 *  Created on: 5 сент. 2018 г.
 *      Author: moskw
 */


#include "commander.hpp"

void commander_c::PatrolStrategy(force_t forceType) noexcept
{
	std::unique_ptr<army_c> army(createArmy(forceType));

	army->MoveToPosition(0, 100);
	army->Defend();
	army->MoveToPosition(100, 100);
	army->Defend();
	army->MoveToPosition(100, 0);
	army->Defend();
	army->MoveToPosition(0, 0);
	army->Defend();
}

void commander_c::CaptureStrategy(force_t forceType) noexcept
{
	std::unique_ptr<army_c> army(createArmy(forceType));

	army->MoveToPosition(100, 100);
	army->Attack();
	army->Defend();
}

