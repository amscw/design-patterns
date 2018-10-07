/*
 * rs485msg.cpp
 *
 *  Created on: 7 окт. 2018 г.
 *      Author: moskw
 */
#include "rs485msg.hpp"
#include "tracers.hpp"

rs485commandMsg_c::rs485commandMsg_c(commandMsg_c::cmd_t cmd, std::uint16_t p1, std::uint16_t p2) : commandMsg_c(cmd, p1, p2)
{}

void rs485commandMsg_c::Send()
{
	std::ostringstream oss;
	oss << "send command message over RS485:" << std::uppercase << std::hex;
	for (int i = 0; i < static_cast<int>(m_nSize); i++)
		oss << (int)m_pData[i] << ", ";
	TRACE(oss);
}


std::size_t rs485commandMsg_c::Receive()
{
	std::ostringstream oss;
	oss << "receive answer for command over RS485...";
	TRACE(oss);
	return 0;
}

rs485signalMsg_c::rs485signalMsg_c(signalMsg_c::signal_t sig, std::uint32_t value) : signalMsg_c(sig, value)
{}

void rs485signalMsg_c::Send()
{
	std::ostringstream oss;
	oss << "send signal message over RS485:" << std::uppercase << std::hex;
	for (int i = 0; i < static_cast<int>(m_nSize); i++)
		oss << (int)m_pData[i] << ", ";
	TRACE(oss);
}


std::size_t rs485signalMsg_c::Receive()
{
	std::ostringstream oss;
	oss << "receive answer for signal over RS485...";
	TRACE(oss);
	return 0;
}
