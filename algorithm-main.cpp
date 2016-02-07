/*
 * algorithm-main.cpp
 *
 *  Created on: Jan 30, 2016
 *      Author: ljeff
 */

#include "AnyOf.h"
#include <iostream>

int main(int argv, char** argc)
{
	std::cout << "Main:  " << std::endl;
	algorithm::AnyOf* any = new algorithm::AnyOf();

	any->stupidFunction();

	delete any;
	any = 0;

	return 0;
}
