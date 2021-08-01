#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {4, 2, 1, 6};

    for (int i = 0; i<arr.size() - 1; i++){
        int sum = 0;
        for(int j = i+1; j<arr.size() - 1; j++){
            sum += arr[j];
            if(sum == 0)
                cout << "Yes" << endl;
        }
    }
    return 0;
}