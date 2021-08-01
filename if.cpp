#include <iostream>
using namespace std;

int main()
{
    int num = 1;

    do{
            if (num == 1){
                cout << "Done!" << endl;
            }
            else
                cout << "Not done!"<< endl;
            num++;
    }while (num <= 5);


    return 0;
}