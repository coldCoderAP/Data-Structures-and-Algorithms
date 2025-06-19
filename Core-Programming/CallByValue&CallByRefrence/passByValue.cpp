#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout<<"the value of N in dummy() is :"<<n <<endl;
}
  
int main()
{

    // in call by refrence actual parameter and foraml parameter have different memory location
    cout << "Enter no:";
    int n;
    cin >> n;
 
    dummy(n);
   cout<<"the value of N in main is : "<<n <<endl; 
   
    cout<<"In call by value (means value passing to function and function creates \nduplicate element that does not affect the orignal element is called pass by value)";
     

}