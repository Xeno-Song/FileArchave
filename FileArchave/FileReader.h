#pragma once

#ifndef __FILE_READER_H__
#define __FILE_READER_H__

#include <iostream>
#include <windows.h>

class FileReader
{
public:
	FileReader();
	virtual ~FileReader();

public:
	int Size;
	char* Buf;

public:
	char* ReadFile(const char* FileName);
};

#endif