#include "cArchave.h"
#include <Windows.h>

cArchive::cArchive()
{
	CleanUp();
}

cArchive::~cArchive()
{
	CleanUp();
}

void cArchive::FileSave()
{
}

void cArchive::FileRead()
{
}

void cArchive::FileCreate()
{
	CleanUp();

	Header = new FileStructure_Header;
}

void cArchive::FileAdd(const char* FileName)
{
	Header->FileNum++;

	int idx = FileSize.size();

	FileSize.emplace_back();
	FileList.emplace_back(new FileStructure_Body);

	FileReader* FReader;
	FReader = new FileReader;
	FReader->ReadFile(FileName);

	FileSize[idx] = FReader->Size;
	FileList[idx]->Buf = FReader->Buf;
}

void cArchive::PrintAchaveFileList()
{
}

void cArchive::CleanUp()
{
	if (Header != nullptr)
	{
		delete Header;
		Header = nullptr;
	}

	FileLoc.clear();
	FileList.clear();
}
