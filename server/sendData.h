#pragma once

#include <vector>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <string>
#include <map>

using namespace std;

bool sendStringVector(SOCKET socket, const std::vector<std::string>& vec);
bool sendMap(SOCKET sock, const std::map<DWORD, std::string>& data);