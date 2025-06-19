#include<iostream>
#include <algorithm> //sort() library
#include<vector>


using namespace std;
class Solution {
public:
    vector<int> addArray(int *arr1,int *arr2,int n ,int m) {

        int i=n-1;
        int j=m-1;
        vector<int> ans;
        int carry=0;

        while(i>=0 && j>=0){
            int x=arr1[i]+arr2[j]+carry;
            int digit=x%10;
            ans.push_back(digit + '0');//to add int to string use +"0"
            carry=x/10;
            i--;j--;
        }

        //in case array1 is grater i is grater then array2 is zero for addition
        while(i>=0 ){
            int x=arr1[i]+0+carry;
            int digit=x%10;
            ans.push_back(digit + '0');//to add int to string use +"0"
            carry=x/10;
            i--;
        }
         //incase array1 is grater i is grater then array2 is zero for addition
         while(j>=0 ){
            int x=0+arr2[j]+carry;
            int digit=x%10;
            ans.push_back(digit + '0');//to add int to string use +"0"
            carry=x/10;
            j--;
        }

        //in last carry is ramains then have to add(if carry is bigger the have to use while loop)
        if(carry){
            ans.push_back(carry + '0');
        }

        //when addition is done (to remove zeors)

        while(ans[ans.size()-1]=='0'){
            ans.pop_back();
        }

         reverse(ans.begin(),ans.end());

 
     return ans;
    }
};       



 int main(){


    int arr1[]={1,2,3,4,5};
    int arr2[]={8,2,7,4,9};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    Solution s;

   vector<int> ans= s.addArray(arr1,arr2,n ,m);


 
for (auto num : ans) {
    cout << num << " ";
}
cout << endl;


 };