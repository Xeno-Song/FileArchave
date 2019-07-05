#include "FileReader.h"
#include <fstream>

FileReader::FileReader()
{
}

FileReader::~FileReader()
{
}

char* FileReader::ReadFile(const char* FileName)
{
	FILE *fp;
	fopen_s(&fp, FileName, "r");

	fseek(fp, 0, SEEK_END);
	Size = ftell(fp);

	if (Size % 8 != 0)
		Size += 8 - (Size % 8);

	Buf = (char*)malloc(sizeof(char) * Size);
	ZeroMemory(Buf, Size);

	std::ifstream InputStream;
	InputStream.open(FileName);

	InputStream.read(Buf, Size);

	return Buf;
}
