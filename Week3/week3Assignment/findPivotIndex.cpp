#include<iostream>
#include <algorithm> //sort() library
#include<vector>

using namespace std;

// Approch 1    T.C=O(n)
   int prefixSumApproch(vector<int> &nums){
     
    //  Declearing Vector size Of nums and with value 0.
    //   left sum of all index 
       vector<int> lsum(nums.size(),0);
    //    right sum of all index
       vector<int> rsum(nums.size(),0);


       int n=nums.size();
//   when index 0 ,then there is no element in left 
// so we are starting from index 1 to n.
// we are adding all left  sum of index to lsum.
       for(int i=1;i<n;++i){
              lsum[i]=lsum[i-1]+nums[i-1];
       }

    // When index is last n-1 then right side sum=0,because no ele in right.
    // when index is second last then last index (n-1)value 
    // stored in rsum[i](n-2). (All right sum value add in rsum)

// Comparing all sums of right and left index are equal as compare to index.
       for(int i=n-2;i>=0;--i){
            rsum[i]=rsum[i+1]+nums[i+1];
       }

       for(int i=0;i<n;i++){
        if(lsum[i]==rsum[i]){
            return i;
        }
       }


 return -1;   
}




 int pivotIndexBruteForce(vector<int>& nums) {
 int n=nums.size();

        for(int i=0;i<n;i++){

            int leftSum=0;
            int rightSum=0;
            int index=0;
            while(index<i){
                leftSum+=nums[index];
                index++;

            }
  index++;
            while(index<n){
                rightSum+=nums[index];
                // cout<<nums[index]<<" ";
                index++;
                
            }
                // cout<<leftSum<<" "<<rightSum;
            if(leftSum==rightSum){
                return i;
            }
        }

        return -1;
       
        
    }


int main() {

vector<int> arr={1,7,3,6,5,17};
 cout<< pivotIndexBruteForce(arr);
 
}

// Given an array of integers nums, calculate the pivot index of this array.

// The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

// If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

// Return the leftmost pivot index. If no such index exists, return -1.

// Example 1:

// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation:
// The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11
// Example 2:

// Input: nums = [1,2,3]
// Output: -1
// Explanation:
// There is no index that satisfies the conditions in the problem statement.
// Example 3:

// Input: nums = [2,1,-1]
// Output: 0
// Explanation:
// The pivot index is 0.
// Left sum = 0 (no elements to the left of index 0)
// Right sum = nums[1] + nums[2] = 1 + -1 = 0