#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> arr = {1,2,3};
    for(auto it : arr)
        cout << it;
    cout << endl;
    
    string s = "123";
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));
    return 0;
}