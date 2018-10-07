/*
 * ethmsg.hpp
 *
 *  Created on: 7 окт. 2018 г.
 *      Author: moskw
 */

#ifndef ETHMSG_HPP_
#define ETHMSG_HPP_

#include "msg.hpp"

class ethCommandMsg_c : public commandMsg_c
{
public:
	ethCommandMsg_c(commandMsg_c::cmd_t cmd, std::uint16_t p1, std::uint16_t p2);
	void Send();
	std::size_t Receive();
};


class ethSignalMsg_c : public signalMsg_c
{
public:
	ethSignalMsg_c(signalMsg_c::signal_t sig, std::uint32_t value);
	void Send();
	std::size_t Receive();
};


#endif /* ETHMSG_HPP_ */
