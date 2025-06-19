#include <iostream>
using namespace std;

int main()
{
cout << "Enter no:";
    int n;
    cin >> n;

    // int i = 1;  
    // for( ;;){
    //    if(i<=n){
    //     cout<<(i)<<endl;

    //    }else{
    //        break;
    //    }
       
    //    i++;
    // }


    // for(int a=0,b=1; a>=0 && b>=1; a--,b--){
    //     cout<< a<<" hello " <<b<<endl;
    // }

    int sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }

    cout<<sum;

}