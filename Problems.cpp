/*
 * Problems.cpp
 *
 *  Created on: Sep 10, 2015
 *      Author: Trevor
 */

#include <iostream>
using namespace std;

int threeFive(int currInt) {
	if (currInt == 1000)
		return 0;
	else if (currInt % 3 == 0 || currInt % 5 == 0)
		return currInt + threeFive(currInt + 1);
	else
		return threeFive(currInt + 1);
}

int evenFib(double max) {
	int prevTwo = 1;
	int prevOne = 2;
	int nextFib = prevTwo + prevOne;
	int evenSum = 2;

	while (nextFib < max) {
		if (nextFib % 2 == 0)
			evenSum = evenSum + nextFib;

		prevTwo = prevOne;
		prevOne = nextFib;
		nextFib = prevTwo + prevOne;
	}

	return evenSum;
}

int main() {
	cout << "Problem 1 - Sum of all integers divisible by 3 and 5 below 1,000: " << threeFive(0) << "\n";
	cout << "Problem 2 - Sum of all even Fibonacci numbers below 4,000,000: " << evenFib(4000000) << "\n";
}

