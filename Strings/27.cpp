#include <bits/stdc++.h>
using namespace std;

int main()
{
   string str = "[]][][";
   stack <char> arr;
   int len = str.length();
   for (int i = 0; i<len; i++){
        if(str[i] == '[')
            arr.push(i);
        else
            arr.pop();
      }
      cout << arr.size() << endl;

      return 0; 
}
