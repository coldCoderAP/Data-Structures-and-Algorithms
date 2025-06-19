#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
     
    int n=nums.size();
    vector<int> ans(n);
    int i=0;
    int pos=0;
    int neg=1;

    while(i<n){

      if(nums[i]>0){
       ans[pos]=nums[i];
       pos=pos+2;
       }else {
       ans[neg]=nums[i];
       neg=neg+2;
       
      }
      i++;

    } 
       return ans;
   }
 

int main(){
    
vector<int> arr={3,2,-5,8,-7,-8};

vector<int> ans=rearrangeArray(arr);

for(int i:ans){
    cout<<i<<" ";
} 

}

//Using for loop
// class Solution {
//     public:
//         vector<int> rearrangeArray(vector<int>& nums) {
           
//            int n=nums.size();
//            vector<int> ans;
//            int even=0;
//            int odd=1;
    
    
//         for(int i=0;i<n;i++){
//             if(nums[i]>0){
//                 ans.push_back(nums[even]);
//                 even+=2;
//             }else{
//                 ans.push_back(nums[odd]);
//                 odd+=2;
//             }
//         } 
//             return ans;
//         }
//     };


    
//Brute force ->get extra space
// vector<int> pos,neg;

// for(int i=0;i<nums.size();i++){
//     if(nums[i]<0){
//         neg.push_back(nums[i]);
//     }else{
//         pos.push_back(nums[i]);
//     }
// }

// vector<int> ans;
// int i=0;
// while(i<nums.size()){
//     ans.push_back(pos[i]);
//     ans.push_back(neg[i]);
//   i++;
// }

    