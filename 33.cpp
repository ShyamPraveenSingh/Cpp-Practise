#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2,2,1};
    vector<int> temp;
    temp = arr;
    reverse(temp.begin(), temp.end());
    for(int i = 0; i < arr.size() - 1; i++){
        if(arr[i] == temp[i]){
            cout << "yes" << endl;
            break;
        }
        else
            cout << "no"<< endl; break;
    }

    return 0;
}