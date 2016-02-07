/*
 * random.h
 *
 *  Created on: Jan 30, 2016
 *      Author: ljeff
 */

#ifndef RANDOM_H_
#define RANDOM_H_

namespace util {

#include <vector>

class random {
public:
	random();
	virtual ~random();

	std::vector<long> randomLong(int size, long start, long end);
};

} /* namespace util */

#endif /* RANDOM_H_ */
