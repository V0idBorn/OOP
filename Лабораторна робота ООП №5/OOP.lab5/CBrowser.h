#pragma once
#include <iostream>
#include <string>

using std::string;
using std::ostream;
using std::istream;
using std::endl;

class CBrowser
{
private:
	string URL;
	int pageSize;
	unsigned int upload;
	unsigned int download;
public:
	int GetPageSize();
	int GetUpload();
	string GetURL();
	int GetDownload();

	void SetPageSize(int);
	void SetUpload(int);
	void SetURL(const string&);
	void SetDownload(int);

	float UploadFile(int filesize, int internetSpeed);
	float DownloadFile(int filesize, int internetSpeed);

	CBrowser(string URL, int pageSize, unsigned int upload, unsigned int dowload);
	CBrowser();

	friend CBrowser& operator += (CBrowser& obj1, CBrowser& obj2);

	friend CBrowser& operator -= (CBrowser& obj1, CBrowser& obj2);

	friend bool operator < (CBrowser obj1, CBrowser obj2);

	friend bool operator >= (CBrowser obj1, CBrowser obj2);

	friend bool operator > (CBrowser obj1, CBrowser obj2);

	friend bool operator <= (CBrowser obj1, CBrowser obj2);

	friend ostream& operator << (ostream& cout, CBrowser obj);

	friend istream& operator >> (istream &cin, CBrowser &obj);
};



