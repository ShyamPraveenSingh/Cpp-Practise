#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int i = -1, temp = 0;
    for (int j = 0; j < arr.size() - 1; j++){
        if(arr[j] < 0){
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
   
    int pos = i+1, neg = 0;
    while(pos < arr.size() && neg < pos && arr[neg] < 0){
        temp = arr[neg];
        arr[neg] = arr[pos];
        arr[pos] = temp;
        pos++;
        neg+=2;
    }
    for (int j = 0; j < arr.size() - 1; j++)
        cout << arr[j] << '\t';

        return 0;
    }