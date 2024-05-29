#include "CBrowser.h"
#include<iostream>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int CBrowser::GetUpload() {
	return CBrowser::upload;
}

int CBrowser::GetDownload() {
	return CBrowser::download;
}

int CBrowser::GetPageSize() {
	return CBrowser::pageSize;
}

string CBrowser::GetURL() {
	return this->URL;
}

void CBrowser::SetDownload(int download) {
	CBrowser::download = download;
}

void CBrowser::SetUpload(int upload) {
	CBrowser::upload = upload;
}

void CBrowser::SetPageSize(int pageSize) {
	CBrowser::pageSize = pageSize;
}

void CBrowser::SetURL(const string& URL) {
	CBrowser::URL = URL;
}

float CBrowser::DownloadFile(int filesize, int internetSpeed) {
	return filesize / internetSpeed;
}

float CBrowser::UploadFile(int filesize, int internetSpeed) {
	return filesize / internetSpeed;
}


CBrowser::CBrowser(string URL, int pageSize, unsigned int upload, unsigned int dowload) {
	CBrowser::URL = URL;
	CBrowser::pageSize = pageSize;
	CBrowser::download = download;
	CBrowser::upload = upload;

}

CBrowser::CBrowser() {
	CBrowser::URL = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";
	CBrowser::pageSize = 1;
	CBrowser::download = 1;
	CBrowser::upload = 1;
}

CBrowser& operator += (CBrowser& obj1, CBrowser& obj2) {
	int newPageSize = obj1.pageSize + obj2.pageSize;
	obj1.SetPageSize(newPageSize);
	return obj1;
}

CBrowser& operator -= (CBrowser& obj1, CBrowser& obj2) {
	int newPageSize = obj1.pageSize -= obj2.pageSize;
	obj1.SetPageSize(newPageSize);
	return obj1;
}

bool operator < (CBrowser obj1, CBrowser obj2) {
	return obj1.pageSize < obj2.pageSize;
}

bool operator >= (CBrowser obj1, CBrowser obj2) {
	return !(obj1 < obj2);
}

bool operator > (CBrowser obj1, CBrowser obj2) {
	return obj1.pageSize > obj2.pageSize;
}

bool operator <= (CBrowser obj1, CBrowser obj2) {
	return !(obj1 > obj2);
}

ostream& operator << (ostream& cout, CBrowser obj) {
	cout << "URL:" << obj.URL << endl
		<< "Download: " << obj.download << endl
		<< "Upload: " << obj.upload << endl
		<< "Page size: " << obj.pageSize << endl;

	return cout;
}

istream& operator >> (istream &cin, CBrowser &obj) {
	string URL;
	int pageSize;
	unsigned int upload;
	unsigned int download;

	cout << "Enter new URL: "; cin >> URL;
	cout << "Enter new page size: "; cin >> pageSize;
	cout << "Enter new upload: "; cin >> upload;
	cout << "Enter new download: "; cin >> download;

	obj.SetURL(URL);
	obj.SetPageSize(pageSize);
	obj.SetUpload(upload);
	obj.SetDownload(download);

	return cin;
}