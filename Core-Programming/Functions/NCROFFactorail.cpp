#include <iostream>
using namespace std;

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}




int nCr(int n,int r){

int num=fact(n);

int denom=fact(r) *fact(n-r);

return num/denom;

}

int main()
{

    cout << "Enter the no";
    int n;
    cin >> n; 
    int ans = fact(n); 
    cout << "Factorail is :" << ans; 

//ncr have  the formula  we inplemnt in nCR function
  cout<<"Enter the no  R :";
  int r;
  cin>>r;
  int ncr=nCr(n,r);

  cout<<"nCr :"<<ncr;
 

}