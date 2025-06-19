#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n,sum=0,factor=0;
    cin>>n;
    while(n!=0){
               int bit =n%10;

        if(bit==1){
        sum = sum + (2*factor);
        factor = 2*factor;
        }
       
         
    }
    cout<<sum;
    return 0;
}