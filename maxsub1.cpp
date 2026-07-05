#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[20], n;

    cout << "Enter the size of array: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int sum = 0;

            for(int k = i; k <= j; k++)
            {
                sum += arr[k];
            }

            m = max(m, sum);
        }
    }

    cout << "Maximum sum subarray = " << m;

    return 0;
}