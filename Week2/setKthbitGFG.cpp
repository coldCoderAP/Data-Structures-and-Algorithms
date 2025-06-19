#include<iostream>
using namespace std;

//Q.Given a number N and a value K. From the right, set the Kth bit 
//   binary representation of N. The position of Least Significant Bit
//   (or last bit)is 0, the second last bit is 1 and so on. 


int setKthBit(int num,int k){

// To set bit to number. we can left shift 1 to kth position. and after 
// that | (or) the number with mask(1<<KTh position). 


int mask=1<<k; 
return num|mask;

// OR   
// return num|1<<k;

}

int main(){

    int a,k;
    cout<<"Enter the NUM :";

    cin>>a;

    cout<<"Enter the kth position :";
    cin>>k;

   cout<< setKthBit(a,k); 

}