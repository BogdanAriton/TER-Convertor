#ifndef RTFConvertor
#define RTFConvertor

#include <iostream>
#include <string>
#include <windows.h> 
#include <stdio.h> 
#include "TER.H"

using namespace std;

constexpr auto BUFSIZE = 4096;
#define TRACED(m) {if (pThreadData!=NULL) {Sleep(10);pThreadData->message=m; pThreadData->write=true;}}
#define TRACE(m) {std::wcout << m << std::endl;}

CHAR hsRTFInputFile[BUFSIZE] = "E:\\Projects\\TERConvertor\\x64\\Release\\rtffile.rtf";
CHAR hsPDFOutputFile[BUFSIZE] = "E:\\Projects\\TERConvertor\\x64\\Release\\rtffile.pdf";

typedef struct WorkerData
{
	CHAR* message;
	bool write;
} Worker, *PWorker;

PWorker pThreadData = (PWorker)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(Worker));

//void CreateWriter(void);
DWORD WINAPI Writer(LPVOID lpParam);
WCHAR* GetTerFlagName(WCHAR* flagName, int step);
BOOL TERConversion(char* hsRTFInputFile, char* hsPDFOutputFile);
BOOL SetTerFlags(void);

#endif