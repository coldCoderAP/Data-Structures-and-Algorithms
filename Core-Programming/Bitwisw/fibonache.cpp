#include <iostream>
using namespace std;

int main()
{


    cout<<"Enter No";
    int no;
    cin>>no;  
int a=0;
int b=1;
cout<<a<<" "<<b<<" ";
for(int i=1; i<=no;i++){

    int sum =a+b;
 cout<<sum <<" ";

 a=b;
 b=sum;

}

}