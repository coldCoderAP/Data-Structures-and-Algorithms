#include <iostream>
using namespace std;


//inside method are the local variables
//global variables 

int counting(int no){
 
 for(int i=1; i<=no; i++){
    cout<<i<<" ";
 }
}

int countingBtwNums(int no1,int no2){
 
  int  count=0;
 for(int i=no1; i<no2; i++){

  count++;
 }
 cout<<"Number of count between No1 and No2 is : "<<count;
}


int main(){



   //  1. no of counting
   //   cout << "Enter the  amount : ";
   //  int money;
   //  cin >> money;

   //  counting(money);


   //  2 .count between numbers

   cout << "Enter the  no1 : ";
    int no1;
    cin >> no1;
   cout << "Enter the  no2 : ";
    int no2;
    cin >> no2;

    countingBtwNums(no1,no2);



   
}