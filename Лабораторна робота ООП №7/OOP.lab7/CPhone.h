#pragma once
#include "CDevice.h"
class CPhone :
    public virtual CDevice
{
private:
    float screenDiagonal;
    int audioPower;
public:
    void SetScreenDiagonal(float);
    float GetScreenDiagonal();

    void SetAudioPower(int);
    int GetAudioPower();

    void MakeCall();
    void SendMessage();
    void ShowPhoto();
    void ConnectSpeaker();
    CPhone();


};

