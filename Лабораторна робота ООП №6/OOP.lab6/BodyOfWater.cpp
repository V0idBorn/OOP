#include "BodyOfWater.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

string BodyOfWater::GetName() {
	return BodyOfWater::name;
}

void BodyOfWater::SetName(string name) {
	BodyOfWater::name = name;
}

int BodyOfWater::GetVolume() {
	return BodyOfWater::volume;
}

void BodyOfWater::SetVolume(int volume){
	BodyOfWater::volume = volume;
}

int BodyOfWater::GetNumberOfCountries() {
	return BodyOfWater::numberOfCountries;
}

void BodyOfWater::SetNumberOfCountries(int numberOfCountries) {
	BodyOfWater::numberOfCountries = numberOfCountries;
}

BodyOfWater::BodyOfWater(string name, int volume, int nunberOfCountries) {
	BodyOfWater::name = name;
	BodyOfWater::volume = volume;
	BodyOfWater::numberOfCountries = nunberOfCountries;
}
BodyOfWater::BodyOfWater() {
	BodyOfWater::name = "Black sea";
	BodyOfWater::volume = 1000;
	BodyOfWater::numberOfCountries = 50;
}
BodyOfWater::BodyOfWater(const BodyOfWater& obj) {
	BodyOfWater::volume = obj.volume;
	BodyOfWater::name = obj.name;
	BodyOfWater::numberOfCountries = obj.numberOfCountries;
}


	

 