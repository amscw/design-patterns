/*
 * greekArmy.cpp
 *
 *  Created on: 6 сент. 2018 г.
 *      Author: moskw
 */
#include <iostream>
#include "tracers.hpp"
#include "greekArmy.hpp"

greekInfantryArmy_c::greekInfantryArmy_c(const std::string &name, std::uint32_t count) noexcept :
	army_c(name, count)
{
	std::ostringstream oss;
	// any class-specific creation
	// ...
	oss << "Greek infantry created!";
	TRACE(oss);
}

void greekInfantryArmy_c::Attack() noexcept
{
	std::ostringstream oss;
	oss << m_strName << ": Greek infantry attack!";
	TRACE(oss);
}

void greekInfantryArmy_c::Defend() noexcept
{
	std::ostringstream oss;
	oss << m_strName << ": Greek infantry defend!";
	TRACE(oss);
}

greekCavalryArmy_c::greekCavalryArmy_c(const std::string &name, std::uint32_t count) noexcept :
	army_c(name, count)
{
	std::ostringstream oss;
	// any class-specific creation
	// ...
	oss << "Greek cavalry created!";
	TRACE(oss);
}

void greekCavalryArmy_c::Attack() noexcept
{
	std::ostringstream oss;
	oss << m_strName << ": Greek cavalry attack!";
	TRACE(oss);
}

void greekCavalryArmy_c::Defend() noexcept
{
	std::ostringstream oss;
	oss << m_strName << ": Greek cavalry defend!";
	TRACE(oss);
}

greekArcherArmy_c::greekArcherArmy_c(const std::string &name, std::uint32_t count) noexcept :
	army_c(name, count)
{
	std::ostringstream oss;
	// any class-specific creation
	// ...
	oss << "Greek archer created!";
	TRACE(oss);
}

void greekArcherArmy_c::Attack() noexcept
{
	std::ostringstream oss;
	oss << m_strName << ": Greek archer attack!";
	TRACE(oss);
}

void greekArcherArmy_c::Defend() noexcept
{
	std::ostringstream oss;
	oss << m_strName << ": Greek archer defend!";
	TRACE(oss);
}
