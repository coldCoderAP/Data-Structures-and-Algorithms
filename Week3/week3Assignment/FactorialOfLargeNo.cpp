#include<iostream>
#include <algorithm> //sort() library
#include<vector>
#include<set>
// #include <bits/stdc++.h>
// #include <fstream>
 

using namespace std;

class Solution {
    public :
     
    vector<int> factorial(int n){

        vector<int> ans;
        ans.push_back(1);
        int carry=0;

        // outer loopis for 1 to n factorail traverse
        for(int i=2;i<=n;i++){
            for(int j=0 ;j<ans.size();j++){
                int digit=ans[j]*i+carry;
                ans[j]=digit%10;
                carry=digit/10;
            }

            while(carry){
                ans.push_back(carry%10);
                carry=carry/10;
            } 
        } 

        // for(auto i :ans){
        //     cout<<i<<" ";
        // }

        reverse(ans.begin(),ans.end()); 

        return ans;
    }
};


int  main(){

    
    Solution s;
   vector<int> ans= s.factorial(5);
 
   for(auto i :ans){
    cout<<i<<" ";
}  

};