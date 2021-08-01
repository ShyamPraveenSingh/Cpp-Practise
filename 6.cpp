#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++)
        cin >> arr[i];
    cout << "Before Rotation" << '\n';
    for(int i = 0; i<n; i++){
        cout << arr[i] << '\t';
    }
    cout << '\n';

    int k, temp, j;
    cin >> k;

    for (int i = 1; i<=k; i++){
       temp = arr[0];
       for (j = 0; j < n-1; j++)
            arr [j] = arr[j+1];
        arr[j] = temp;
    }

    cout << "After Rotation" << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << '\n';

    return 0;
}