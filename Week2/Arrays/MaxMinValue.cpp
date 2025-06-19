#include <iostream>
using namespace std;

int maxInt(int arr[], int size)
{

    int maxi = INT32_MIN;
    for (int i = 0; i < size; i++)
    {

        // //1)
        // if (arr[i] > maxi)
        // {
        //     maxi = arr[i];
        // }

        // 2) approch with  the inbuild method

        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int minInt(int arr[], int size)
{


// INT32_MAX and INT_MAX are same but .to use IT_MAX include<limits.h>
    int mini = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        // 1) approch with our logic
        if (arr[i] < mini)
        {
            mini = arr[i];
        }

        // 2) approch with inbuild method min()

        mini = min(mini, arr[i]);
    }
    return mini;
}
int main()
{

    cout << "Enter size of array:" << endl;
    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    cout<<INT32_MAX;
    cout<<INT32_MIN;


    cout << "Maximum value is " << maxInt(arr, n) << endl;
    cout << "Minimum  value is " << minInt(arr, n) << endl;
}