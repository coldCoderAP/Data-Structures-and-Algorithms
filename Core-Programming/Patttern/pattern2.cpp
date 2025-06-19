#include<iostream>
using namespace std;

int main(){

    cout<<"Enter no";
    int n;
    cin>>n;  
    int no=1; 
    int col=1;

while(col<=n){

   
    int row=1;
    int value=col;
    while(row<=col){
       cout<<value;
       value=value+1;
        no++;       
     row=row+1;  
    }
    col=col+1; 
    cout<<endl;

 } 



//  while(col<=n){

//     int a=0;
//     int row=1;
//     while(row<=col){
//        cout<<col+a++;
//         no++;       
//      row=row+1;  
//     }
//     col=col+1; 
//     cout<<endl;

//  } 
}