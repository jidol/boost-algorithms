/*
 * AnyOf.cpp
 *
 *  Created on: Jan 30, 2016
 *      Author: ljeff
 */

#include "AnyOf.h"
#include <iostream>
#include "boost/algorithm/cxx11/any_of.hpp"

namespace algorithm {

AnyOf::AnyOf() {
	// TODO Auto-generated constructor stub

}

AnyOf::~AnyOf() {
	// TODO Auto-generated destructor stub
}

void AnyOf::stupidFunction()
{
   std::cout << "Print something stupid" << std::endl;
}

bool AnyOf::isEven(long val)
{
	return ((val % 2) == 0);
}

} /* namespace algorithm */
