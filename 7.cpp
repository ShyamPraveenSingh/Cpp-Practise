#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {4, -1, 2, 1};
    int sum = 0;
    int max = arr[0];
    for (int i = 0; i < 4; i++){
        for(int j = i; j<3; j++){
            sum = 0;
            sum += arr[j];    
            if (max < sum)
                max = sum;
        }
    }
        cout << max << endl;
    return 0;
}