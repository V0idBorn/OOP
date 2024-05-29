#include "CPhone.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void CPhone::SetScreenDiagonal(float screenDiagonal) {
	CPhone::screenDiagonal = screenDiagonal;
}
float CPhone::GetScreenDiagonal() {
	return CPhone::screenDiagonal;
}

void CPhone::SetAudioPower(int audioPower) {
	CPhone::audioPower = audioPower;
}
int CPhone::GetAudioPower() {
	return CPhone::audioPower;
}

void CPhone::MakeCall() {
	cout << "Ring...Ring...Ring" << endl;
}

void CPhone::SendMessage() {
	string str1;
	cout << "Enter message: ";
	cin >> str1;
	cout << "Your message have been sent" << endl;
}

void CPhone::ShowPhoto() {
	cout << "Here is your photo: " << endl;
	cout << endl << "#############################################################" << endl;
	cout << "#                    _                                      #" << endl;
	cout << "#                  -=\\`\\                                    #" << endl;
	cout << "#              |\\ ____\\_\\__                                 #" << endl;
	cout << "#            -=\\c`\"\"\"\"\"\"\" \"`)                               #" << endl;
	cout << "#               `~~~~~/ /~~`\                                #" << endl;
	cout << "#                 -==/ /                                    #" << endl;
	cout << "#                   '-'                                     #" << endl;
	cout << "#                  _  _                                     #" << endl;
	cout << "#                 ( `   )_                                  #" << endl;
	cout << "#                (    )    `)                               #" << endl;
	cout << "#              (_   (_ .  _) _)                             #" << endl;
	cout << "#                                             _             #" << endl;
	cout << "#                                            (  )           #" << endl;
	cout << "#             _ .                         ( `  ) . )        #" << endl;
	cout << "#           (  _ )_                      (_, _(  ,_)_)      #" << endl;
	cout << "#         (_  _(_ ,)                                        #" << endl;
	cout << "#############################################################" << endl;
}

void CPhone::ConnectSpeaker() {
	int speakersPower;

	cout << "Enter speakers power: ";
	cin >> speakersPower;
	CPhone::SetAudioPower(CPhone::audioPower + speakersPower);
	cout << "Speaker have been connected" << endl;
}

CPhone::CPhone() :
	CDevice::CDevice() {
	CPhone::screenDiagonal = 0;
	CPhone::audioPower = 0;
    };

