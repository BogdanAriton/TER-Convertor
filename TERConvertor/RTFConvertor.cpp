#include "RTFConvertor.h"

using namespace std;
int main()
{
	//DWORD idThread;
	//HANDLE hThread;

	TRACE("Started")

	//	// create thread
	//	hThread = CreateThread(
	//		NULL, //default security attributes
	//		0, //default stack size
	//		Writer, // thread function
	//		pThreadData, // function data
	//		0, // default creation flag
	//		&idThread // thread id
	//	);

	//// if handle is null - thread creation failed
	//if (hThread == NULL)
	//{
	//	wcout << "Could not create thread" << endl;
	//	return 1;
	//}

	TRACE(hsRTFInputFile);
	TRACE(hsPDFOutputFile);
	SetTerFlags();

	if (!TERConversion(hsRTFInputFile, hsPDFOutputFile))
	{
		TRACE("Fail");
	}
	else
	{
		TRACE("Success");
	}

	//WaitForSingleObject(hThread, INFINITE);
	//CloseHandle(hThread);
	//HeapFree(GetProcessHeap(), 0, pThreadData);
	//pThreadData = NULL;

	return 0;
}

BOOL SetTerFlags(void)
{
	// set flag name = TerSetFlags
	// Get Flag value using GET_CSA_VAR_STRING_DEFAULT

	WCHAR TerSetFlag[BUFSIZE] = L"TerSetFlags";
	WCHAR TerSetFlagValue[BUFSIZE] = L"0x10000004";
	TRACE(wstring(wstring(L"Adding flag [") + wstring(TerSetFlag) + wstring(L"] to env vars. With Value: ") + wstring(TerSetFlagValue)).c_str());
	SetEnvironmentVariable(TerSetFlag, TerSetFlagValue);
	

	WCHAR TerSetFlag2[BUFSIZE] = L"TerSetFlags2";
	WCHAR TerSetFlagValue2[BUFSIZE] = L"0x0";
	TRACE(wstring(wstring(L"Adding flag [") + wstring(TerSetFlag2) + wstring(L"] to env vars. With Value: ") + wstring(TerSetFlagValue2)).c_str());
	SetEnvironmentVariable(TerSetFlag2, TerSetFlagValue2);

	WCHAR TerSetFlags3[BUFSIZE] = L"TerSetFlags3";
	WCHAR TerSetFlagValue3[BUFSIZE] = L"0x0";
	TRACE(wstring(wstring(L"Adding flag [") + wstring(TerSetFlags3) + wstring(L"] to env vars. With Value: ") + wstring(TerSetFlagValue3)).c_str());
	SetEnvironmentVariable(TerSetFlags3, TerSetFlagValue3);

	WCHAR TerSetFlags4[BUFSIZE] = L"TerSetFlags4";
	WCHAR TerSetFlagValue4[BUFSIZE] = L"0x0";
	TRACE(wstring(wstring(L"Adding flag [") + wstring(TerSetFlags4) + wstring(L"] to env vars. With Value: ") + wstring(TerSetFlagValue4)).c_str());
	SetEnvironmentVariable(TerSetFlags4, TerSetFlagValue4);

	WCHAR TerSetFlags5[BUFSIZE] = L"TerSetFlags5";
	WCHAR TerSetFlagValue5[BUFSIZE] = L"0x0";
	TRACE(wstring(wstring(L"Adding flag [") + wstring(TerSetFlags5) + wstring(L"] to env vars. With Value: ") + wstring(TerSetFlagValue5)).c_str());
	SetEnvironmentVariable(TerSetFlags5, TerSetFlagValue5);

	WCHAR TerSetFlags6[BUFSIZE] = L"TerSetFlags6";
	WCHAR TerSetFlagValue6[BUFSIZE] = L"0x0";
	TRACE(wstring(wstring(L"Adding flag [") + wstring(TerSetFlags6) + wstring(L"] to env vars. With Value: ") + wstring(TerSetFlagValue6)).c_str());
	SetEnvironmentVariable(TerSetFlags6, TerSetFlagValue6);

	WCHAR TerSetFlags7[BUFSIZE] = L"TerSetFlags7";
	WCHAR TerSetFlagValue7[BUFSIZE] = L"0x0";
	TRACE(wstring(wstring(L"Adding flag [") + wstring(TerSetFlags7) + wstring(L"] to env vars. With Value: ") + wstring(TerSetFlagValue7)).c_str());
	SetEnvironmentVariable(TerSetFlags7, TerSetFlagValue7);

	WCHAR TerSetFlags8[BUFSIZE] = L"TerSetFlags8";
	WCHAR TerSetFlagValue8[BUFSIZE] = L"0x0";
	TRACE(wstring(wstring(L"Adding flag [") + wstring(TerSetFlags8) + wstring(L"] to env vars. With Value: ") + wstring(TerSetFlagValue8)).c_str());
	SetEnvironmentVariable(TerSetFlags8, TerSetFlagValue8);

	WCHAR TerSetFlags9[BUFSIZE] = L"TerSetFlags9";
	WCHAR TerSetFlagValue9[BUFSIZE] = L"0x0";
	TRACE(wstring(wstring(L"Adding flag [") + wstring(TerSetFlags9) + wstring(L"] to env vars. With Value: ") + wstring(TerSetFlagValue9)).c_str());
	SetEnvironmentVariable(TerSetFlags9, TerSetFlagValue9);

	WCHAR TerSetFlags10[BUFSIZE] = L"TerSetFlags10";
	WCHAR TerSetFlagValue10[BUFSIZE] = L"0x0";
	TRACE(wstring(wstring(L"Adding flag [") + wstring(TerSetFlags10) + wstring(L"] to env vars. With Value: ") + wstring(TerSetFlagValue10)).c_str());
	SetEnvironmentVariable(TerSetFlags10, TerSetFlagValue10);

	WCHAR TerSetFlags11[BUFSIZE] = L"TerSetFlags11";
	WCHAR TerSetFlagValue11[BUFSIZE] = L"0x6018";
	TRACE(wstring(wstring(L"Adding flag [") + wstring(TerSetFlags11) + wstring(L"] to env vars. With Value: ") + wstring(TerSetFlagValue11)).c_str());
	SetEnvironmentVariable(TerSetFlags11, TerSetFlagValue11);

	return TRUE;
}

