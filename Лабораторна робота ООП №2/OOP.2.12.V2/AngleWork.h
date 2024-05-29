#pragma once

#pragma once
#include<iostream>
#include<cmath>
#define P 3.1415926


using std::cout;
using std::cin;
using std::endl;


float CosTransformRad(double angle) {
	return cos(angle);
}

float SinTransformRad(double angle) {
	return sin(angle);
}

float CosTransformDeg(double angle) {
	double cosin;
	double trAngle = angle * P / 180;
	cosin = cos(trAngle);
	if (cosin < 0.01) {
		cosin = 0;
	}
	return cosin;
}

float SinTransformDeg(double angle) {
	double sinn;
	double trAngle = angle * P / 180;
	sinn = sin(trAngle);
	if (sinn < 0.01) {
		sinn = 0;
	}
	return sinn;
}

