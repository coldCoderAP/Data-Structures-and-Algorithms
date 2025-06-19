#include<iostream>
using namespace std;


//in given array every elements are two times but only one element is one time find it.
int main(){

// it only works on two dupplicate elements
    int arr[]={1,2,3,4,2,3,1,5,4,};

    int size=sizeof(arr)/sizeof(int);

int ans=0;

    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    cout<<ans;



}
