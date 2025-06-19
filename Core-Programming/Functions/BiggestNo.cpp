#include<iostream>
using namespace std;
 
 int check(int a,int b,int c){
  int big=a>b?(a>c?a:c):(b>c?b:c);
    return big;
 }

int main(){
    int a,b,c,big;

   int res=check(11,22,33);

    cout<<"Result :"<<res;
   
}