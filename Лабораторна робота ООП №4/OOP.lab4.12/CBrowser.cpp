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
