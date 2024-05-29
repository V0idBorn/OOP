#include <iostream>
#include "Matrix.h"
#include"SwitchParts.h"

int main() {
	int userChoice;
	int columns, rows;

	cout << "Enter number of columns: ";
	cin >> columns;
	cout << "Enter number of rows: ";
	cin >> rows;

	cout << "\nChoose the type of data of your matrix:\n1.Int.\n2.Float\n3.Double\n4.Char\n\nChoice: ";
	cin >> userChoice;
	switch (userChoice)
	{
	case 1:
		caseInt(columns, rows);
		break;
	case 2:
		caseFloat(columns, rows);
		break;
	case 3:
		caseDouble(columns, rows);
		break;
	case 4:
		caseChar(columns, rows);
		break;
	default:
		break;
	}

	return 0;
}
