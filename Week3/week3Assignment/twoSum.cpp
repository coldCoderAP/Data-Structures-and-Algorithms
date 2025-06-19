#include<iostream>
#include <algorithm> //sort() library
#include<math.h>

using namespace std;

bool twosum(int arr[],int k,int n){


    // way 2  using traversing

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
  
             if(arr[i]+arr[j]==k){
                return true;
             }

        }
    }


// Way 1 using two pointer approch
// int l=0;//low index
// int h=n-1;  // higher index 

// while(l<h){
//     int csum=arr[l]+arr[h];

//     if(csum==k){
//         return true;
//     }else if(csum<k){
//         l++;
//     }else if(csum>k){
//         h--;
//     }
// }

return false;

}

int main() {
 int arr[]={130,30,30,34,35,60};

    
    int size=sizeof(arr)/sizeof(int);
 sort(arr,arr+size);
     int k;
    cout<<"Enter the Number :"<<endl;
    cin>>k;



    if(twosum(arr,k,size)){
        cout<<"found";
    }else{
        cout<<"Not found";
    }





}

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].