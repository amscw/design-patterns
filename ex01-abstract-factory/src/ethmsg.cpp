/*
 * ethmsg.cpp
 *
 *  Created on: 7 окт. 2018 г.
 *      Author: moskw
 */
#include "ethmsg.hpp"
#include "tracers.hpp"


ethCommandMsg_c::ethCommandMsg_c(commandMsg_c::cmd_t cmd, std::uint16_t p1, std::uint16_t p2) : commandMsg_c(cmd, p1, p2)
{}

void ethCommandMsg_c::Send()
{
	std::ostringstream oss;
	oss << "send command message over ETHERNET:" << std::uppercase << std::hex;
	for (int i = 0; i < static_cast<int>(m_nSize); i++)
		oss << (int)m_pData[i] << ", ";
	TRACE(oss);
}


std::size_t ethCommandMsg_c::Receive()
{
	std::ostringstream oss;
	oss << "receive answer for command over ETHERNET...";
	TRACE(oss);
	return 0;
}

ethSignalMsg_c::ethSignalMsg_c(signalMsg_c::signal_t sig, std::uint32_t value) : signalMsg_c(sig, value)
{
}


void ethSignalMsg_c::Send()
{
	std::ostringstream oss;
	oss << "send signal message over ETHERNET:" << std::uppercase << std::hex;
	for (int i = 0; i < static_cast<int>(m_nSize); i++)
		oss <<(int)m_pData[i] << ", ";
	TRACE(oss);
}


std::size_t ethSignalMsg_c::Receive()
{
	std::ostringstream oss;
	oss << "receive answer for signal over ETHERNET...";
	TRACE(oss);
	return 0;
}

