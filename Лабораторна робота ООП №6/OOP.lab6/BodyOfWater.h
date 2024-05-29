#pragma once

#include <string>


using std::string;

class BodyOfWater
{
private:
	string name;
	int volume;
	int numberOfCountries;

public:
	string GetName();
	void SetName(string);
	int GetVolume();
	void SetVolume(int);
	int GetNumberOfCountries();
	void SetNumberOfCountries(int);
	virtual void ChangeNumberOfCountries(int) {};
	virtual void AddVolume() {};
	BodyOfWater(string name, int volume, int nunberOfCountries);
	BodyOfWater();
	BodyOfWater(const BodyOfWater& obj);

};

