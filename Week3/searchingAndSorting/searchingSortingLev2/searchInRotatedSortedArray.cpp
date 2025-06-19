#include<iostream>
#include<vector>

using namespace std; 

 
      
      int findPivotIndex(vector<int>& arr){
          int s=0;
          int n=arr.size();
          int e=n-1;
          int mid= s+(e-s)/2;
  
          while(s<=e){
              if(s==e){
                  return s;
              }
  
              //cond lagana bhool mat jana in case mishoud be at 0 or n 
  
              if(mid+1 < n && arr[mid]>arr[mid+1]){
                  return mid;
              }else if( mid-1 >=0 && arr[mid] <arr[mid-1]){
                  return mid-1; 
              }else if(arr[s]>arr[mid]){
                  e=mid-1;
              }else{
                  s=mid+1;
              }
  
              mid=s +(e-s)/2;
          }
          return -1;
      }
  
  
      int binarySearch(vector<int> & arr,int s,int e,int target){
          int mid=s +(e-s)/2;
  
          while(s<=e){
              if(arr[mid]==target){
                  return mid;
              } 
              if(target>arr[mid]){
                  s=mid+1;
              }else{
                  e=mid-1;
              }
              mid=s+(e-s)/2;
          }
          return -1;
      }
  
  
  
      int search(vector<int>& nums, int target) {
          int pivotIndex=findPivotIndex(nums);
          int n=nums.size();
  
          int ans=-1;
  
          if(target >= nums[0] && target<= nums[pivotIndex]){
               ans=binarySearch(nums,0,pivotIndex,target);
          }else{
              ans=binarySearch(nums,pivotIndex+1,n-1,target);
          }
  
      return ans;
      }
  
 
int main(){
vector<int> arr={12,14,16,2,4,6,8,10}; 
int ans=search(arr,2); 
cout<<ans<<endl; 
}