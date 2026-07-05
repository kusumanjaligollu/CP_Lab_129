#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[100], n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++)
    {
     int sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += arr[j];   
            maxSum = max(maxSum, sum);
        }
    }

    cout << "Maximum subarray sum = " << maxSum << endl;

    return 0;
}