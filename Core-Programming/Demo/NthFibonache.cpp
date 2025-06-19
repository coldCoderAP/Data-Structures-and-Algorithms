#include <iostream>
using namespace std;
int main()
{
    cout << "Enter any number:" <<endl;
    int n;
    cin >> n;
    cout<<"Finding "<<n<<" of fibonache series :";
   
  int first=0;
  int second =1;
//   cout<<first<<" "<<second<<" ";

int fibNo=3;
  for(int i=0; i<n ;i++){
    int last=first+second;
      first=second;
      second=last;
      // cout<< last<< " ";
        
        if(fibNo==n){
           cout<<endl<<last;
           break;
        }
      fibNo++;
  }


}