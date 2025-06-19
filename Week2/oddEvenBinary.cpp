#include<iostream>
using namespace std;


bool check(int num){

    if((num&1)==0  /* num%2==0*/){
        
       return  true;
    }else{
        return false;
    }
}



int main(){

  int num;
  cout<<"Enterthe number :";
  cin>>num;
 

  bool result=check(num);

   if(result){
    cout<<"Number is even";
   }else{
    cout<<"Number is odd";
   }
}