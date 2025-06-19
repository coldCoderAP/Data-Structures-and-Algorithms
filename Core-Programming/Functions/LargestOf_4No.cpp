#include <iostream>
using namespace std;

int largest_OF_four(int a,int b,int c,int d)
{
int largest=a>b && a>c && a>d ?a :(b>c && b>d?b :(c>d?c:d));

return largest;

}

int main()
{
    int a,b,c,d,largest;

    int res=largest_OF_four(44,35,33,6);

    cout<<"Largest of four number is :"<<res;

}
