#include <windows.h>
#include <Lmcons.h>
#include <cstring>
#include <direct.h>

using namespace std;

string TempFind()
{
	string Username;
	TCHAR Name[UNLEN + 1];
	DWORD Size = UNLEN + 1;
	GetUserName((TCHAR*)Name, &Size);
	Username = Name;
	return Username;
}
string CreateAddress(string Username)
{
	string Address;
	Address = "C:\\Users\\" + Username + "\\AppData\\Local\\Temp";
	return Address;
}
void RemoveFolder(string Address)
{
	
}
