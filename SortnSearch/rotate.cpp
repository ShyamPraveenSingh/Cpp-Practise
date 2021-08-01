#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 3;
    int temp, j;
    for(int i = 1; i<=k; i++ ){
        temp = arr[0];
        for(j = 0; j<n-1; j++)
            arr[j] = arr[j+1];
        arr[j] = temp;
        }
    for(int i = 0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}