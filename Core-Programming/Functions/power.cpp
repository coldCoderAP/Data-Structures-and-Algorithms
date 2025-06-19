#include <iostream>
using namespace std;


//inside method are the local variables
//global variables 

int power(int a,int b){

 int p=1;

 for(int i=1; i<=b; i++){

    p=p*a;
 }

    return p;
}

int main()
{


int a,b;
cin>>a>>b;

int ans=power(a,b);

cout<<a<<" Power of "<<b<<" : "<<ans;

}