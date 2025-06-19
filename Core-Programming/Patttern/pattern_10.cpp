#include <iostream>
using namespace std;

int main()
{
    cout << "Enter no:";
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {

        int space = n - i;
        while (space)
        {
            cout << "*";
            space = space - 1;
        }
        
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        int h = 1; 
        while (h < i)
        { 
            cout << h;
            h++;
        }

        i++;
        cout << endl;
    }
}
