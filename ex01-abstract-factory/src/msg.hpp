/*
 * msg.hpp
 *
 *  Created on: 7 окт. 2018 г.
 *      Author: moskw
 */

#ifndef MSG_HPP_
#define MSG_HPP_

#include <iostream>
#include <memory>

/**
 * Абстрактные продукты
 */


class msg_c
{
	const std::size_t MAX_DATA_SIZE = 64;

protected:
	std::uint8_t *m_pData = nullptr;
	const std::size_t m_nSize;

public:
	msg_c(std::size_t size) : m_pData(new std::uint8_t[size]), m_nSize(size) {}
	virtual ~msg_c() { delete [] m_pData; }

	virtual void Send() = 0;
	virtual std::size_t Receive() = 0;
};

class commandMsg_c : public msg_c
{
public:
	enum class cmd_t : std::uint8_t {
		CMD_START, CMD_STOP, CMD_EMERGANCY_STOP, CMD_SLEEP,
	};
	using cmdHeader_t = struct {
		cmd_t cmd;
		std::uint16_t param1;
		std::uint16_t param2;
	} __attribute__((__packed__)) * ;

	commandMsg_c(cmd_t cmd, std::uint16_t p1, std::uint16_t p2);

private:
	const cmdHeader_t phdr;
};


class signalMsg_c : public msg_c
{
public:
	enum class signal_t : std::uint8_t {
		SIG_TEMP, SIG_VOLTAGE, SIG_CURRENT,
	};
	using sigHeader_t = struct {
		signal_t sig;
		std::uint32_t value;
	}__attribute__((__packed__)) * ;

	signalMsg_c(signal_t sig, std::uint32_t value);

private:
	const sigHeader_t phdr;
};


#endif /* MSG_HPP_ */
