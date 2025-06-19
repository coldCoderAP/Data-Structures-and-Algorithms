#include<iostream>
#include <algorithm> //sort() library
#include<vector>
#include<unordered_map>
// #include <fstream>
 

using namespace std;
class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(vector<int> &arr) {
      
    //   Solution 1: traversing
        // int ans=0;
        // for(int i=0;i<arr.size();i++){
        // for(int j=i+1;j<arr.size();j++){
        //     if(arr[i]==arr[j]){
        //         return i+1;
        //     }
        // }
            
        // }
       
    //   Solution 2:Using  Unorderd map,hash hashing used to count the
    //              repeating numbers.
        
        unordered_map<int,int> hash;
        
        for(int i=0;i<arr.size();i++){
            hash[arr[i]]++;
        }
        
        for(int i=0;i<arr.size();i++){
            if(hash[arr[i]]>1){
                return i+1;
            }
        }
        
    // By using hash array
    
    // int * arr=hash(arr);
    
        return -1;
    }
};

 
int main() {

    // int t;
    // cin >> t;
    // cin.ignore();
    // while (t--) {
    //     vector<int> arr;
    //     string input;
    //     getline(cin, input); // Read the entire line for the array elements
    //     stringstream ss(input);
    //     int number;
    //     while (ss >> number) {
    //         arr.push_back(number);
    //     }

        Solution ob;

        vector<int> arr={1,5,2,3,5,4};
        
        cout << ob.firstRepeated(arr) << endl;
    }
 