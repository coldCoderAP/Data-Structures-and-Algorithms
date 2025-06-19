#include<iostream>
#include<math.h>
using namespace std;

//if no is big then we check until square root of n sqrt(n).it reduces time complexity. 

bool checkPrime(int n){ 
    bool isPrime=true;

    for(int i=2;i<n  /* sqrt(n)*/;i++){
        if(n%i==0){
          isPrime=false;
          return isPrime;
        }
    }
    return isPrime;
}

int main(){

    int n=611;

    bool res=checkPrime( n);
    // cout<<sqrt(n);

    if(res==true){
    cout<<"Prime no ";
    }else{

    cout<<"Not Prime no ";
    }



    // 2. print prime no until number 

    for(int i=2;i<=n;i++){

        bool isprime=checkPrime(i);
        if(isprime==true){
            cout<<i<<" ";
        }
    }

}