#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char num[100];
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> num[i];
    }

    for (int i = n - 1 ; i >= 0; i--)
    {
        cout << num[i] << '\t';
    }
    cout << endl;
    return 0;
}