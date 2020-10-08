#include <iostream>
#include <cstdlib>
#include <string>
#include "ahrb.h"
#include "mute.h"
using namespace std;
int main()
{
    system("color 09");
    string TEMP;
    for (;;)
    {
        UI_page_1();
        
        if (key_controller() == 1)
        {
            cout<<"Clean Temp file\n";
            RemoveFolder(TempFind());
        }
        else if(key_controller()==(char)27)
        {
            cout<<"ESC\n";
            exit(EXIT_SUCCESS);
        }
    }
    
    return 0;
}
