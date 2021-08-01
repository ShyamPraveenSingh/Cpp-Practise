#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a = "abba";
    int n = a.length();
    for(int i = 0; i<n; i++){
        for(int j = n - 1; j<0; j--){
            if(a[i] == a[j])
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
    return 0;
}