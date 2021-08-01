#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m1[10][10], m2[10][10], n, m;
    cout << "Enter the number of rows: " << endl;
    cin >> n;
    cout << "Enter the number of columns: " << endl;
    cin >> m;

    cout << "For matrix m1"<<endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> m1[i][j];
        }
    }
    cout << "For matrix m2" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> m2[i][j];
        }
    }

    return 0;
}