#include<iostream>
using namespace std;


int countSetBit(int num){ 
  int count=0; 



// Way 2
   while(num>0){ 
     int bit=num%2;
       //  num%2 gives gives remainder 0 or 1.num gives binary 
       // of num and then num & with 1.it will be binary of number.
        if(bit==1){
        count++;
        }
       //  num/2 gives questient .do this until num get 0.
     num=num/2; 
   } 


// Way 2
  while(n){
    n=n&(n-1); /* n=5;   logic 1. n=n&(n-1)  100=101&100* 2. 000=100-011  so n=0 and count=2 /
    count++;
  }
return count;

}

int usingBinaryCountSetBit(int n){
    int count=0;

    // suppose num=10; Binary is 1010
//  while(n>0) and while(n) is same .beacuse when n gets 0 condition is false and loop ends
    while(n>0){
        // the equality operator (=)  has higher precedence than the bitwise operators hence the need for parentheses
        int bit=(n&1); /* n&!= bit ; 1) 1010 & 1=0 */ /*2) 101 & 1= 1*/ /*3) 10 & 1=0 */ /*4) 1 & 1=1*/
                     // n&1 can (bitwise Operator)& last digit of binary with 1 
                      // it gives the last digit. 
        if(bit==1){
            count++;
        } 
        n=n>>1; /*1) 1010>>1 = 101*/ /*2) 101>> = 10*/ // n>>1 can shift binary with with digit
    }

    return count;
}

int main(){

int n;
cout<<"Enterthe number";
cin>>n;
int setBitCount=countSetBit(10);
cout<<setBitCount<<endl;

 
cout<<"Using Binary operator : ";

cout<<usingBinaryCountSetBit(10);
 

}