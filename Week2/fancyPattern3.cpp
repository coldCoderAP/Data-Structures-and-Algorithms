#include<iostream>
using namespace std;

int main(){

    int n=5;

for(int i=0;i<n;i++){
    int cond=0;
    if(i<=n/2){
         cond=2*i;
    }else{
        cond=2*(n-i-1);
    }

    for(int j=0;j<=cond;j++){
        if(j<=cond/2){
        cout<<j+1;
        }else{
            cout<<cond-j+1;
        }

    }
    cout<<endl;
}




}