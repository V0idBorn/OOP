#pragma once
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<string>

using std::ifstream;
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::fstream;
using std::string;

void AngleInfoFileWriteRadiance(double cosin, double sin, double angle) {
	fstream outfile("AngleInfo.txt", std::ios::app);
	if (!outfile) {
		cout << "Cannot open file" << endl;
	}
	outfile.setf(std::ios::left);
	outfile << "Angle(radiance): " << angle << endl;
	outfile << "Sin: " << sin << endl;
	outfile << "Cos: " << cosin << endl;
	outfile.close();
}



void AngleInfoFileWriteDegree(double cosin, double sin, double angle) {
	fstream outfile("AngleInfo.txt", std::ios::app);
	if (!outfile) {
		cout << "Cannot open file" << endl;
	}
	outfile.setf(std::ios::left);
	outfile << "Angle(degree): " << angle << endl;
	outfile << "Sin: " << sin << endl;
	outfile << "Cos: " << cosin << endl;
	outfile.close();
}




int GetNumberOfFileStrings() {
	fstream file("AngleInfo.txt", std::ios::in);
	string line;
	int numberOfLines = 0;
	while (getline(file , line)) {
		numberOfLines++;
	}
	file.close();
	return numberOfLines;
}


void AngleInfoFileShow(int numberOfLines) {
	fstream infile("AngleInfo.txt", std::ios::in);
	string line;
	if (!infile) {
		cout << "Cannot open file" << endl;
	}
	for (int i = 1; i <= numberOfLines; i++) {
		getline(infile, line);
		cout << line << endl;
		if (i % 3 == 0) {
			cout << endl;
			cout << "------------------------";
			cout << endl;
		}
	}
	infile.close();
}