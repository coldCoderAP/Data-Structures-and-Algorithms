#include<iostream>
using namespace std;

bool isPrime(int n){

  for(int i=2;i<n;i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}
  
int main()
{     

 int no=17;

  bool res=isPrime(no);
  if(res){
    cout<<"Prime No";

  }else{
    cout<<"Not Prime";
  }


  for(int i=2;i<=no;i++){
    bool res=isPrime(i);

    if (res){
      cout<<i<<" ";
    }
  }

  
}

 