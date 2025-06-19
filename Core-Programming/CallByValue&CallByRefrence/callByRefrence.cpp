#include<iostream>
using namespace std;


int incrementValue(int &n){

    n=n+10;
    return n;
}

int main(){
    // in call by refrence actual parameter and formal parameter have same memory 
    // location

    int n; 
    cout<<"Enter the number";
    cin>>n;

    incrementValue(n);

    cout<<n;
}