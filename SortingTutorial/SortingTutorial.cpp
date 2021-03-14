// SortingTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
// - Create argc/argv.
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include "method.h"

using namespace std;

/*
int main(int argc, char* argv[]) {
	int i;
	for (i = 0; i < argc; i++) {
		printf("argv[%d]: %s\n", i, argv[i]);
	}
}
*/

int main(int argc, char* argv[]) {
	const int SIZE = 99;
	int values[SIZE];
	int numCount;
	string h = argv[1];
	
	numCount = readFile(SIZE, values, h);
	cout << "There are total of " << numCount << " numbers." << endl;

	if (numCount <= 0) {
		return -1;
	}

	sortArray(values, numCount);

	writeFile(numCount, values, h);
	
	return 0;
}

