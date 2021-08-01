#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {-2, -40, 0, -2, -3};

    int result = arr[0];

    for (int i = 0; i < arr.size() - 1; i++)
    {
        int mul = arr[i];

        for (int j = i + 1; j < arr.size() - 1; j++)
        {
            result = max(result, mul);
            mul *= arr[j];
        }

        result = max(result, mul);
        
    }
    cout << result << endl;

    return 0;
}