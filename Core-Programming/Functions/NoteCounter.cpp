#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the  amount : ";
    int money;
    cin >> money;
   
   int rupee=money;
   

    int arr[] = {100, 50, 20, 10};

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    int notes[arrSize-1] = {0};
    for (int i = 0; i < arrSize; i++)
    {
        

      int amt= money%arr[i];
      notes[i]=money/arr[i];
     money = amt;
    }

    for (int i = 0; i < arrSize; i++)
    {

        cout<<rupee<<" ruppes have :"<<arr[i]<<" of "<<notes[i]<<endl;
    }
}
