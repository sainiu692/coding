#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int binarySearch(int barr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = barr[mid];
        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6};
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    int target = 6;
    if (binary_search(arr, arr + size, target))
    {
        cout << "Target Found Succesfully!!" << endl;
    }
    else
    {
        cout << "Target not Present,seacrh another number" << endl;
    }

    return 0;
}