#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[4][4] =
        {{1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12},
         {13, 14, 15, 16}};
    vector<int> arr;
    for(int i=0; i<4; i++){
        for(int j = 0; j<4; j++){
            arr.push_back(A[i][j]);
        }
    }
    sort(arr.begin(), arr.end());
    int t = arr.size()/2;
    cout << arr[t] << endl;




    return 0;
}