#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> arr1 = {1,2,3,4};
    vector <int> arr2 = {1,2,4,5};
    int ans;
    for(int i = 0; i<arr2.size(); i++){
        for(int j = 0; j<arr1.size(); j++){
            if(arr2[i] == arr1[j])
                break;
        }
    }
    return 0;
}