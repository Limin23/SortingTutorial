// SortingTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
// - Create argc/argv.
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <stdio.h> q
#include "method.h"

using namespace std;

int main(int argc, char* argv[]) {
	const int SIZE = 99;
	int values[SIZE];
	int numCount, stringL, repS;
	string h = argv[1];
	string n = argv[2];

	cout << "Reading the file: " << h << endl;
	numCount = readFile(SIZE, values, h);
	cout << "There are total of " << numCount << " numbers." << endl;

	if (numCount <= 0) {
		return -1;
	}

	sortArray(values, numCount);

	writeFile(numCount, values, n);
	
	return 0;
}

