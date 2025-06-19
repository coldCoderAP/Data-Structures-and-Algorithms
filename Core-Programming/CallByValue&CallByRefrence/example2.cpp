#include<iostream>
using namespace std;

//Find the answer (Call by value)
int dummy(int n){
   n-=5;
   return n;
}
  
int main()
{
    cout << "Enter no:";
    int n;
    cin >> n; 
    dummy(n);
   cout<<n; 

}