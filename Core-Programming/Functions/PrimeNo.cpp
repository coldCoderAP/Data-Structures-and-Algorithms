#include <iostream>
using namespace std;


//inside method are the local variables
//global variables 

int checkprime(int num){
   int div=0;
   for(int i=2;i<num;i++){
 
      if(num%i==0)  {
       div++;
      }    
   }
 return div;
}

bool prime(int n){

   for(int i=2;i<n ;i++){
     
     if(n%i==0){
        return 0;
     }

   }

 return 1;
}

int main(){

     cout << "Enter the  amount : ";
    int no;
    cin >> no;

    bool ans= prime(no);

    if(ans){
        cout<<"Prime"<<endl;
    }else{
        cout<<"Not Prime"<<endl;
    }


    // 2.

    if(checkprime(no)==0){
      cout<<"Is prime NO";
    }else{
      cout<<"Is Not prime NO";

    }
   



}