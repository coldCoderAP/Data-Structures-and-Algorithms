#include<iostream>
#include <algorithm> //sort() library
#include<vector>
#include<unordered_map>
// #include <fstream>
 

using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {


// Check Numbers next are same
        sort(nums.begin(),nums.end());
 
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }

// Visited approch 2
//   int ans=1;
//   for(int i=0;i<nums.size();i++){

//     int index=abs(nums[i]);//gives positive number

//     if(nums[index]<0){
//         return index;
//     }

//     // visited mark 
//     nums[index]=nums[index]*-1;
//   }
 

//WAY 3 Positioning method. Put all values to its position
// Dry run it you will understand it.
 while(nums[0]!=nums[nums[0]]){
       swap(nums[0],nums[nums[0]]);

 }
 return nums[0];
//  
 
       return -1;
    }
};

int main(){

    Solution ob;

        vector<int> arr={1,5,2,3,5,4};
        
        cout << ob.findDuplicate(arr) << endl;

}