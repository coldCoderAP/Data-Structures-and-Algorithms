#include<iostream>

using namespace std;

int main(){
    
    string name;

    // cin>>name;
    getline(cin,name);

    cout<<"Name : "<<name<<endl;

    int index=0;
    while(name[index]!='\0'){ 
        cout<<name[index]<<" "; 
        index++; 
    }


}

