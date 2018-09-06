/*
 * army.cpp
 *
 *  Created on: 5 сент. 2018 г.
 *      Author: moskw
 */
#include <iostream>
#include "tracers.hpp"
#include "army.hpp"


army_c::army_c(const std::string &name, std::uint32_t count) noexcept :
	m_strName(name), m_nAmount(count)
{
	// common create actions
	std::ostringstream oss;
	oss << "creating " << m_nAmount << " " << " warriors \"" << m_strName << "\"...";
	TRACE(oss);
	// ... nothing interest here
}

army_c::~army_c()
{
	std::ostringstream oss;
	oss << m_strName << ": we are dismissed!";
	TRACE(oss);
}

void army_c::MoveToPosition(std::uint32_t xCoord, std::uint32_t yCoord) noexcept
{
	std::ostringstream oss;
	oss << m_strName << ": we are moving to (" << xCoord << ", " << yCoord << ")";
	TRACE(oss);
}

void army_c::Formation(combatFormation_t formation) noexcept
{
	std::ostringstream oss;
	oss << m_strName << ": we formation to " << formationToString(formation);
	TRACE(oss);
}

void army_c::Attack() noexcept
{
	std::ostringstream oss;
	oss << m_strName << ": we attack!";
	TRACE(oss);
}

void army_c::Defend() noexcept
{
	std::ostringstream oss;
	oss << m_strName << ": we defend!";
	TRACE(oss);
}
