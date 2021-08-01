#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    vector<int> temp;

    for(int i = 0; i<arr.size() - 1; i++){
        if(arr[i] < 0)
            temp.push_back(arr[i]);
    }

    for (int i = 0; i < arr.size() - 1; i++){
        if(i % 2 != 0){
            swap(arr[i], temp[i]);
        }
    }
    for(int i = 0; i < arr.size() - 1; i++)
        cout << arr[i] << '\t';

        return 0;
    }