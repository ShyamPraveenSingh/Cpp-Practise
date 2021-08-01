#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {3,2,3, 2, 2};
    int count = 0;
    int candidate = 0;
    for(int num : arr){
        if(count == 0)
            candidate = num;
        if(num == candidate)    count += 1;
        else    count -= 1;
    }
    cout << candidate << endl;

    return 0;

}