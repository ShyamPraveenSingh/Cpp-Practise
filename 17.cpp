#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1};
    int k = 11;
    int count = 0;
    for (int i = 0; i<arr.size() - 1; i++){
        for(int j = i+1; j<arr.size(); j++){
            if(arr[i] + arr[j] == k)
                count++;
        }
    }
    cout << count << endl;

    return 0;
}