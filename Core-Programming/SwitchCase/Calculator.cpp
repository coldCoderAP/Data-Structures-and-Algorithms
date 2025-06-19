#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter  first no";

    cin >> a;

    cout << "Enter  second no";

    cin >> b;

    int operation = 0;

    cout << "What operation do you want +,-,?,%";
    char ch;
    cin >> ch;

    switch (ch)
    {

    case '+':
     operation=a+b;
        break;

    case '-':
    operation=a-b;
        break;
    case '/':
    operation=a/b;
        break;
    case '%':operation=a%b;
        break;

    default:
        "invalid";
    }


    cout<<"\nyour answer is : "<<operation;
}
