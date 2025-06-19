#include<iostream>
using namespace std;

//type conversion
int main(){

//conversion char to int
int a='a';
cout<<a<<endl;

//conversion to char
char c=97;
cout<<c<<endl;

//this coversion gives error beacuse char stores only two bytes
char c1=123453;

cout<<c1<<endl;

float f = 5.466;
int b = int(f);
cout << b << endl;
    
}
