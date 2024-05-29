#include "CComputer.h"
#include <iostream>
#include <cstdlib>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void CComputer::SetComputerPerformance(float computerPerformence) {
	CComputer::computerPerformance = computerPerformence;
}
float CComputer::GetComputerPerformance() {
	return CComputer::computerPerformance;
}

void CComputer::SetProcessorName(string processorName) {
	CComputer::processorName = processorName;
}
string CComputer::GetProcessorName() {
	return CComputer::processorName;
}

void CComputer::calculate() {
	int number1, number2;
	cout << "Enter first number (int): " << endl;
	cin >> number1;
	cout << "Enter second number (int): " << endl;
	cin >> number2;
	cout << "Sum is: " << number1 + number2 << endl;
}

void CComputer::calculate(int number1, int number2) {
	cout << "Sum of entered 2 numbers is " << number1 + number2 << endl;
}

void CComputer::OverclockProcessor() {
	std::srand(time(0));
	int overlockingModifier = (std::rand() % 2 + 1);
	CComputer::SetComputerPerformance(CComputer::computerPerformance + overlockingModifier);
	cout << "Processor have beed overlocked" << endl;

}

void CComputer::AddProcessorModelNumber(string modelNumber) {
	string processorName = CComputer::GetProcessorName();
	CComputer::SetProcessorName(CComputer::processorName + modelNumber);
	
}

CComputer::CComputer() :
	CDevice() {
	CComputer::computerPerformance = 1;
	CComputer::processorName = "Processor 0";
}
