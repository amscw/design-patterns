/*
 * rs485msg.hpp
 *
 *  Created on: 7 окт. 2018 г.
 *      Author: moskw
 */

#ifndef RS485MSG_HPP_
#define RS485MSG_HPP_

#include "msg.hpp"

/**
 * Конкретные продукты
 */

class rs485commandMsg_c : public commandMsg_c
{
public:
	rs485commandMsg_c(commandMsg_c::cmd_t cmd, std::uint16_t p1, std::uint16_t p2);
	void Send();
	std::size_t Receive();
};


class rs485signalMsg_c : public signalMsg_c
{
public:
	rs485signalMsg_c(signalMsg_c::signal_t sig, std::uint32_t value);
	void Send();
	std::size_t Receive();
};


#endif /* RS485MSG_HPP_ */
