#include<iostream>
using namespace std;


// long long int is the biggest var for storing int value .if
// more then that value is stored in string

long long int  factorial(int n){

    long long int  fact=1;

    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
 
 return fact;
}

int main(){

    int n=55;

    long long int  res=factorial(n);
    cout<<res;
}