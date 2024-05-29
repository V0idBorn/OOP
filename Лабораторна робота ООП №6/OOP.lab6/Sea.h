#pragma once
#include "BodyOfWater.h"
#include <iostream>
#include <string>



class Sea :
    public BodyOfWater
{
private:
    float deepness;
    bool isSelt;
    int avarageTemp;
public:
    void SetDeepness(float);
    float GetDeepness();
    void SetIsSelt(bool);
    bool GetIsSelt();
    void SetAvarageTemp(int);
    int GetAvarageTemp();

    void AddAvarageTemp(int number);
    bool isSeaSelt();

    Sea& operator = (Sea& obj) {
        Sea::deepness = obj.deepness;
        Sea::isSelt = obj.isSelt;
        Sea::avarageTemp = obj.avarageTemp;
        return *this;
    }


    Sea(float deepness, bool isSelt, int avarageTemp, string name, int volume, int numberOfCountries);
     
    Sea(const Sea& obj);
    
    void ChangeNumberOfCountries(int newNumberOfCountries) {
        Sea::SetNumberOfCountries(newNumberOfCountries);
    }

    void AddVolume(int number) {
        Sea::SetVolume(number);
    };
};

