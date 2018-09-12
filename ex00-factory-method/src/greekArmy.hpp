/*
 * greekArmy.hpp
 *
 *  Created on: 6 сент. 2018 г.
 *      Author: moskw
 */

#ifndef GREEKARMY_HPP_
#define GREEKARMY_HPP_

#include "army.hpp"

class greekInfantryArmy_c : public army_c
{
public:
	greekInfantryArmy_c(const std::string &name, std::uint32_t count) noexcept;
	virtual ~greekInfantryArmy_c(){}
	virtual void Attack() noexcept;
	virtual void Defend() noexcept;
};

class greekCavalryArmy_c : public army_c
{
public:
	greekCavalryArmy_c(const std::string &name, std::uint32_t count) noexcept;
	virtual ~greekCavalryArmy_c(){}
	virtual void Attack() noexcept;
	virtual void Defend() noexcept;
};

class greekArcherArmy_c : public army_c
{
public:
	greekArcherArmy_c(const std::string &name, std::uint32_t count) noexcept;
	virtual ~greekArcherArmy_c(){}
	virtual void Attack() noexcept;
	virtual void Defend() noexcept;
};

#endif /* GREEKARMY_HPP_ */
