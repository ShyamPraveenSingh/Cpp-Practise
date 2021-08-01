#include <bits/stdc++.h>
using namespace std;

int main()
{
    string arr[2][3] = {{"you", "we"},
                        {"have", "are"},
                        {"sleep", "eat"}};
    
    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            cout << arr[i][j] << endl;
        }
    }


    return 0;
}