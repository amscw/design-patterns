/*
 * romeArmy.hpp
 *
 *  Created on: 6 сент. 2018 г.
 *      Author: moskw
 */

#ifndef ROMEARMY_HPP_
#define ROMEARMY_HPP_

#include "army.hpp"

class romeInfantryArmy_c : public army_c
{
public:
	romeInfantryArmy_c(const std::string &name, std::uint32_t count) noexcept;
	virtual ~romeInfantryArmy_c(){}
	virtual void Attack() noexcept;
	virtual void Defend() noexcept;
};

class romeCavalryArmy_c : public army_c
{
public:
	romeCavalryArmy_c(const std::string &name, std::uint32_t count) noexcept;
	virtual ~romeCavalryArmy_c(){}
	virtual void Attack() noexcept;
	virtual void Defend() noexcept;
};

class romeArcherArmy_c : public army_c
{
public:
	romeArcherArmy_c(const std::string &name, std::uint32_t count) noexcept;
	virtual ~romeArcherArmy_c(){}
	virtual void Attack() noexcept;
	virtual void Defend() noexcept;
};

#endif /* ROMEARMY_HPP_ */
