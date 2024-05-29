#pragma once
#include <string>

using std::string;

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
	float DownloadFile(int filesize , int internetSpeed);

	CBrowser(string URL, int pageSize, unsigned int upload, unsigned int dowload);
	CBrowser();
};



