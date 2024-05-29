#pragma once
#include <iostream>
#include"AngleWork.h"
#include"FilleWork.h"



using std::cout;
using std::cin;
using std::endl;

void AngleFileProgram() {
	int choice;
	cout << "This program shows you sin and cos of inputed angle." << endl;
	cout << "Choose option:" << endl;
	cout << "1.Add new angle in file.\n2.Show file with angles info." << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		double angle, sin, cos;
		int formOfAngle;
		cout << "Enter angle: ";
		cin >> angle;
		cout << "Form of angle:\n1.Radiant\n2.Deegres" << endl;
		cin >> formOfAngle;
		if (formOfAngle == 1) {
			cos = CosTransformRad(angle);
			sin = SinTransformRad(angle);
			cout << "Cos of " << angle << "radiance = " << cos << endl;
			cout << "Sin of " << angle << "radiance = " << sin << endl;
			AngleInfoFileWriteRadiance(cos, sin, angle);
			break;
		}
		if (formOfAngle == 2){
			cos = CosTransformDeg(angle);
			sin = SinTransformDeg(angle);
			cout << "Cos of " << angle << " degree = " << cos << endl;
			cout << "Sin of " << angle << " degree = " << sin << endl;
			AngleInfoFileWriteDegree(cos, sin, angle);
			break;
		}
	case 2:
		AngleInfoFileShow(GetNumberOfFileStrings());
		break;
	default:
		break;
	}
}

