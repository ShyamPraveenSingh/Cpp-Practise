#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for(int i = 0; i<n-1; i++){
        int min = i;
        for(int j = i+1; j<n; j++){
            if(arr[min] > arr[j])
                min = j;
        }
        if(i!=min){
            swap(arr[i], arr[min]);
        }

    }
}
void bubbleSort(int arr[], int n)
{
    for(int i = 0; i<n; i++){
        int flag = 0;
        for(int j = 0; j<n-1; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
                flag++;
            }
        }
        if(flag == 0)
            break;

    }

}

void printArray(int arr[], int n)
{
    for(int i = 0; i<n; i++)
        cout << arr[i] << '\t';
    cout << endl;
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 9;
    SelectionSort(arr, n);
    bubbleSort(arr, n);
    cout << "The sorted array is: ";
    printArray(arr, n);

    return 0;
}