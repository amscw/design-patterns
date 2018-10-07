/*
 * msg.cpp
 *
 *  Created on: 7 окт. 2018 г.
 *      Author: moskw
 */

#include "msg.hpp"

commandMsg_c::commandMsg_c(cmd_t cmd, std::uint16_t p1, std::uint16_t p2) : msg_c(sizeof(cmdHeader_t)), phdr(reinterpret_cast<cmdHeader_t>(m_pData))
{
	phdr->cmd = cmd;
	phdr->param1 = p1;
	phdr->param2 = p2;
	// calc crc, if need ...
}

signalMsg_c::signalMsg_c(signal_t sig, std::uint32_t value) : msg_c(sizeof(sigHeader_t)), phdr(reinterpret_cast<sigHeader_t>(m_pData))
{
	phdr->sig = sig;
	phdr->value = value;
	// calc crc, if need
}

