#include <iostream>
using namespace std;

void update(int arr[], int size)
{

    arr[0]=22;
   cout << "Inside the update( ) ) " << endl;
   for (int i = 0; i < size; i++)
   {
      cout << arr[i] <<" ";
   }
   cout << endl
        << "Sucess" << endl;
}

int main()
{

   int arr[] = {1, 2, 3, 4};

   int len = sizeof(arr) / sizeof(int);
   update(arr, len);

   cout << "Inside the main( ) ) " << endl;

   for (int i = 0; i < len; i++)
   {
      cout << arr[i]<<" ";
   }
}