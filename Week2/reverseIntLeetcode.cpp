#include<iostream>
#include<limits.h>
 
using namespace std;

int reverse(int n){

int rev=0,ans=0;  
bool isNeg=false;

//if int_min is less than num  then return 0. INT_MIN is -2147483648,
if(n<=INT_MIN){
    return 0;
}

// if no is negative then convert it into positive .and then reverse
// and later negative the number
if(n<0){
   isNeg=true;
    n=-n ;
} 
while(n>0){

//when we reverse the num.if ans is grater then INT_MAX then return 0.
// INT_MAX range is 2147483647 .so INT_MAX/10 =214748364 if any of this
// value is grater then it return 0.

    if(ans>INT_MAX/10){
        return 0;
    } 
    int lastdigit=n%10;
    ans=ans*10+ lastdigit;
    n=n/10;
}

   return isNeg?-ans:ans;
}

int main(){

int ans=reverse(214748364);
cout<<ans <<endl;

cout<<INT_MIN<<" is INT_MIN ,INT_MAX is "<<INT_MAX;

}