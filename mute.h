#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
using namespace std;

int key_controller()
{

    switch (_getch())
    {
    case 49:
        cout << 1;
        system("color 02");
        Sleep(400);
        system("color 09");
        return 1;
        break;
    case 27:
        system("color 02");
        cout << "program is terminated...";
        Sleep(400);
        system("color 09");
        exit(EXIT_SUCCESS);
        break;
    default:
        cout << "Error";
        system("color 04");
        Sleep(500);
        system("color 09");
        system("cls");
        return 0;
        break;
    }
}
void UI_page_1()
{
    system("cls");
    cout
        << "Windows Optimizer --Version 1.0.0"
        << "\n\n\t\b";
    cout << ">>>> (1) Clear Temp\n\n\t\b>>>> (ESC) Quit\n";
    cout << "\n\n\t$ ";
}