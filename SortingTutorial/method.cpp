#include <iostream>
#include <fstream>
#include <string>
#include "method.h"
using namespace std;

//method for running through the code for now;
//will be expanded in the future.

void sortArray(int values[], int size) {
	int temp;
	for (int i = 0; i < size; i++) {
		int minValue = values[i];
		int minIndex = i;
		for (int j = i; j < size; j++) {
			if (values[j] < minValue) {
				minValue = values[j];
				minIndex = j;
			}
		}
		temp = values[i];
		values[i] = values[minIndex];
		values[minIndex] = temp;

		cout << values[i] << endl;
	}
}


int writeFile(int numCount, int values[], string n)
{
	ofstream fileWrite;
	fileWrite.open(n);
	int inputN;

	for (int i = 0; i < numCount; i++)
	{
		inputN = values[i];
		fileWrite << inputN << endl;
	}

	fileWrite.close();
	return 0;
}

int readFile(int size, int values[], string n)
{
	ifstream fileRead;
	fileRead.open(n);
	int number = 0;

	while (fileRead >> values[number] && number < size)
	{
		number++;
	}

	fileRead.close();
	return number;
}