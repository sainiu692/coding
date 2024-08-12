#include <iostream>
#include <vector>
using namespace std;
int pivotElement(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
       
      
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        
        else
        {
             e = mid ;
        }
        mid = s + (e - s) / 2;
    }
    return s;

}

int main()
{
    vector<int> arr{1,3,8,10,17};
    int ans = pivotElement(arr);
   
        cout << "index of pivot element is: " << ans << endl;
        cout << "pivot element is: " << arr[ans] << endl;
    
    return 0;
}