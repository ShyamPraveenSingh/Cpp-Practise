#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 4, 45, 6, 10, 8};
    int k = 22;
    int n = arr.size();
    int left, right;
    sort(arr.begin(),arr.end());
    for (int i = 0; i < arr.size() - 1; i++)
    {
        left = i + 1;
        right = n - 1;
        while (left < right)
        {
            if (arr[i] + arr[left] + arr[right] == k){
                cout << "yes" << endl;
                break;
            }
            else if (arr[i] + arr[left] + arr[right] > k)
                right--;
            else if (arr[i] + arr[left] + arr[right] < k)
                left++;
        }
    }
        return 0;
    }