#include <iostream>
using namespace std;

// two appeoches to print
//  D
//  C D
//  B C D
//  A B C D
// 1)  with reverse side
// 2)  with 'A' position

int main()
{
    cout << "enter no";
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;

        char ch='A'+(n-i);
        while (j <= i)
        {
              
            cout << ch++;
            j++;
        }
        i++;
        cout << endl;
    }


    // This Only works for 4 digit
    //  while (i <= n)
    //  {
    //      int j = 1;
    //      while (j <= i)
    //      {
    //          char ch = 'D' - (i - j);
    //          cout << ch;
    //          j++;
    //      }
    //      i++;
    //      cout << endl;
    //  }
}