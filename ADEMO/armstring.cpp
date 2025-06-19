#include<iostream>
using namespace std;

// Armstrong number is a number that is equal to the sum of cubes of its digits.
//  For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
//  Let's try to understand why 153 is an Armstrong number.

int main(){


int n=5;

int i=1;
while(i<=n){

int j=1;
    while(j<=i){

        if(j==1  || i==j || i==n){
           cout<<j;

        }else{
            cout<<" ";
        }
      j++;
    }

    cout<<endl;
    i++;
}


}