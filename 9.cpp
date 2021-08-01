#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};

    if(arr.size() < 0)
        return 0;
    int ladder = arr[0];
    int stairs = arr[0];
    int jump = 1;
    for (int i = 1; i<arr.size(); i++){
        if(i == arr.size()-1)
            return jump;
        if(i + arr[i] > ladder)
            ladder = i + arr[i];
        stairs--;
        if(stairs == 0){
            jump++;
            stairs = ladder - i;
        }
    }
    cout << jump << endl;
    return 0;
}