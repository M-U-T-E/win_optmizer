#include <windows.h>
#include <Lmcons.h>
#include <cstring>
#include <direct.h>
#include <fstream>
#include <cstdlib>
#include <string>
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
	Address = "C:\\Users\\"+ Username +"\\AppData\\Local\\Temp\\*";
	return Address;
}
void RemoveFolder(string Address)
{
    Address=CreateAddress(TempFind());
	string ps_cmd;
    ps_cmd="PowerShell remove-item -recurse "+Address;

    system(ps_cmd.c_str());
}
