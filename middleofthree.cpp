#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];
    int n = 3;
    for (int i = 0; i<n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++){
        if (a[i] > a[i+1] && a[i] > a[i+2])
            cout << a[i];
        else if (a[i+1] > a[i] && a[i+1] > a[i+2])
            cout << a[i+1];
        else
            cout << a[i+2];
    }
        return 0;
}