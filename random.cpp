/*
 * random.cpp
 *
 *  Created on: Jan 30, 2016
 *      Author: Jeff Idol
 */

#include "random.h"
#include <ctime>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_int_distribution.hpp>




random::random() {
	// TODO Auto-generated constructor stub

}

random::~random() {
	// TODO Auto-generated destructor stub
}

std::vector<long> random::randomLong(int size, long start, long end)
{
	boost::random::mt19937 gen(std::time(0));
	std::vector<long> output;
	boost::random::uniform_int_distribution<> dist(start, end);

	for(int i=0; i < size; ++i)
	{
		output.push_back(dist(gen));
	}

	return output;
}
