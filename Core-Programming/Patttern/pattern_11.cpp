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
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }

        int star = 1;

        while (star < i)
        {

            cout << "*";
            star++;
        }

        int str = 1;

        while (str < i)
        {
            cout << "*";
            str++;
        }

        int k = n - i + 1;
        while (k >= 1)
        {
            cout << k;
            k--;
        }

        i++;
        cout << endl;
    }
}