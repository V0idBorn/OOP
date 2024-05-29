#pragma once
#include"CPhone.h"
#include "CComputer.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class CSmartphone :
	public CPhone,
	public CComputer

{
private:
	float price;
	bool isWaterproof;

public:
	void SetPrice(float);
	float GetPrice();

	void SetIsWaterproof(bool);
	bool GetIsWaterProof();

	void UnlockPhone();
	void LockPhone();
	void TurnOff();

	void PlayGame() {
		int userChoice;
		std::srand(time(0));
		int randomNumber = (std::rand() % 10 + 1);
		cout << "Guess a number between 1 and 10" << endl;
		cin >> userChoice;
		if (userChoice == randomNumber) {
			cout << "You win !" << endl;
		}
		else {
			cout << "You lost , that was " << randomNumber << endl;
		}

	}

	CSmartphone();
	
};

