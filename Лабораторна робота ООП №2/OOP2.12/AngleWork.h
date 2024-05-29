#pragma once
#include<iostream>
#include<cmath>
#define P 3.1415926


using std::cout;
using std::cin;
using std::endl;


double CosTransformRad(double angle) {
	return cos(angle);
}

double SinTransformRad(double angle) {
	return sin(angle);
}

double CosTransformDeg(double angle) {
	double cosin;
	double trAngle = angle*P/180;
	cosin = cos(trAngle);
	if (cosin < 0.01) {
		cosin = 0;
	}
	return cosin;
}

double SinTransformDeg(double angle) {
	double sinn;
	double trAngle = angle*P/180;
	sinn = sin(trAngle);
	if (sinn < 0.01) {
		sinn = 0;
	}
	return sinn;
}

