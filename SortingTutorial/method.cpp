#include <iostream>
#include <fstream>
#include "method.h"
using namespace std;

//method for running through the code for now;
//will be expanded in the future.

void sortArray(int values[], int size) {
	int temp;
	for (int i = 0; i < size; i++) {
		int minValue = values[i];
		int minIndex = i;
		//A second for loop here allows for sorting while on a single index before the loop moves onto a
		//Second iteration for the i value.
		//Current algorithm would swap through every single smaller value, whihc would make the code slower...
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


int writeFile(int numCount, int values[])
{
	ofstream fileWrite;
	fileWrite.open("numFile.txt");
	int inputN;

	for (int i = 0; i < numCount; i++)
	{
		inputN = values[i];
		fileWrite << inputN << endl;
	}

	fileWrite.close();
	return 0;
}



int readFile(int size, int values[])
{
	ifstream fileRead;
	fileRead.open("numFile.txt");
	int numInput;
	int number = 0;

	while (fileRead >> values[number] && number < size)
	{
		number++;
	}

	fileRead.close();
	return number;
}