#include<iostream>

using namespace std;

string removeDupplicates(string s){

    string str="";
 
    int i=0;

    while(i<s.length()){
        if(str.length()>0 && str[str.length()-1]==s[i]){
            str.pop_back();
        }else{
            str.push_back(s[i]);
        }
        
        i++;
    }

    return str;
}

int main(){

string name;

cin>>name;


string ans=removeDupplicates(name);
cout<<"After removing all adjusent ele form string :"<<ans<<endl; 
 
}

// You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

// We repeatedly make duplicate removals on s until we no longer can.

// Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

// Example 1:

// Input: s = "abbaca"
// Output: "ca"
// Explanation: 
// For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".