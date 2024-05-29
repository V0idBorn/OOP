#pragma once
#include <iostream>

using namespace std;

template <typename T >
class Matrix
{
private:
	int columns;
	int rows;
	T** matrix;
public:


	Matrix(int columns, int rows) {
		this -> columns = columns;
		this -> rows = rows;
		this -> matrix = new T*[columns];
		for (int i = 0; i < columns; i++) {
			Matrix::matrix[i] = new T[rows];
		}
	}

	void SetColomns(int colomns){
		Matrix::columns = colomns;
	}
	int GetColomns() {
		return Matrix::columns;
	}

	void SetRows(int rows) {
		Matrix::rows = rows;
	}
	int GetRows() {
		return Matrix::rows;
	}

	void SetMatrix(T** matrix) {
		Matrix::matrix = matrix;
	}

    T** GetMatrix() {
		return Matrix::matrix;
	}

	void FillMatrixWithElements() {
		for (int i = 0; i < Matrix::columns; i++) {
			for (int j = 0; j < Matrix::rows; j++) {
				cout << "Enter element" << "[" << i + 1 << "]" << "[" << j + 1 << "]: ";
				cin >> Matrix::matrix[i][j];

			}
		}
	}

	void PrintMatrix() {
		cout << "Your matrix: " << endl;
		for (int i = 0; i < Matrix::columns; i++) {
			for (int j = 0; j < Matrix::rows; j++) {
				cout << Matrix::matrix[i][j] << " ";
			}
			cout << endl;
		}
	}

	void GetRowWithHighestNumberRow() {
		int generalCounter = 0;
		int counter = 1;
		int rowWithHighest = 1;


		for (int i = 0; i < Matrix::columns; i++) {
			for (int j = 0; j < Matrix::rows; j++) {
				counter = 1;
				for (int k = j + 1; k < Matrix::rows; k++) {
					if (Matrix::matrix[i][j] == Matrix::matrix[i][k]) {
						counter++;
					}
					else
						counter = 1;
					if (counter > 1) {
						rowWithHighest = i;
					}
						
				}
			}
			if (counter > generalCounter) {
				generalCounter = counter;
			}
		}
		cout << "Row with highest row of same numbers: " << rowWithHighest+1 << endl;
		cout << "{ ";
		for (int i = 0; i < Matrix::columns; i++) {
			cout << Matrix::matrix[rowWithHighest][i] << " ";
		}
		cout << "}";
	}

};

