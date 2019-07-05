#pragma once

#ifndef __CARCHAVE_H__
#define __CARCHAVE_H__

#include "FileStructure.h"
#include "FileReader.h"
#include <vector>

class cArchive
{
public:
	cArchive();
	virtual ~cArchive();

private:
	FileStructure_Header* Header;
	std::vector<int> FileSize;
	std::vector<FileStructure_Body*> FileList;

	int FileEndAddress;

public:
	void FileSave();
	void FileRead();
	void FileCreate();
	void FileAdd(const char* FileName);
	void PrintAchaveFileList();

private:
	void CleanUp();
};

#endif