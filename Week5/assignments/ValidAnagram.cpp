#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// Q .An anagram is a word or phrase formed by rearranging the letters of another word or phrase,
//  using all the original letters exactly once. (EX :listen == silent , race == care)



// Way 1 Counting
// bool isAnagram(string s,string t){

//     int freqTable[256]={0};

//     for(int i=0;i<s.size();i++){
//         freqTable[s[i]]++;
//     }
//     for(int i=0;i<t.size();i++){
//         freqTable[t[i]]--;
//     }

//     for(int i=0;i<256;i++){
//         if(freqTable[i] != 0){
//             return false;
//         }
//     } 
//     return true; 
// }

// Way 2 Sorting 
bool isAnagram(string s,string t){
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end()); 

    return s == t? true:false;  
}


int main(){

    string s ="anagram";

    string t="nagaram";

    bool ans= isAnagram(s,t);

    if(ans){
        cout<<"S String is Anagram";
    }else{
        cout<<"S String is not anagram";
    }



}

