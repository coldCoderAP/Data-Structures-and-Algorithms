#include <iostream>
using namespace std;

int main()
{

    char ch = 1;

    int num = 1;

    while (1)
    {

        switch (ch)
        {
        case 1:
            cout << "this is one";
            goto EndWhil;
            break;

        case '1':
            cout << "This is Char";
            break;
        default:
            cout << " Default case";
        }
        
    }
EndWhil:;

    cout << "Exit the while loop";
 
    
    loop();
    return 1;
} 

void loop()
{
    int x=0;
    while (1)
    {
        switch (x)
        {
        case 0:
            return;
        }
    }
}