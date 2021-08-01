#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> nums = {1,2,3,5,5,7,8,9};
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == nums[i+1])
            cout << nums[i];
    }
    cout << endl;
    return 0;
}