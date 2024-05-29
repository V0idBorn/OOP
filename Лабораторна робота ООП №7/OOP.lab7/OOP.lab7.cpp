#include <iostream>
#include "CDevice.h"
#include"CPhone.h";
#include"CComputer.h"
#include"CSmartphone.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
	CDevice device;
	CPhone phone;
	CComputer computer;
	CSmartphone smartphone;

cout << "--------------------------------------------------------------" << endl;
	cout << "Reprezentation of CDevice class:" << endl;
	device.SetBatteryCapacity(5000);
	device.SetName("Device 1");
	device.AddModelNumber(" V0.1");
	

	cout << "Devise battery capacity is: " << device.GetBatteryCapacity() << endl
		<< "Device name is: " << device.GetName() << endl << endl;

	cout << "--------------------------------------------------------------" << endl;
	cout << "Reprezentation of CPhone class:" << endl;

	phone.SetName("Phone 1");
	phone.SetAudioPower(500);
	phone.SetBatteryCapacity(5500);
	phone.SetScreenDiagonal(4.4);

	phone.AddModelNumber(" V 1.0");

	cout << "Phone`s audio power is : " << phone.GetAudioPower() << endl
		<< "Phone`s battery capacity is: " << phone.GetBatteryCapacity() << endl
		<< "Phone`s name is: " << phone.GetName() << endl
		<< "Phone`s screen diagonal is: " << phone.GetScreenDiagonal() << endl << endl;

	phone.MakeCall();
	phone.SendMessage();
	phone.ShowPhoto();
	phone.ConnectSpeaker();
	cout << "Phone`s audio power is : " << phone.GetAudioPower() << endl;

	cout << "--------------------------------------------------------------" << endl;
	cout << "Reprezentation of CComputer class:" << endl;

	computer.SetBatteryCapacity(55000);
	computer.SetComputerPerformance(5.4);
	computer.SetName("Computer 1");
	computer.SetProcessorName("Core 1");

	computer.AddModelNumber(" V 1.1");

	cout << "Computer`s battery capacity: " << computer.GetBatteryCapacity() << endl
		<< "Computer`s performance: " << computer.GetComputerPerformance() << endl
		<< "Computer`s name: " << computer.GetName() << endl
		<< "Compuert`s processor name: " << computer.GetProcessorName() << endl << endl;

	computer.calculate(1, 2);
	computer.calculate();
	computer.OverclockProcessor();
	computer.AddProcessorModelNumber(" I9 1488 SS");

	cout << endl << "Computer`s performance: " << computer.GetComputerPerformance() << endl;
	cout << "Compuert`s processor name: " << computer.GetProcessorName() << endl;
	

	cout << "--------------------------------------------------------------" << endl;
	cout << "Reprezentation of CSmartphone class:" << endl;

	smartphone.SetAudioPower(500);
	smartphone.SetBatteryCapacity(4000);
	smartphone.SetComputerPerformance(3.2);
	smartphone.SetIsWaterproof(true);
	smartphone.SetName("Smartphone 1");
	smartphone.SetPrice(1000);
	smartphone.SetProcessorName("Snapfire");
	smartphone.SetScreenDiagonal(5.5);

	cout << "Smartphone`s audio power: " << smartphone.GetAudioPower() << endl
		<< "Smartphones`s battery capacity: " << smartphone.GetBatteryCapacity() << endl
		<< "Smartphone`s performance: " << smartphone.GetComputerPerformance() << endl
		<< "Smartphone`s waterproof: " << smartphone.GetIsWaterProof() << endl
		<< "Smartphone`s name: " << smartphone.GetName() << endl
		<< "Smartphone`s processor name: " << smartphone.GetProcessorName() << endl
		<< "Smartphone`s screen diagonal: " << smartphone.GetScreenDiagonal() << endl
		<< "Smartphone`s price: " << smartphone.GetPrice() << endl << endl;

	smartphone.AddModelNumber(" V2");
	smartphone.MakeCall();
	smartphone.SendMessage();
	smartphone.ShowPhoto();
	smartphone.ConnectSpeaker();
	smartphone.calculate(3, 4);
	smartphone.calculate();
	smartphone.OverclockProcessor();
	smartphone.AddProcessorModelNumber(" Cookie");
	smartphone.UnlockPhone();
	smartphone.LockPhone();
	smartphone.TurnOff();
	
	smartphone.PlayGame();

	cout << endl <<"Smartphone`s audio power:" << smartphone.GetAudioPower() << endl 
		<< "Smartphones`s battery capacity:" << smartphone.GetBatteryCapacity() << endl  
		<< "Smartphone`s performance" << smartphone.GetComputerPerformance() << endl 
		<< "Smartphone`s waterproof:" << smartphone.GetIsWaterProof() << endl 
		<< "Smartphone`s name: " << smartphone.GetName() << endl 
		<< "Smartphone`s processor name:" << smartphone.GetProcessorName() << endl 
		<< "Smartphone`s screen diagonal:" << smartphone.GetScreenDiagonal() << endl 
		<< "Smartphone`s price:" << smartphone.GetPrice() << endl;

	
	return 0;
}