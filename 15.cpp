#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2, 4, 1, 3, 5};
    int count=0;
    for(int i = 0; i<arr.size()-1; i++){
        for (int j = i+1; j<arr.size()-1; j++){
            if(arr[i] > arr[j]){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}