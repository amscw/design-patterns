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

/**
 * Паттерн "фабричный метод" предназначен для инкапсуляции стратегии использования абстрактных объектов
 * в классах-создателях (Creator), которые делегируют процесс создания продуктов (Product) своим наследникам.
 *
 * Суть паттерна - неизменная стратегия использования объекта.
 *
 * Реализация паттерна подразумевает наличие параллельных иерархий:
 * Creator <- ConcreteCreator
 * Product <- ConcreteProduct
 */

int main() {
	romeCommander_c().CaptureStrategy(commander_c::force_t::CAVALRY_FORCE);
	greekCommander_c().PatrolStrategy(commander_c::force_t::INFANTRY_FORCE);
	return 0;
}
