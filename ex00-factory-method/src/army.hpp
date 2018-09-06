/*
 * army.hpp
 *
 *  Created on: 5 сент. 2018 г.
 *      Author: moskw
 */

#ifndef ARMY_HPP_
#define ARMY_HPP_

// #include <iostream>

class army_c
{
protected:
	std::string m_strName;
	std::uint32_t m_nAmount;

public:
	enum class combatFormation_t : std::uint32_t {
		WEDGE, ROW, PIG, CHESS
	};

	army_c() noexcept : m_strName("fakesquad"), m_nAmount(0) {};
	army_c(const std::string &name, std::uint32_t count) noexcept;
	virtual ~army_c();

	virtual void MoveToPosition(std::uint32_t xCoord, std::uint32_t yCoord) noexcept;
	virtual void Formation(combatFormation_t formation) noexcept;
	virtual void Attack() noexcept;
	virtual void Defend() noexcept;

protected:
	inline std::string formationToString(combatFormation_t f) const noexcept {
		switch (f)
		{
		case combatFormation_t::CHESS: return "chess";
		case combatFormation_t::PIG: return "pig";
		case combatFormation_t::ROW: return "row";
		case combatFormation_t::WEDGE: return "wedge";
		default: return "unknown";
		}
	}
};


#endif /* ARMY_HPP_ */
