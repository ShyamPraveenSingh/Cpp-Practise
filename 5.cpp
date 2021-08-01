#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 3, 4, 5, 7};
    vector<int> arr2 = {2, 3, 5, 6};

    int i = 0, j = 0;
    while(i < arr1.size() && j < arr2.size()){           
        if(arr1[i] < arr2[j]){
            cout << arr1[i] << '\t'; i++; }
        else if(arr1[i] > arr2[j]){
            cout << arr2[i] << '\t'; j++; }
        else{
            cout << arr1[i] << '\t';
            i++; j++;
            }
        }

        while(i<arr1.size())
            cout << arr1[i]; i++;

        while (i < arr2.size())
            cout << arr2[j]; j++;
    }

    return 0;
}