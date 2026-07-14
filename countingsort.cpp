#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int count[k] = {0};

    // Count frequency
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // Prefix sum
    for (int i = 1; i < k; i++)   // Start from 1
    {
        count[i] = count[i] + count[i - 1];
    }

    int b[n];

    // Build output array
    for (int i = n - 1; i >= 0; i--)   // Include index 0
    {
        b[--count[arr[i]]] = arr[i];
    }

    cout << "Sorting by Counting Sort:\n";

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}