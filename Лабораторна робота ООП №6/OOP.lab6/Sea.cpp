#include "Sea.h"
#include <iostream>

void Sea::SetDeepness(float deepness) {
	Sea::deepness = deepness;
}

float Sea::GetDeepness() {
	return Sea::deepness;
}
void Sea::SetIsSelt(bool isSelt) {
	Sea::isSelt = isSelt;
}

bool Sea::GetIsSelt() {
	return Sea::isSelt;
}

void Sea::SetAvarageTemp(int avarageTemp) {
	Sea::avarageTemp = avarageTemp;
}

int Sea::GetAvarageTemp() {
	return Sea::avarageTemp;
}

void Sea::AddAvarageTemp(int number) {
	Sea::SetAvarageTemp(number + Sea::avarageTemp);
}

bool Sea::isSeaSelt() {
	return Sea::isSelt;
}

Sea::Sea(float deepness, bool isSelt, int avarageTemp, string name, int volume, int numberOfCountries) :
	BodyOfWater(name, volume, numberOfCountries) {
	Sea::deepness = deepness;
	Sea::isSelt = isSelt;
	Sea::avarageTemp = avarageTemp;
};


Sea::Sea(const Sea& obj) :
	BodyOfWater(obj) {
	Sea::deepness = obj.deepness;
	Sea::isSelt = obj.isSelt;
	Sea::avarageTemp = obj.avarageTemp;

};
