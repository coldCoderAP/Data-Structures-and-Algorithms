#include<iostream>
using namespace std;


int main(){

cout<<"Enter the number";
int n;
cin>>n;

for(int row=0;row<n;row++){

    for(int col=row; col<n;col++){

        if(col==row || row==0 || col==n-1){
         cout<<col+1;
        }else{
            cout<<" ";
        }


    }
    cout<<" "<<endl;
}




for(int)

}