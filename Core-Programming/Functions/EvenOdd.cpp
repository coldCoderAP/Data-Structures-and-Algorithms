#include <iostream>
using namespace std;

//1)// bool isEven(int no){ 
//    if(no%2==0){
//      return true;
//    }else{
//       return false;
//    } 
// }


//If any number of &1 is true(1) then the number is odd  and 
//any number of &1 is false(0) then no is even

bool isEven(int no){ 
   if(no&1){
     return 0;
   } 

   return 1; 
}



int main()
{ 
cout<<"Enter the number";
int n;
cin>>n;

bool res=isEven(n);

if(res){
    cout<<"no is Even";
}else{
    cout<<"No is Odd";
}

}