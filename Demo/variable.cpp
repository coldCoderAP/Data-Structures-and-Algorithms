#include <iostream>
using namespace std;
int main()
{

    int a;
    cout << a << endl;

    if (true)
    {
        int a = 5;
        cout << a << endl;
    }

    if (1)
    {
        int b = 1;

        if (1)
        {
            int b = 2;

            if (1)
            {
                cout << b << endl;
            }
        }
    }
}
