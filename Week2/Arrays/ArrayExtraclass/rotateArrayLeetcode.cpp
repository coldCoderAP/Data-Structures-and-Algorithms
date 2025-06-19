#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
// Way 1 by LB  (full Program)
     int n=nums.size();
    vector<int> ans(n); //created vector with  n size

    for(int index=0;index<n;index++){
        int newIndex=(index+k)%n;
        ans[newIndex]=nums[index];
    }
     nums=ans;


// Way 2 Solve by me but Time & sapce complexity o(n)
    //      int n=nums.size();
    //       vector<int> rightEle;
    //       vector<int> leftEle;
    //     for(int i=n-k;i<n;i++){
    //     rightEle.push_back(nums[i]); 
    //     }
    //     for(int i=0;i<n-k;i++){
    //     leftEle.push_back(nums[i]);
    //     }
    //    int count=0;
    //     for( int i=0;i<k;i++){
    //         nums[i]=rightEle[i];
    //         count++;
    //     }
        
    //     for( int i=count,j=0;i<n;i++,j++){
    //         nums[i]=leftEle[j];
    //     }
    }

int main(){

    // we have to sort 0,1,2 this are the colors red,white,blue
   vector<int> nums={2,1,0,1,2,1,0,0,1};
  
   int k;
    cout<<"rotate array by : ";
   cin>>k;

    rotate(nums,k);

    cout<<"After sorting"<<endl;

    for(auto i:nums){
        cout<<i<<" ";
    }

 


}