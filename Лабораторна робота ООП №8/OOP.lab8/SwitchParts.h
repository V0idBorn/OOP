#pragma once

#include <iostream>
#include "Matrix.h"


void caseInt(int columns , int rows) {
	Matrix<int>matrix(columns, rows);
	matrix.FillMatrixWithElements();
	matrix.PrintMatrix();
	matrix.GetRowWithHighestNumberRow();
}

void caseFloat(int columns, int rows) {
	Matrix <float> matrix(columns, rows);
	matrix.FillMatrixWithElements();
	matrix.PrintMatrix();
	matrix.GetRowWithHighestNumberRow();
}

void caseDouble(int columns, int rows) {
	Matrix <double> matrix(columns, rows);
	matrix.FillMatrixWithElements();
	matrix.PrintMatrix();
	matrix.GetRowWithHighestNumberRow();
}

void caseChar(int columns, int rows) {
	Matrix <char> matrix(columns, rows);
	matrix.FillMatrixWithElements();
	matrix.PrintMatrix();
	matrix.GetRowWithHighestNumberRow();
}
