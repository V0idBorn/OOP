#pragma once
#include <iostream>



using std::cin;
using std::cout;
using std::endl;


int** CreateMatrix(int numberOFElements) {
	int** matrix = new int*[numberOFElements];
	for (int i = 0; i < numberOFElements; i++) {
		matrix[i] = new int[numberOFElements];
	}
	return matrix;
}


void FillMatrixWithOne(int** matrix, int numberOfElements) {
	for (int i = 0; i < numberOfElements; i++) {
		for (int j = 0; j < numberOfElements; j++) {
			matrix[i][j] = 1;
		}
	}
}

int CentreOfMatrix(int numberOfElements) {
	if (numberOfElements % 2 == 0) {
		return numberOfElements / 2;
	}
	if (numberOfElements % 2 != 0) {
		return (numberOfElements / 2) + 1;
	}
}





void func(int** matrix, int numberOfElements , int centreOfMatrix) {
	for (int i = 0; i < centreOfMatrix; i++) {
		for (int j = 0; j < centreOfMatrix; j++) {
			matrix[i][j] = 0;
		}
    }
	for (int i = centreOfMatrix; i < numberOfElements; i++) {
		for (int j = centreOfMatrix; j < numberOfElements; j++) {
			matrix[i][j] = 0;
		}
	}
}


void PrintMatrix(int** matrix, int numberOfElements) {
	for (int i = 0; i < numberOfElements; i++) {
		cout << endl;
		for (int j = 0; j < numberOfElements; j++) {
			cout << matrix[i][j] << "\t";
		}
	}
}

void DeleteMatrix(int** matrix, int numberOfElements) {
	for (int i = 0; i < numberOfElements; i++) {
		free(matrix[i]);
	}
	free(matrix);
}