#include <iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
    // step-1  choose pivot elenmnet
    int pivotIndex = s;
    int pivotElement = arr[s];

    // step-2  find right posoition of pivotelement and place it there
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotElement)
        {
            count++;
        }
    }

    // jab m loop s bahar nikla to mere pas pivot ki right
    // position ka index redy h
    int sahiIndex = s + count;
    swap(arr[pivotIndex], arr[sahiIndex]);
    pivotIndex = sahiIndex;

    // step->3  left mein chhote and right mein bade
    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivotElement)
        {
            i++;
        }
        while (arr[j] > pivotElement)
        {
            j--;
        }
        // 2 case ho skte hai
        // A-> you find element to swap
        // B-> no need to swap
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
     return pivotIndex;
}
void quickSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // partiton logic,return pivotIndex
    int p = partition(arr, s, e);

    // recursive call
    // pivotElement-> left
    quickSort(arr, s, p - 1);

    // pivotElement-> right
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[] = {8,8, 1, 6, 2, 4, 6, 24, 78, 15, 1, 1, 1, 1, 1, 1};
    int n = 16;
    int s = 0;
    int e = n - 1;
    quickSort(arr, s, e);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
