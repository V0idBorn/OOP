#include <iostream>
#include "BodyOfWater.h"
#include "Sea.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	BodyOfWater Water = BodyOfWater("Black Sea" , 1000 , 50);

	cout << "Base class data: " << endl;
	cout << "Water name: " << Water.GetName() << endl
		<< "Water volume: " << Water.GetVolume() << endl
		<< "Water number of countries: " << Water.GetNumberOfCountries() << endl;

	cout << "<----------------------------------------------------------------------------------->" << endl;

	Sea RedSea = Sea(12.3 , true , 14 , "Red Sea" , 240 , 50);
	cout << "Derrived class data: " << endl;
	cout << "Sea name: " << RedSea.GetName() << endl
		<< "Sea volume: " << RedSea.GetVolume() << endl
		<< "Sea number of countries: " << RedSea.GetNumberOfCountries() << endl
		<< "Sea seltnes: " << RedSea.GetIsSelt() << endl
		<< "Sea avarage temperature: " << RedSea.GetAvarageTemp() << endl
		<< "Sea deepness: " << RedSea.GetDeepness() << endl;
	cout << "Virtual methods realization: " << endl;
	int newNumberOfCountries, temperatureChange;
	cout << "Enter new number of countries: "; cin >> newNumberOfCountries;

	RedSea.ChangeNumberOfCountries(newNumberOfCountries);

	cout << "Number of countries was changed: " << RedSea.GetNumberOfCountries() << endl;
	cout << "Enter temperature change: "; cin >> temperatureChange;

	RedSea.AddAvarageTemp(temperatureChange);

	cout << "Temperature was changed: " << RedSea.GetAvarageTemp() << endl;

	return 0;



    

	


}
