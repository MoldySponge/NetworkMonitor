#ifndef REVERSEDNSLOOKUP_H
#define REVERSEDNSLOOKUP_H
#define WIN32_LEAN_AND_MEAN

#include <iostream>
#include <process.h>
#include <windows.h>
#include <string>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdio.h>
#include <vector>

#include "tcpTableAccess.h"
// link with ws2_32.lib
#pragma comment(lib, "Ws2_32.lib")

using namespace std;

class ReverseDnsLookup
{
public:
	string *ReverseDnsLookup::getHostList(string **tcpList, int listSize);
	int ReverseDnsLookup::getTableSize();

private:
	int hostNameListSize = 0;
	const char *c;
	string hostNames;
	string *tcpHostList;
};

#endif // REVERSEDNSLOOKUP_H
