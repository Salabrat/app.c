#include <windows.h>
#define STRLEN(x) (sizeof(x)/sizeof(TCHAR) - 1)
const TCHAR szMsg[] = "What's your name?\n";
int main() {
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD dwCount = 0;
	TCHAR szName[16];

	WriteConsole(hStdout, &szMsg, STRLEN(szMsg), &dwCount, NULL);
	ReadConsole(hStdin, &szName, STRLEN(szName), &dwCount, NULL);
	WriteConsole(hStdout, &szName, STRLEN(szName), &dwCount, NULL);
	ExitProcess(0);
return 0;
}