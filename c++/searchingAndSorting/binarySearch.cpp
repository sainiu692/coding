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
    // int barr[] = {1, 3, 5, 9, 18, 25};
    // int size = 6;
    // int target = 25;
    // int indexOfTarget = binarySearch(barr, size, target);
    // if (indexOfTarget == -1)
    // {
    //     cout << "not found";
    // }
    // else
    // {
    //     cout << "target found at: " << indexOfTarget << " index";
    // }

    vector<int> v{1,2,3,4,5,6};
    int arr[]={1,2,3,4,5,6,7};
        int size=7;

//this if else is for array name arr.
        if (binary_search(arr,arr+size,6 ))
    {
        cout << "found";
    }
    else
    {
        cout << "not found" << endl;
    }

    
    // if (binary_search(v.begin(), v.end(), 3))
    // {
    //     cout << "found";
    // }
    // else
    // {
    //     cout << "not found" << endl;
    // }
    //this above if else is for vector which we have declared. 

    return 0;
}