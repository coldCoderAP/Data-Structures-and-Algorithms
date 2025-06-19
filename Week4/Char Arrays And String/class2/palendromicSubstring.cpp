#include<iostream>

using namespace std;
int expand(string s,int i,int j){

    int count=0;
    while(i>=0 &&  j <s.length() && s[i]==s[j] ){
       count++;
       i--;
       j++;
    }
    return count;
 }
int countSubstrings(string s) {
    int totCount=0;
    for(int center=0;center<s.length();center++){
        // ODD
        int oddKaAns=expand(s,center,center);
        // EVEN
        int evenKaAns=expand(s,center,center+1);
     totCount=totCount+oddKaAns+evenKaAns;
    }

    return totCount;
    
}


int main(){
    string str;
    cin>>str;


    int ans=countSubstrings(str);

    cout<<"Tot SubStrings are : "<<ans<<endl;



}



// Given a string s, return the number of palindromic substrings in it. 
// A string is a palindrome when it reads the same backward as forward. 
// A substring is a contiguous sequence of characters within the string.
 
// Example 1:

// Input: s = "abc"
// Output: 3
// Explanation: Three palindromic strings: "a", "b", "c".
// Example 2:

// Input: s = "aaa"
// Output: 6
// Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".