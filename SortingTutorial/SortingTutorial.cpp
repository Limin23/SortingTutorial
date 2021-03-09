// SortingTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>
#include "method.h"

using namespace std;

int main() {
	const int SIZE = 99;
	int values[SIZE];
	int numCount;
	
	numCount = readFile(SIZE, values);
	cout << numCount << endl;

	if (numCount <= 0) {
		return -1;
	}

	sortArray(values, numCount);

	writeFile(numCount, values);
	return 0;
}

