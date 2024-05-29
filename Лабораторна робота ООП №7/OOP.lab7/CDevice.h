#pragma once
#include <iostream>
#include <string>

using std::string;

class CDevice
{
private:
	string name;
	int batteryCapacity;
public:
	void SetName(string);
	string GetName();

	void SetBatteryCapacity(int);
	int GetBatteryCapacity();

	virtual void PlayGame() {};
	void AddModelNumber(string);

	CDevice();
	virtual ~CDevice() {};

};

