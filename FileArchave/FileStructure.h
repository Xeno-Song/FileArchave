#pragma once

#include <iostream>

struct FileStructure_Header
{
	char FileHeader[16] = "MGRFARCHAVE";
	char ArchaveVersion[8] = "v1.0.0";

	int FileNum;
};

struct FileStructure_Body
{
	char File_Name[32] = { 0 };
	int FileSize = 0;

	char* Buf;
};