#include<iostream>
#include<vector>
 
using namespace std; 

int peakIndexInMountainArray(vector<int>& arr) {
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            //A line mai hu 
            // peak right mai exist karta hai
            s=mid+1;
        }else{
            //b line mai hu
            // Ya to peak element pai hu then 
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
    
}


int main(){

    vector<int> arr={10,20,30,90,70,60,50,40};
   int ans=peakIndexInMountainArray(arr);

   cout<<arr[ans]<<endl;



}