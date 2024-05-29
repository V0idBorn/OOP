#pragma once
#include <iostream>
#include"ArrayWork.h"



using std::cin;
using std::cout;
using std::endl;



void Program() {
	int numberOfElements, centreOfMatrix;
	int** matrix;
    cout << "Enter number of elements of matrix" << endl;
	cin >> numberOfElements;
	matrix = CreateMatrix(numberOfElements);
	FillMatrixWithOne(matrix, numberOfElements);
	centreOfMatrix = CentreOfMatrix(numberOfElements);
	func(matrix, numberOfElements, centreOfMatrix);
	PrintMatrix(matrix, numberOfElements);
	DeleteMatrix(matrix, numberOfElements);
}
