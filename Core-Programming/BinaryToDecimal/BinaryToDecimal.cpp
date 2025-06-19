#include<iostream>
#include<math.h>
using namespace std;
//way 2
int binaryToDecimal(int n){
 
int sum=0,factor=1;
     
    while(n!=0){
        int digit = n%10;
        sum = sum + digit*factor;
        factor = 2*factor;
        n = n/10;
    }

    return sum;
}

int main(){

cout<<"Enter No : ";
int n;
cin>>n;

cout<<"Using function :"<<endl;
cout<<binaryToDecimal(n)<<endl;//if you call after way1 in main() then n value gets zero  and answerreturn zero

int ans=0;
int i=0;

// way 1
while(n!=0){
   int bit=n%10;
   cout<<bit;
    if(bit==1){
      ans=ans+pow(2,i);

    }
   i++;
   n=n/10; 
} 
cout<<" "<<ans<<endl;

cout<<"Using function :"<<endl;
cout<<binaryToDecimal(n);




}