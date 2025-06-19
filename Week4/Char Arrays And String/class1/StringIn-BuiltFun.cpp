#include<iostream>

using namespace std;

int main(){

string name;

cin>>name;

string str1="love";

cout<<"Length : "<<name.length()<<endl;
cout<<"String is Empty or Not : "<<name.empty()<<endl;
cout<<"Char at position : "<<name.at(1)<<endl;
cout<<"Front Character of string: "<<name.front()<<endl;
cout<<"Back Character of string : "<<name.back()<<endl;
cout<<"Before Append Two strings : 1."<<name<<" 2. "<<str1<<endl;
cout<<"Char at position : "<<name.append(str1)<<endl;;
cout<<"After Append Two strings : 1."<<name<<" 2. "<<str1<<endl;


string str2="The is car";
//erase(3,4) //remove 3 index se  3 element
cout<<str2.erase(3,3)<<endl;    
 
cout<<str2.insert(7," is new")<<endl;
str2.push_back('s');
cout<<str2<<endl;
str2.pop_back();//pop_bcak() return void so we don't print it
cout<<str2<<endl;



if(str1.compare(str2)==0){
   cout<<"Matching "<<endl;
}else{
    cout<<"Not matching "<<endl;
}


cout<<str2.substr(4,6)<<endl;


}