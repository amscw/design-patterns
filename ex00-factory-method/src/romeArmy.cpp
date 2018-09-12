/*
 * romeArmy.cpp
 *
 *  Created on: 6 сент. 2018 г.
 *      Author: moskw
 */
#include <iostream>
#include "tracers.hpp"
#include "romeArmy.hpp"

romeInfantryArmy_c::romeInfantryArmy_c(const std::string &name, std::uint32_t count) noexcept :
	army_c(name, count)
{
	std::ostringstream oss;
	// any class-specific creation
	// ...
	oss << "Rome infantry created!";
	TRACE(oss);
}

void romeInfantryArmy_c::Attack() noexcept
{
	std::ostringstream oss;
	oss << m_strName << ": Rome infantry attack!";
	TRACE(oss);
}

void romeInfantryArmy_c::Defend() noexcept
{
	std::ostringstream oss;
	oss << m_strName << ": Rome infantry defend!";
	TRACE(oss);
}

romeCavalryArmy_c::romeCavalryArmy_c(const std::string &name, std::uint32_t count) noexcept :
	army_c(name, count)
{
	std::ostringstream oss;
	// any class-specific creation
	// ...
	oss << "Rome cavalry created!";
	TRACE(oss);
}

void romeCavalryArmy_c::Attack() noexcept
{
	std::ostringstream oss;
	oss << m_strName << ": Rome cavalry attack!";
	TRACE(oss);
}

void romeCavalryArmy_c::Defend() noexcept
{
	std::ostringstream oss;
	oss << m_strName << ": Rome cavalry defend!";
	TRACE(oss);
}

romeArcherArmy_c::romeArcherArmy_c(const std::string &name, std::uint32_t count) noexcept :
	army_c(name, count)
{
	std::ostringstream oss;
	// any class-specific creation
	// ...
	oss << "Rome archer created!";
	TRACE(oss);
}

void romeArcherArmy_c::Attack() noexcept
{
	std::ostringstream oss;
	oss << m_strName << ": Rome archer attack!";
	TRACE(oss);
}

void romeArcherArmy_c::Defend() noexcept
{
	std::ostringstream oss;
	oss << m_strName << ": Rome archer defend!";
	TRACE(oss);
}
