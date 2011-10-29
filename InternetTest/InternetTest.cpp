// InternetTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <WinInet.h>

#pragma comment(lib, "wininet.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	DWORD flags = INTERNET_CONNECTION_MODEM | INTERNET_CONNECTION_LAN | INTERNET_CONNECTION_PROXY;
	BOOL result = InternetGetConnectedState(&flags, 0);

	if(result == TRUE)
		return 0;
	else
		return -1;
}
