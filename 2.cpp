#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n, arr[100];
    cin >> n;

    for (int i = 0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr + n+1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << '\t';
    cout << '\n';

    int k;
    cin >> k;
    cout << arr[k-1];

    return 0;
}