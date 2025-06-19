#include<iostream>
#include<vector>
using namespace std;
// Way 2 : using two pointer approch .in place sorting
    void usingTwoPointer(vector<int>& nums){
      
       int n=nums.size(); //gives vector size
        int index=0;
        int left=0;
        int right=n-1;
         
         while(index<=right){//right is sorting from n-1  an index is
                              //sorting from left 0.
            
            if(nums[index]==0){
                swap(nums[index],nums[left]);
                index++;
                left++;
            }else if(nums[index]==2){
                swap(nums[index],nums[right]);
                right--;
                // We dont index++ beacause we dont know shifted value
                // we have to check it if it is 0,1,2
            }else{
                // if nums[index]==1 
                index++;
                // We only shift 0 to left and 2 to right .ten ramaning 
                // ele will get in middle.

            }
         }

    }


 // Way 3 :using Counting Method.This is not optimal solution .Here we are counting 0,1,2 and overides elements .This is not in place sorting.(We have to shuffle elements).
    void countAndOverride(vector<int> &nums){

        int zero=0;
        int one=0;
        int two=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }else if(nums[i]==1){
                one++;
            }else{
                two++;
            }
        }

        int i=0;

        while(zero--){
            nums[i]=0;
            i++;
        }
        while(one--){
            nums[i]=1;
            i++;
        }
        while(two--){
            nums[i]=2;
            i++;
        }

    }


int main(){
// 1.
    // pass array
    // int arr[]={2,0,1};

    // int size=sizeof(arr)/sizeof(int);
    // // UsingTwoPointer(arr,size);

    // for(int i:arr){
    //     cout<<i<<" ";
    // }

// 2.
    // Pass vector 
    vector<int> arr1={2,2,1,1,0,0};
    countAndOverride(arr1);
    
    for(auto i:arr1){
        cout<<i<<" ";
    }


    
}