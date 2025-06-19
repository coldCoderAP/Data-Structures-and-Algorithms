#include<iostream>
using namespace std;

// this is simple program .if you want to reverse then stored digit in array 
// and reverse it.
int printDigits(int n){
//   while(n>0) or while(n) are same .it runs until the numgets zero.
  while(n){ 
   int digit=n%10;
   cout<<digit<<" ";
//    n=n/10;
n/=10;
    
  }
  
}

int main(){

int no;
cout<<"Enter the NO :";
cin>>no;

cout<<printDigits(no);

}