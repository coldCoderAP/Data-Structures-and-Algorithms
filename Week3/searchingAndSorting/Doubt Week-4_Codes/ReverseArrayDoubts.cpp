#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=2;  //reverse arrat with
 
    int index=0;
    // reverse(arr[0], arr[size-1]);  // Incorrect

    reverse(arr,arr+size);
    reverse(arr,arr + k);
    reverse(arr + k ,arr + size);
    for(int i:arr){
        cout<<i<<" ";
    }


    vector<int> vec={1,2,3,4,5,6,7};
 
    int k1=8;  //reverse arrat with

    k1=k1 % vec.size();
 
    // int index=0;
    // reverse(arr[0], arr[size-1]);  // Incorrect

    reverse(vec.begin(),vec.end());
    reverse(vec.begin(),vec.begin()+ k1);
    reverse(vec.begin()+ k1 ,vec.end());
    cout<<endl;
    for(int i:vec){
        cout<<i<<" ";
    }






}