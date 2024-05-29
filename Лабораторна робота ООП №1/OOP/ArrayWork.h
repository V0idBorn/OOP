#pragma once
#include <iostream>
#include <math.h>


using std::cout;
using std::cin;
using std::endl;

int func(int* array, int lenght) {
	int numberOfEvenElements = 0;
	for (int i = 0; i < lenght; i++) {
		if (array[i] % 2 == 0) {
			numberOfEvenElements += 1;
		}
    }
	return numberOfEvenElements;
}

bool IsApproximatelyInt(double number1, double epsilone = 0.001) {
	return number1 - (int)number1 <= epsilone;
}


int func(double* array, int lenght) {
	int numberOfEvenElements = 0;
	for (int i = 0; i < lenght; i++) {
		if (IsApproximatelyInt(array[i]) && (int)array[i] % 2 == 0) {
			numberOfEvenElements++;
		}
	}
	return numberOfEvenElements;
}


int* IntArray(int lenght) {
	int* evenNums = new int[lenght];
	for (int i = 0 , element = 1 ; i < lenght; i++ , element++) {
		cout << "Enter " << element << " element: " << endl;
		cin >> evenNums[i];
    }
	return evenNums;
}


double* DoubleArray(int lenght) {
	double* doubleNums = new double[lenght];
	for (int i = 0 , element = 1; i < lenght; i++ , element++) {
		cout << "Enter " << element << " element: " << endl;
		cin >> doubleNums[i];
	}
	return doubleNums;
}