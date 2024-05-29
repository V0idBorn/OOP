#include "CSmartphone.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void CSmartphone::SetPrice(float price) {
	CSmartphone::price = price;
}
float CSmartphone::GetPrice() {
	return CSmartphone::price;
}

void CSmartphone::SetIsWaterproof(bool isWaterproof) {
	CSmartphone::isWaterproof = isWaterproof;
}
bool CSmartphone::GetIsWaterProof() {
	return CSmartphone::isWaterproof;
}

void CSmartphone::UnlockPhone() {
	cout << "Phone is unlocked" << endl;
}

void CSmartphone::LockPhone() {
	cout << "Phone is locked" << endl;
}

void CSmartphone::TurnOff() {
	cout << "Phone is turned off" << endl;
}

CSmartphone::CSmartphone() :
	CComputer::CComputer(), CPhone::CPhone() {
	CSmartphone::price = 1;
	CSmartphone::isWaterproof = true;
}

   void PlayGame(){
	int userChoice;
	int randomNumber = (std::rand() % 10 + 1);
	cout << "Guess a number between 1 and 10" << endl;
	cin >> userChoice;
	if (userChoice == randomNumber) {
		cout << "You win !";
	}
	else {
		cout << "You lost , that was " << randomNumber;
	}
	
}