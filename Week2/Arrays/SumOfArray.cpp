#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, -3, -4};
    int len = sizeof(arr) / sizeof(int);

    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }

    cout << sum;
}