//============================================================================
// Name        : abstract-factory.cpp
// Author      : moskvin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "abstract-factory.hpp"
#include "rs485msg.hpp"
#include "ethmsg.hpp"

/**
 * Имплеметация конкретных фабрик
 */

void rs485msgFactory_c::CreateCommandMsg(std::shared_ptr<commandMsg_c> &msg, commandMsg_c::cmd_t cmd, std::uint16_t p1, std::uint16_t p2)
{
	msg = std::make_shared<rs485commandMsg_c>(cmd, p1, p2);
}

void rs485msgFactory_c::CreateSignalMsg(std::shared_ptr<signalMsg_c> &msg, signalMsg_c::signal_t sig, std::uint32_t value)
{
	msg = std::make_shared<rs485signalMsg_c>(sig, value);
}


void ethmsgFactory_c::CreateCommandMsg(std::shared_ptr<commandMsg_c> &msg, commandMsg_c::cmd_t cmd, std::uint16_t p1, std::uint16_t p2)
{
	msg = std::make_shared<ethCommandMsg_c>(cmd, p1, p2);
}

void ethmsgFactory_c::CreateSignalMsg(std::shared_ptr<signalMsg_c> &msg, signalMsg_c::signal_t sig, std::uint32_t value)
{
	msg = std::make_shared<ethSignalMsg_c>(sig, value);
}


int main() {
	// !!! WARNING !!! расскоментировать одну из двух строчек:

	// Например, работаем по RS485:
	std::shared_ptr<msgFactory_c> factory = std::make_shared<rs485msgFactory_c>();
	// Или по Ethernet:
	// std::shared_ptr<msgFactory_c> factory = std::make_shared<ethmsgFactory_c>();


	// Бизнес-логика приложения НЕЗАВИСИМА и закрыта для изменений
	// Работа только с абстрактным продуктами!!!
	std::shared_ptr<commandMsg_c> cmdmsg;
	std::shared_ptr<signalMsg_c> sigmsg;
	factory->CreateCommandMsg(cmdmsg, commandMsg_c::cmd_t::CMD_START, 5, 7);
	factory->CreateSignalMsg(sigmsg, signalMsg_c::signal_t::SIG_TEMP, 25);
	cmdmsg->Send();
	cmdmsg->Receive();
	sigmsg->Send();
	sigmsg->Receive();

	return 0;
}
