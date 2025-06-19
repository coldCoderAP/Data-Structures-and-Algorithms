// in memory location their is one symbol table .
// in symbol table variable name mapped with their corrosponding address 
// in memory location. so,when we call variable name their corrosponding 
// address calls ans their value prints.

#include<iostream>
using namespace std;

int main(){

    int n=5;

    n=n+5;

    cout<<n<<endl;

    // Address of opertor

    cout<<&n;
}
