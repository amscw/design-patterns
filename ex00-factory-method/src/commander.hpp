/*
 * commander.hpp
 *
 *  Created on: 5 сент. 2018 г.
 *      Author: moskw
 */

#ifndef COMMANDER_HPP_
#define COMMANDER_HPP_

#include <memory>
#include "army.hpp"

/**
 * Класс инкапсулирует стратегию управления войсками. Стратегия остается неизменной.
 * Класс абстрагируется от принадлежнсоти рода войск к конкретной фракции
 */
class commander_c
{
public:
	enum class force_t : std::uint32_t {
		INFANTRY_FORCE, CAVALRY_FORCE, ARCHER_FORCE
	};
	virtual ~commander_c(){}
	void PatrolStrategy(force_t) noexcept;		// !!! well-known logic !!!
	void CaptureStrategy(force_t) noexcept;		// !!! well-known logic !!!

protected:
	inline std::string forceTypeToString(force_t t) const noexcept {
		switch (t)
		{
		case force_t::INFANTRY_FORCE: return "infantry";
		case force_t::CAVALRY_FORCE: return "cavalry";
		case force_t::ARCHER_FORCE: return "archer";
		default: return "unknown";
		}
	}
	virtual army_c *createArmy(force_t) noexcept = 0;		// !!! factory method !!!


};


#endif /* COMMANDER_HPP_ */
