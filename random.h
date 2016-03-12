/*
 * random.h
 *
 *  Created on: Jan 30, 2016
 *      Author: ljeff
 */

#ifndef RANDOM_H_
#define RANDOM_H_

#include <vector>

class random {
public:
	random();
	virtual ~random();

	static std::vector<long> randomLong(int size, long start=0, long end=1000);
};


#endif /* RANDOM_H_ */
