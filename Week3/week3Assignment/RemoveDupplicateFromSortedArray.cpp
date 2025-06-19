#include<iostream>
#include<vector>

using namespace std;
class Solution{

    public:
       int removeDuplicates(vector<int> &nums){
        int i=1; //for traverse

        int j=0; //position of unique elements

        while(i<nums.size()){
            if(nums[j]==nums[i]){
                i++;
            }else{
                j++;
                nums[j]=nums[i];
                i++;

            }
        } 
        return j+1;
       }
};

int main(){
    vector<int> nums={0,0,1,1,1,2,2,3,4,4};

    Solution s;
    int uniqueEleSize=s.removeDuplicates(nums);

    int i=0;
    while(i<uniqueEleSize){
        cout<<nums[i]<<" ";
        i++;
    }
}

