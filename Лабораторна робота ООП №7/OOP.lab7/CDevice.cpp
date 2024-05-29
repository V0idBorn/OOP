#include "CDevice.h"

void CDevice::SetName(string name) {
	CDevice::name = name;
}

string CDevice::GetName() {
	return CDevice::name;
}

void CDevice::SetBatteryCapacity(int batteryCapacity) {
	CDevice::batteryCapacity = batteryCapacity;
}

int CDevice::GetBatteryCapacity() {
	return CDevice::batteryCapacity;
}

void CDevice::AddModelNumber(string modelNumber) {
	
	CDevice::name.append(modelNumber);
	
 }

CDevice::CDevice() {
	CDevice::name = "Device 0";
	CDevice::batteryCapacity = 0;
}

