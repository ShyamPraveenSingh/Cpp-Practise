#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {1, 3, 5, 7}, arr2[] = {0, 2, 6, 8, 9};
    vector <int> temp;

    for (int i = 0; i<4; i++){
        temp.push_back(arr1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        temp.push_back(arr2[i]);
    }
    int n = 9;
    sort(temp.begin(), temp.end());
    for(int i = 0; i<n; i++)
        cout << temp[i] << '\t';
    cout << endl;

    return 0;
}

