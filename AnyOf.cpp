/*
 * AnyOf.cpp
 *
 *  Created on: Jan 30, 2016
 *      Author: ljeff
 */

#include "AnyOf.h"
#include "random.h"
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
	std::vector<long> data = random::randomLong(2);
	for(std::vector<long>::iterator iter = data.begin(); iter != data.end(); ++iter)
	{
		std::cout << "Random data:  " << *iter << std::endl;
	}
	bool anyEven = boost::algorithm::any_of(data.begin(), data.end(), AnyOf::isEven);
   std::cout << "Where any of the random numbers even:  " << anyEven << std::endl;
}

bool AnyOf::isEven(long val)
{
	return ((val % 2) == 0);
}

} /* namespace algorithm */
