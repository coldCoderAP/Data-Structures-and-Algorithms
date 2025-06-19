#include <iostream>
using namespace std;

// two appeoches to print
//  A B C
//  B C D
//  C D E

// 1) take one variable outside loop and increment value by one
// 2) use formula   ('A'+row+col-2) inside the inner loop

int main()
{
    cout << "enter no";
    int n;
    cin >> n;

    int i = 1;

  //  while(i<=n){
  //   int j=1;
  //   while(j<=n){

  //       char ch='A'+i+j-2;
  //       cout<<ch++;
  //     j++;
  //   }
  //   cout<<endl;
  //   i++;
  //  }
  
    char ch = 'a';
    while (i <= n)
    { 
        int j = 1;
        while (j <= n)
        {
            cout << ch++;
            j++;
        } 
        cout << endl;
        i++;
    }
}