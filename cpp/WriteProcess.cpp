#include <iostream>
#include <Windows.h>
#include <thread>
#include <chrono>
using namespace std;

DWORD ProcessID;
int main()
{
	HWND hwnd = FindWindowA(NULL, "calculator");
	if (hwnd == NULL) {
		cout << "Can't find the Window";
		return 0x0;
	}
	else {
		DWORD pid;
		GetWindowThreadProcessId(hwnd, &pid);
		HANDLE processHandle = OpenProcess(PROCESS_ALL_ACCESS, false, pid);
			if(!processHandle) {
				cout << "Can't open process";
			}
			else {
				int newValue;
				cout << "[+]Process found ! PID :" << pid << endl;
				cout << "[+] Enter value to rewrite: ";
				cin >> newValue;
				while (true) {
				WriteProcessMemory(processHandle, (LPVOID)0xE0A18FF658, &newValue, (DWORD)sizeof(newValue), NULL);
				WriteProcessMemory(processHandle, (LPVOID)0xE0A18FF6F8, &newValue, (DWORD)sizeof(newValue), NULL);
				WriteProcessMemory(processHandle, (LPVOID)0xE0A18FF8E8, &newValue, (DWORD)sizeof(newValue), NULL);
				std::this_thread::sleep_for(std::chrono::milliseconds(600));
				}
				CloseHandle(processHandle);
			}
	}
}
