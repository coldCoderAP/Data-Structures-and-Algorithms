#include<iostream>

using namespace std;


string decodeMessage(string key, string message) {

    char start='a';
    char mapping[256]={0};

    for(auto ch:key){
      if(ch!=' ' && mapping[ch]==0){
          mapping[ch]=start;
          start++; 
      }
    }

      string ans;
    for(auto ch:message){

      if(ch==' '){
         ans.push_back(' ');
      }else{
          char decodedChar=mapping[ch];
          ans.push_back(decodedChar);
      }
    }

      return ans;
  }


int main(){
   
    // NOTE :cin spperated by word ,space,,tab 
    // use getline(cin,length );

    string str,message;
    
    // cin>>str>>message;   // not used to read a line  (separatd by enter,space,tab) BUT getline() only seperated by enter

    
   
    getline(cin,str);
    getline(cin,message);

    string ans=decodeMessage(str,message);
    cout<<"ans : "<<ans<<endl;



}