DWORD WINAPI Writer(LPVOID lpParam)
{
	//CHAR message[BUFSIZE];
	DWORD dwRead, dwWritten;
	HANDLE hStdin, hStdout;
	BOOL bSuccess;

	// STDOUT is set by the parent process
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	// STDIN is set by the parent process
	hStdin = GetStdHandle(STD_INPUT_HANDLE);

	if ((hStdout == INVALID_HANDLE_VALUE) || (hStdin == INVALID_HANDLE_VALUE))
		ExitProcess(1);

	// Read from standard input and stop on error or no data.
	//bSuccess = ReadFile(hStdin, message, BUFSIZE, &dwRead, NULL);
	//if (!bSuccess)
	//	ExitProcess(1);
	PWorker data;
	data = (PWorker)lpParam;

	while (true)
	{
		if (data->write)
		{
			bSuccess = WriteFile(hStdout, data->message, BUFSIZE, &dwWritten, NULL);
			if (!bSuccess)
				return -1;
			data->write = false;
		}

		if (strcmp(data->message, "success") == 0)
			break;

		if (strcmp(data->message, "fail") == 0)
			break;
	}

	return 0;
}

// new way to convert file from rtf to pdf using a new Ter library for rendering and WinPDF for conversion
BOOL TERConversion(char* hsRTFInputFile, char* hsPDFOutputFile)
{
	HWND hWndTer = NULL;
	HINSTANCE hInstTerDllHandle = NULL;
	bool bWasConversionSuccessfull = false;
	auto hsTerErr = new const CHAR[BUFSIZE];
	hsTerErr = "";
	
		try
	{
		hInstTerDllHandle = LoadLibrary(L"TEW26.DLL");
		if (hInstTerDllHandle == NULL)
		{
			TRACE("Unable to load library: TEW26.dll");
			return false;
		}
	}
	catch (exception ex)
	{
		TRACE(ex.what());
	}

	if (NULL != hInstTerDllHandle)
	{
		//define function prototypes and get the function addresses
		typedef BOOL(WINAPI*CloseTerNew)(HWND, BOOL); //define function prototype
		CloseTerNew CloseTerNewPtr = NULL;
		HWND hWndTer = NULL;

		typedef BOOL(WINAPI*TerSetLicenseKeyNew)(LPBYTE);
		TerSetLicenseKeyNew TerSetLicenseKeyNewPtr = NULL;
		if (NULL == (TerSetLicenseKeyNewPtr = (TerSetLicenseKeyNew)GetProcAddress(hInstTerDllHandle, "TerSetLicenseKey")))
		{
			TRACE("TERConversion: Failed to call TerSetLicenseKey DLL method.");
			return false;
		}

		typedef BOOL(WINAPI*TerInServerNew)(BOOL);
		TerInServerNew TerInServerNewPtr = NULL;
		if (NULL == (TerInServerNewPtr = (TerInServerNew)GetProcAddress(hInstTerDllHandle, "TerInServer")))
		{
			TRACE("TERConversion: Failed to call TerInServer DLL method.");
			return false;
		}

		typedef DWORD(WINAPI*TerSetFlagsNew)(HWND, BOOL, DWORD);
		TerSetFlagsNew TerSetFlagsNewPtr = NULL;
		if (NULL == (TerSetFlagsNewPtr = (TerSetFlagsNew)GetProcAddress(hInstTerDllHandle, "TerSetFlags")))
		{
			TRACE("TERConversion: Failed to call TerSetFlags DLL method.");
			return false;
		}

		typedef DWORD(WINAPI*TerSetFlags11New)(HWND, BOOL, DWORD);
		TerSetFlags11New TerSetFlags11NewPtr = NULL;
		if (NULL == (TerSetFlags11NewPtr = (TerSetFlags11New)GetProcAddress(hInstTerDllHandle, "TerSetFlags11")))
		{
			TRACE("TERConversion: Failed to call TerSetFlags11 DLL method.");
			return false;
		}

		typedef BOOL(WINAPI*TerSetPrinter)(HWND, LPBYTE, LPBYTE, LPBYTE, HGLOBAL);
		TerSetPrinter TerSetPrinterPtr = NULL;
		if (NULL == (TerSetPrinterPtr = (TerSetPrinter)GetProcAddress(hInstTerDllHandle, "TerSetPrinter")))
		{
			TRACE("TERConversion: Failed to call TerSetPrinter DLL method.");
			return false;
		}

		typedef HWND(WINAPI*CreateTerWindowNew)(struct arg_list far *);
		CreateTerWindowNew CreateTerWindowNewPtr = NULL;
		if (NULL == (CreateTerWindowNewPtr = (CreateTerWindowNew)GetProcAddress(hInstTerDllHandle, "CreateTerWindow")))
		{
			TRACE("TERConversion: Failed to call CreateTerWindow DLL method.");
			return false;
		}

		typedef BOOL(WINAPI*ReadTerFileNew)(HWND, LPBYTE);
		ReadTerFileNew ReadTerFileNewPtr = NULL;
		if (NULL == (ReadTerFileNewPtr = (ReadTerFileNew)GetProcAddress(hInstTerDllHandle, "ReadTerFile")))
		{
			TRACE("TERConversion: Failed to call ReadTerFile DLL method.");
			return false;
		}

		typedef DWORD_PTR(WINAPI*TerPdcStartNew)(LPBYTE, LPBYTE, LPBYTE, LPBYTE, LPBYTE, LPBYTE, LPBYTE, LPBYTE, LPBYTE, DWORD);
		TerPdcStartNew TerPdcStartNewPtr = NULL;
		if (NULL == (TerPdcStartNewPtr = (TerPdcStartNew)GetProcAddress(hInstTerDllHandle, "TerPdcStart")))
		{
			TRACE("TERConversion: Failed to call TerPdcStart DLL method.");
			return false;
		}

		typedef BOOL(WINAPI*TerPdcPrintPageNew)(HWND, DWORD_PTR, int, int, int, int, BOOL);
		TerPdcPrintPageNew TerPdcPrintPageNewPtr = NULL;
		if (NULL == (TerPdcPrintPageNewPtr = (TerPdcPrintPageNew)GetProcAddress(hInstTerDllHandle, "TerPdcPrintPage3")))
		{
			TRACE("TERConversion: Failed to call TerPdcPrintPage DLL method.");
			return false;
		}

		typedef BOOL(WINAPI*TerPdcEndNew)(DWORD_PTR);
		TerPdcEndNew TerPdcEndNewPtr = NULL;
		if (NULL == (TerPdcEndNewPtr = (TerPdcEndNew)GetProcAddress(hInstTerDllHandle, "TerPdcEnd")))
		{
			TRACE("TERConversion: Failed to call TerPdcEnd DLL method.");
			return false;
		}


		//call functions
		//TerSetLicenseKeyNewPtr((LPBYTE)"UT50S-EB4QZ-16ET3-50201"); // UT50S-EB4QZ-16ET3-50201 license key for Ter 23 (65J9S-28F3Z-BE173-50201 for Ter22; HT4KS-LW7GZ-49NS3-14021 for Ter21)
		//TerSetLicenseKeyNewPtr((LPBYTE)"37GTS-98P2Z-MS683-60201 "); //TER 23 also
		//TerSetLicenseKeyNewPtr((LPBYTE)"HR97S-MQ3TZ-27AL3-70410");  // ter 25
		try
		{
			TerSetLicenseKeyNewPtr((LPBYTE)"87KWS-25M4Z-UR7W3-90124"); // TEW 26
		}
		catch (...)
		{
			TRACE("TERConversion: License key is incorrect.");
		}
		TerInServerNewPtr(TRUE);

		//set some default flags
		//TerSetFlagsNewPtr(NULL,true,(TFLAG_RETURN_MSG_ID|TFLAG_NO_OLE));  // call before creating the window with NULL for the window handle.
		//TerSetFlags11NewPtr(NULL,true,TFLAG11_NBRS_TO_LEFT|TFLAG11_NO_EXACT_LINE_SPACING|TFLAG11_NO_CHAR_BKND|TFLAG11_DONT_FIX_RTF_TABLE);

		//set ter flags from model-overrides.xml
		int flag = 0;
		//DWORD getEnvReturn;
		WCHAR wflagName[BUFSIZE] = L"TerSetFlags";

		do {
			LPTSTR wflagValue = (LPTSTR)malloc(BUFSIZE);
			if (!GetEnvironmentVariable(GetTerFlagName(wflagName, flag), wflagValue, BUFSIZE))
			{
				TRACE(wstring(wstring(L"TERConversion: Unable to get Environment Variable: ").append(GetTerFlagName(wflagName, flag))).c_str());
				flag++;
				continue;
			}
			TRACE(wstring(wstring(L"TERConversion: Found Environment Variable: ") + wstring(GetTerFlagName(wflagName, flag)) + wstring(L". With value: ") + wstring(wflagValue)).c_str());

			if (wcscmp(wflagValue, L"") && wcscmp(wflagValue, L"0") && wcscmp(wflagValue, L"0x0"))
			{
				char* flagValue = (char*)malloc(BUFSIZE);
				size_t size;
				wcstombs_s(&size, flagValue, BUFSIZE, wflagValue, BUFSIZE);

				typedef DWORD(WINAPI*TerSetFlagsNew)(HWND, BOOL, DWORD);
				TerSetFlagsNew TerSetFlagsNewPtr = NULL;

				char* flagName = (char*)malloc(BUFSIZE);
				wcstombs_s(&size, flagName, BUFSIZE, GetTerFlagName(wflagName, flag), BUFSIZE);
				TRACE(string(string("Flag name: ").append(flagName)).c_str());
				TRACE(string(string("Flag value: ").append(flagValue)).c_str());
				
				if (NULL == (TerSetFlagsNewPtr = (TerSetFlagsNew)GetProcAddress(hInstTerDllHandle, flagName)))
				{
					TRACE(string(string("TERConversion: Failed to call TerSetFlags DLL method : ") + string(flagName) + string(" .Skipping this flag")).c_str());
					flag++;
					continue;
				}
				else
				{
					DWORD flagVal = 0;
					try
					{
						flagVal = strtoul(flagValue, NULL, 16);
					}
					catch (...)
					{
						TRACE(string(string("TERConversion: Error failed to convert value ").
							append(string(flagValue).
								append(string("to base 16 number for %s. Skipping this flag: ").
									append(flagName)))).c_str());
						flag++;
						continue;
					}
					TerSetFlagsNewPtr(NULL, true, flagVal);
				}
			}
			flag++;
		} while (flag <= 11);

		CHAR hsPrinterName[BUFSIZE] = "Microsoft XPS Document Writer";
		//env.GET_CSA_VAR_STRING_DEFAULT(L"OMS_TER_FLAGS", L"TerPrinter", hsPrinterName, L"Amyuni PDF Converter 2.51");

		//conversion
		arg_list args;
		memset(&args, 0, sizeof(args));
		args.WordWrap = TRUE;
		args.PageMode = TRUE;
		args.width = 96 * 6;
		args.style = TER_INVISIBLE;
		hWndTer = CreateTerWindowNewPtr(&args);
		if (NULL != hWndTer)
		{ 
			TRACE(string(string("TERConversion: Setting print driver to: ").append(hsPrinterName)).c_str());
			if (FALSE == TerSetPrinterPtr(hWndTer, (LPBYTE)hsPrinterName, NULL, NULL, NULL))
				{
					TRACE(string(string("TERConversion: Conversion will continue. Failed to set TER printer to: ").append(hsPrinterName)).c_str());
				}
			if (TRUE == ReadTerFileNewPtr(hWndTer, (LPBYTE)hsRTFInputFile))
			{
				DWORD_PTR id;
				id = TerPdcStartNewPtr((LPBYTE)"T48ES-71U4Z-2RVW1-90124", (LPBYTE)hsPDFOutputFile, (LPBYTE)"", (LPBYTE)"Cerner", (LPBYTE)"", (LPBYTE)"", (LPBYTE)"",
					(LPBYTE)"", (LPBYTE)"", PDFFLAG_EMBED_FONTS | PDFFLAG_COMPRESS_TEXT); //T48ES-71U4Z-2RVW1-90124 6YP2S-GE9OZ-V25N1-70410 7EM2S-LA6TZ-B43J1-50201 license key for WinPDF v11 (Y38ES-21M5Z-7QB41-50201 for WinPDF v10; 7TB8S-EP2KZ-R67S1-14021 for WinPDF v9)

				if (id > 0)
				{
					if (TRUE == TerPdcPrintPageNewPtr(hWndTer, id, -1, -1, -1, -1, true))
					{
						BOOL ret;
						ret = TerPdcEndNewPtr(id);
						TRACE("TERConversion: Run TerPdcEndNewPtr without using Spinner Monitor.");
						if (ret == TRUE)
						{
							bWasConversionSuccessfull = true;
							TRACE("TERConversion: TER conversion was successfull!");
						}
						else
							TRACE("TERConversion: TerPdcEndNewPtr(id) returned FALSE");
					}
					else
						TRACE("TERConversion: TerPdcPrintPageNewPtr(hWndTer, id, -1) returned FALSE");
				}
				else
					TRACE("TERConversion: id <= 0");
			}
			else
				TRACE("TERConversion: ReadTerFileNewPtr(hWndTer, (LPBYTE)hsRTFInputFile returned FALSE");
		}
		else
			TRACE("TERConversion: hWndTer == NULL");


		if (bWasConversionSuccessfull)
		{
			TRACE("success");
			if (NULL != (CloseTerNewPtr = (CloseTerNew)GetProcAddress(hInstTerDllHandle, "CloseTer"))) // get function address
			{
				CloseTerNewPtr(hWndTer, FALSE); // call function
			}
			else
			{
				TRACE("TERConversion: Failed to call DLL method: CloseTer.");
			}
		}
		else
		{
			TRACE(string(string("TERConversion: conversion failed for file: ").append(hsRTFInputFile)).c_str());
			if (NULL != hWndTer)
			{
				CHAR szMsg[512];
				CHAR szDebugMsg[512];

				//Get detailed error
				typedef int (WINAPI*TerGetLastMessage2New)(HWND, LPBYTE, LPBYTE); //define function prototype
				TerGetLastMessage2New TerGetLastMessage2PtrNew = NULL;
				if (NULL != (TerGetLastMessage2PtrNew = (TerGetLastMessage2New)GetProcAddress(hInstTerDllHandle, "TerGetLastMessage2"))) // get function address
				{
					LONG nErr = TerGetLastMessage2PtrNew(hWndTer, (unsigned char *)szMsg, (unsigned char *)szDebugMsg); // call function
					//hsTerErr.Format(L"%d", nErr);
					TRACE(string(string("TERConversion: Ter Merge failed. Error Code from Get Last Error Message: ").append(to_string(nErr))).c_str());
					TRACE(string(string("TERConversion: Ter Merge failed. Error Msg from Get Last Error Message[Msg]: ").append(szMsg)).c_str());
					TRACE(string(string("TERConversion: Ter Merge failed. Error Debug Msg from Get Last Error Message[DebugMsg]: ").append(szDebugMsg)).c_str());
				}
				else
				{
					TRACE("TERConversion: Failed to call TerGetLastMessage2 DLL method.");
				}


				//Close Ter
				if (NULL != (CloseTerNewPtr = (CloseTerNew)GetProcAddress(hInstTerDllHandle, "CloseTer"))) // get function address
				{
					CloseTerNewPtr(hWndTer, FALSE); // call function
				}
				else
				{
					TRACE("TERConversion: Failed to call DLL method: CloseTer.");
				}
			}
		}
	}

	return bWasConversionSuccessfull;
}

WCHAR* GetTerFlagName(WCHAR* flagName, int step)
{
	WCHAR* cFlagName = new wchar_t[BUFSIZE];
	wcscpy_s(cFlagName, wcsnlen_s(flagName, BUFSIZE) + 1, flagName);
	if (step > 1)
	{
		if (wcscat_s(cFlagName, BUFSIZE, to_wstring(step).c_str()) != 0)
			return cFlagName;
	}
	return cFlagName;
}