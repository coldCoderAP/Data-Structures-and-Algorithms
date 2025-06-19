#include<iostream>
#include <algorithm> //sort() library
#include<vector>
#include<set>
// #include <bits/stdc++.h>
// #include <fstream>
 

using namespace std;
class Solution {
public:
    vector<int> findDuplicate(vector<int>& a,vector<int>& b,vector<int>& c ,int n1,int n2,int n3) {

 
        int i,j,k;
        i=j=k=0;
        vector<int> ans;
        set<int> st;




        while(i<n1  && j<n2  && k<n3){
            if(a[i]==b[j] && b[j]==c[k]){
                st.insert(a[i]); 
                i++;j++;k++;
            } else if(a[i]<b[j]){
                i++; 
            } else if(b[j]<c[k]){
                j++;
            }else{
                k++; 
            }
        }

        for( auto i:st){
            ans.push_back(i);
        } 
     return ans;
    }
};       



 int main(){


 

     vector<int> v1={1,5,10,20,40,80};
     vector<int> v2=  {6,7,20,80,100};
     vector<int> v3=  {3,4,15,20,30,70,80,120};

    int r1=v1.size();
    int r2=v2.size();
    int r3=v3.size();

    
    Solution s;
vector<int> result = s.findDuplicate(v1, v2, v3, r1, r2, r3);
for (int num : result) {
    cout << num << " ";
}
cout << endl;


 }