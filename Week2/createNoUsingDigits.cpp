#include<iostream>
using namespace std;
// here we can add only one digit
// how to add more than two digit
int createNoUsingDigit(int n){
int noCreated=0;
    for(int i=0;i<n;++i){
        // cout<<i;
        cout<<"Enter the number : ";
        int no;
        cin>>no;
        noCreated=noCreated*10+no;

    }
    return noCreated;
}


int main(){

int digit;
cout<<"Enter no digit : ";
cin>>digit;

cout<<createNoUsingDigit(digit);

}