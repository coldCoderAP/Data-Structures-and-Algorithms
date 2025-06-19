#include <iostream>
using namespace std;
int main()
{
    cout << "Enter no:";
    int n;
    cin >> n;
    
    int prod=1;
    int sum=0;

 while(n!=0){
   
   int digit=n%10;
   prod=prod*digit;
   sum=sum+digit;
   n=n/10;
 }
 
 int ans=prod-sum;
 cout<<ans;

// }

// 🔁 Difference from Sum:
// Operation	Real World	Programming
// Sum     =	Total cost by adding items	-> 1 + 2 + 3 = 6
// Product =	Total by multiplying      	-> 1 × 2 × 3 = 6
