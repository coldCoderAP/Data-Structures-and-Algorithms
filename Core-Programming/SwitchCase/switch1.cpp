#include <iostream>
using namespace std;

int main()
{

//switch inṇṇside switch 

    char ch = 1;

    int num = 1;
    switch (ch)
    {
    case 1:
        cout << "this is one";
        break;

    case '1':
        switch (num)
        {
            case 1:cout<<"this no 1";
            break;
        }
        cout << "This is Char";
        break;
    default:
        cout << "Tis Default case";
    }

    return 1;
}