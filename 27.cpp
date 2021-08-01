#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {12, 3, 4, 1, 6, 9};
    int k = 24;
    int count;

    for(int i = 0; i<arr.size(); i++){
        for(int j = i+1; j<arr.size(); j++){
            for(int k = j+1; k<arr.size(); k++){
                if(arr[i] + arr[j] + arr[k] == k)   count++;
            }
        }

    }
    cout << count << endl;
    return 0;
}