#include <iostream>
#include"ArrayWork.h"



using std::cout;
using std::cin;
using std::endl;



int main(void) {
	int lenght, choice;
	cout << "Enter how much number in array?\n";
	cin >> lenght;
	cout << "Numbers even or fractional?\n1.Even.\n2.Fractional.\n";
	cin >> choice;
	int* intNums;
	double* doubleNums;

	switch (choice){
		case 1:
			intNums = IntArray(lenght);
			cout << func(intNums, lenght) << " even numbers in array";
			delete intNums;
			break;
		case 2:
			doubleNums = DoubleArray(lenght);
			cout << func(doubleNums, lenght) << " even numbers in array";
			delete doubleNums;
			break;
		default:
			return 0;
			break;
    }

	return 0;
}