#include <iostream>
using namespace std;

int main()
{

    // A B C
    // A B C
    // A B C

    // A B C
    // D E F
    // G H I

    cout << "enter no";
    int n;
    cin >> n;

    int a=1;
    // cout<<a;

    int i = 1; 
 

  while (i <= n)
    { 
        int j = 1;
          
            char ch='A'+i-1;
        while (j <= n)
        { 
             cout<<ch;
             ch++; 
             j++;
        }
        cout << endl;
        i++;
    }


    // char ch = 'A';
    //   while (i <= n)
    // { 
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << ch++;
    //         j++;
    //     } 
    //     cout << endl;
    //     i++;
    // }

    //2)// while (i <= n)
    // { 
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char ch = 'A' + j - 1;
    //         cout << ch;
    //         j++;
    //     } 
    //     cout << endl;
    //     i++;
    // }

    return 0;
}