#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    int m = arr[0];

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        m = max(m, sum);

        if (sum < 0) {
            sum = 0;
        }
    }

    cout << m << endl;

    return 0;
}