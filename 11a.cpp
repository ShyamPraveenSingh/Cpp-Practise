#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> arr1 = {1, 3, 5, 7}; 
    vector <int> arr2 = {0, 2, 6, 8, 9};
    
    for (int i = 0; i<4; i++){
        if(arr1[i] > arr2[0])
            swap(arr1[i], arr2[0]);
            sort(arr2.begin(), arr2.end());
    }

    for(int i = 0; i<arr1.size(); i++)
        cout << arr1[i] << '\t';
        
    cout << endl;

    for (int i = 0; i < arr2.size(); i++)
        cout << arr2[i] << '\t';
    cout << endl;

    return 0;
}