#include <iostream>
using namespace std;

int main()
{

    cout << "Enter no:";
    int n;
    cin >> n;
    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {  //  cout<<"not a prime number";
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
    {
        cout << "Is a prime No";
    }
    else
    {
        cout << "Not a prime number";
    } 

    //continue ;

    for(int i=0;i<=n;i++){ 
         cout<<endl<<"HII"<<endl;
         continue;
         cout<<"Hello"; 
    }


    for(int i=0;i<=n;i--){ 
         cout<<endl<<i<<endl;
         i++; 
    }


}