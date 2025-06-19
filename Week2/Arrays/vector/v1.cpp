#include <iostream>
#include<vector>
using namespace std;

 


int main()
{

    vector<int> v;
    
    vector<int> v1={1,2,3,4};
    vector<int> v2{1,2,3,4};
    vector<int> v3(5,1);  //insert 5 size 1 elememt in all index


vector<int> copy_v(v); //coped
    int size=v.size();

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

cout<<v[0]<<" "<<v.front()<<endl;
cout<<v[v.size()-1]<<" "<<v.back();

   for(int i=0;i<v.size();i++){
    cout<<v[i];
   }

// Vecter size will be incremented size+5
   for(int i=0;i<5;i++){
     int n;
     cout<<"Entre the number :";
     cin>>n ;
     v.push_back(n);
   }

cout<<" "<<v.size();
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
v.pop_back();
cout<<endl<<"With For Each :";
   for(auto i:v){
    cout<<i<<" ";

   }


 
}