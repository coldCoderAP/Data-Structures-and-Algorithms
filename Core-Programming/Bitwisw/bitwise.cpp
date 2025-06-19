#include <iostream>
using namespace std;

int main()
{
      
int a=11 ;
int b=5;

// bitwise operator and ,or,not,xor

cout<<" a&b "<< (a&b)<<endl;
cout<<" a|b "<< (a|b)<<endl;
cout<<" ~a "<< (~a)<<endl;
cout<<" a^b "<< (a^b)<<endl;



//left shift and right shift operator     <<, >>
cout<<(17<<2)<<endl;
cout<<(5<<2)<<endl;
cout<<(11>>2)<<endl;
cout<<(5>>2)<<endl;


// increment ,decrement and post increment , post decrement

cout<<++a<<endl;
//5
cout<<a++<<endl;
//5
cout<<a--<<endl;
//6
cout<<--a<<endl;
//4 
}