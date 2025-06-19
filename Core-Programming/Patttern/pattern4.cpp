#include<iostream>
using namespace std;

int main(){
cout<<"Enter  no";
int n;
cin>>n;
 int i=1;
   int c='a';
 
// // ('A'+i-1)   

while(i<=n){

    int j=1;

    while(j<=n){
      char ch='A'+i-1;
      cout<<ch;
      j=j+1;
    }
    cout<<endl;
    i++;
}

 

// while(i<=n){

//    int j=1;
//    while(j<=n){
   
//    char ch=c;
   
//    cout<< ch;
//      j++;
//    }
//     c++;
//     i++;
//     cout<<endl;
// }



}