#include <iostream>
#include "CBrowser.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;


int main() {
	int internetSpeed, filesize;
	cout << "Enter your internet speed (Mb/s): ";
	cin >> internetSpeed;
	cout << "Enter size of your file(Mb): ";
	cin >> filesize;

	CBrowser base = CBrowser();
	cout << "Base URL is: " << base.GetURL() << endl;
	cout << "Base download is: " << base.GetDownload() << endl;
	cout << "Base upload is: " << base.GetUpload() << endl;
	cout << "Base page size is: " << base.GetPageSize() << endl;

	CBrowser chrome = CBrowser();
	chrome.SetDownload(100);
	chrome.SetPageSize(50);
	chrome.SetUpload(40);
	chrome.SetURL("https://www.youtube.com/");
	cout << "-------------------------------------------" << endl;
	cout << "Chrome URL is: " << chrome.GetURL() << endl;
	cout << "Chrome download is: " << chrome.GetDownload() << endl;
	cout << "Chrome upload is: " << chrome.GetUpload() << endl;
	cout << "Chrome page size is: " << chrome.GetPageSize() << endl;
	cout << "Chrome will upload your file in: " << chrome.UploadFile(filesize, internetSpeed) << endl;
	cout << "Chrome will download your file in: " << chrome.DownloadFile(filesize, internetSpeed) << endl;

	cout << "Lab 5 realization:" << endl;
	base += chrome;
	cout << "Base`s page size has been changed by operator (+=): " << base.GetPageSize()<< endl;
	base -= chrome;
	cout << "Base`s page size has been changed by operator (-=) : " << base.GetPageSize() << endl;

	if (base > chrome) {
		cout << "Base`s page size is bigger then chrome`s" << endl;
	}
	if (base < chrome) {
		cout << "Base`s page size is smaller then chrome`s" << endl;
	}

	cin >> chrome;
	cout << chrome;
	

	return 0;
}
