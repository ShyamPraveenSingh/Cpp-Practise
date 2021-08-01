#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int k, empty, full=0;
    int n = arr.size();

    sort(arr.begin(), arr.end());
    for(int i = 0; i < n - 1; i++){
        k = arr[n- 2];
        empty = k - arr[i];
        full += empty;
    }
    cout << full << endl;



    return 0;
}