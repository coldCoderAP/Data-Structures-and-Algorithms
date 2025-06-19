#include<iostream>
using namespace std;

//Find total no of set bits (means  1) in binary of numbers
int main(){
cout<<"enter two numbers ";
int a,b;
cin>>a>>b;
 int count=0;


while(a!=0  || b!=0){


    if(a&1==1){
       count++;
    }

    if(b&1==1){
        count++;
    }
    a=a>>1;
    b=b>>1;
}
cout<<count;

}