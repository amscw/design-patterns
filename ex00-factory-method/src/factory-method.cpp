//============================================================================
// Name        : factory-method.cpp
// Author      : moskvin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "romeCommander.hpp"
#include "greekCommander.hpp"

int main() {
	romeCommander_c cesar;
	cesar.CaptureStrategy(army_c::force_t::CAVALRY_FORCE);

	greekCommander_c odessey;
	odessey.PatrolStrategy(army_c::force_t::INFANTRY_FORCE);

	return 0;
}
