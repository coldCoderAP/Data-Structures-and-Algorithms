#include<iostream>

using namespace std;

string removeOccurrences(string s, string part) {
        

    while(s.find(part) != string::npos) {
        //if inside loop, it means that part exists in s string
        s.erase(s.find(part), part.length());
    }
    return s;
}


int main(){

    string str,part;
    cin>>str>>part;

    string ans=removeOccurrences(str,part);

    cout<<ans<<endl; 
    



}