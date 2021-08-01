#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[4][4] =
        {{1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12},
         {13, 14, 15, 16}};
    int k = 3;
    vector<int> arr;
        for(int i = 0; i<A.size(); i++){
        arr.push_back(A[i]);
    }
    sort(arr.begin(), arr.end());
    cout << arr[k + 1] << '\n';
  

return 0;
}