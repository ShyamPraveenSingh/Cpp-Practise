#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {3, 9, 12, 16, 20};
    sort (arr, arr + 5);
    int k = 3;
    arr[0] += k;
    arr[4] -= k;
    int res;
    res = arr[4] - arr[0];
    cout << res << endl;
    return 0;
}