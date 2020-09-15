#include <iostream>
#include <cstdlib>
#include "ahrb.h"
#include "mute.h"
using namespace std;
int main(int argc, char const *argv[])
{
    system("cls");
    system("color 09");
    for (;;)
    {
        UI_page_1();
        if (key_controller() == 1)
        {
            system("cls");
            break;
        }
    }
    _getch();
    return 0;
}
