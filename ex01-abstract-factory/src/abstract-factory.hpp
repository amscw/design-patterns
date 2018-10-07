/*
 * abstract-factory.hpp
 *
 *  Created on: 7 ���. 2018 �.
 *      Author: moskw
 */

#ifndef ABSTRACT_FACTORY_HPP_
#define ABSTRACT_FACTORY_HPP_

#include "msg.hpp"


/**
 * ����������� �������
 */
class msgFactory_c
{
public:
	virtual void CreateCommandMsg(std::shared_ptr<commandMsg_c> &msg, commandMsg_c::cmd_t cmd, std::uint16_t p1, std::uint16_t p2) = 0;
	virtual void CreateSignalMsg(std::shared_ptr<signalMsg_c> &msg, signalMsg_c::signal_t sig, std::uint32_t value) = 0;
	virtual ~msgFactory_c(){}
};

/**
 * ������� ���������, ������������ �� RS485
 */
class rs485msgFactory_c : public msgFactory_c
{
public:
	void CreateCommandMsg(std::shared_ptr<commandMsg_c> &msg, commandMsg_c::cmd_t cmd, std::uint16_t p1, std::uint16_t p2);
	void CreateSignalMsg(std::shared_ptr<signalMsg_c> &msg, signalMsg_c::signal_t sig, std::uint32_t value);
};


/**
 * ������� ���������, ������������ �� ethernet
 */
class ethmsgFactory_c : public msgFactory_c
{
public:
	void CreateCommandMsg(std::shared_ptr<commandMsg_c> &msg, commandMsg_c::cmd_t cmd, std::uint16_t p1, std::uint16_t p2);
	void CreateSignalMsg(std::shared_ptr<signalMsg_c> &msg, signalMsg_c::signal_t sig, std::uint32_t value);
};

#endif /* ABSTRACT_FACTORY_HPP_ */
