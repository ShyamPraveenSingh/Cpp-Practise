#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {-1, -2, -3, -4};
    int sum = 0, max = arr[0];
    for (int i = 0; i<4; i++){
        sum += arr[i];
        if(sum>max)
            max = sum;
        if(sum<0)
            sum = 0;
    }
    cout << max << endl;
    return 0;

}