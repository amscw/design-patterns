/*
 * army.hpp
 *
 *  Created on: 5 сент. 2018 г.
 *      Author: moskw
 */

#ifndef ARMY_HPP_
#define ARMY_HPP_

class army_c
{
	std::string m_strName;
	std::uint32_t m_nAmount;

public:
	enum class force_t : std::uint32_t {
		INFANTRY_FORCE, CAVALRY_FORCE, ARCHER_FORCE
	};

	enum class combatFormation_t : std::uint32_t {
		WEDGE, ROW, PIG, CHESS
	};

	army_c() noexcept : m_strName("fake_squad"), m_nAmount(0), m_forceType(force_t::INFANTRY_FORCE) {};
	army_c(const std::string &name, std::uint32_t count, force_t type) noexcept;
	virtual ~army_c(){}

	void MoveToPosition(std::uint32_t xCoord, std::uint32_t yCoord) noexcept;
	void Formation(combatFormation_t formation) noexcept;
	void Attack() noexcept;
	void Defend() noexcept;
	void BackOff() noexcept;

private:
	force_t m_forceType;

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
