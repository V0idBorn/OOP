#pragma once
#include "CDevice.h"

class CComputer :
    public virtual CDevice
{
private:
    float computerPerformance;
    string processorName;
public:
    void SetComputerPerformance(float);
    float GetComputerPerformance();

    void SetProcessorName(string);
    string GetProcessorName();

    void calculate();
    void calculate(int, int);

    void OverclockProcessor();
    void AddProcessorModelNumber(string);

    CComputer();
};

