#include<iostream>

using namespace std;

bool checkValidPalindrome(string s,int i,int j){

    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;

        }else{
            return false;
        }
    }
    return true;
}
bool validPalindrome(string s) {
    int i=0;
    int j=s.length()-1;

    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }else{
            //s[i]!=s[j]
            // 1 removel allowed 
            // check palindrome for annother removal

            //ith character -> remove
            bool ans1=checkValidPalindrome(s,i+1,j); 
            //ith character -> remove
            bool ans2=checkValidPalindrome(s,i,j-1);

            return ans1 ||ans2;
        } 
    }
    return true;
}

int main(){

// by removing atmost 1 element is string palindrome
    string str;
    cin>>str;

    bool ans=validPalindrome(str);

  
       if(ans){
           cout<<"Valid Palindrome";
       }else {
           cout<<"Not palindrome";
       } 

}


// Given a string s, return true if the s can be palindrome after deleting at most one character from it.

 
// Example 1:

// Input: s = "aba"
// Output: true
// Example 2:

// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.
// Example 3:

// Input: s = "abc"
// Output: false