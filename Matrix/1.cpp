#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m = 4, n = 4;
    int A[4][4] = 
    {{1, 2, 3, 4},
     {5, 6, 7, 8},
     {9, 10, 11, 12},
     {13, 14, 15, 16}};
     int T=0, B=m-1, R=n-1, L=0, dir=0;
     while(L<=R && T<=B){
         if(dir == 0){
             for(int k = L; k<=R; k++){
                 cout << A[T][k]<<endl;
                 T++;
             }
         }
        else if (dir == 1)
         {
             for (int k = T; k <= B; k++)
             {
                 cout << A[k][R]<<endl;
                 R--;
             }
         }
         else if (dir == 2)
         {
             for (int k = R; k >= L; k--)
             {
                 cout << A[B][k]<<endl;
                 B--;
             }
         }
        else if (dir == 3)
         {
             for (int k = B; k >= T; k--)
             {
                 cout << A[k][L]<<endl;
                 L++;
             }
         }
         dir = (dir+1)%4;
     }
     return 0;
}