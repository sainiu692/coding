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
        // if(s==e)
        // {
        //     //single element case.
        //     return s;
        // }
         if (mid + 1 < arr.size() && arr[mid] > arr[mid + 1])
        // hum  {mid + 1 < arr.size()}   ki jagah  {mid + 1 <= e} bhi likh sakte hai.
        {
            return mid;
        }
        if (mid - 1 >= s && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }
        if (arr[s] > arr[mid])
        {
            e = mid - 1;
        }
        //  if (arr[e] < arr[mid])
        // {
        //     s = mid+1;
        // }
        else
        {
            s = mid+1;
            //  e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return e;
    // agr main yha sbse phle if block ko coment krke (return -1) ki jagh (return s ) krdu to problem kyu ho rhi hai.
    // han mai yhan islie (return s ) nhi kr skta kyu ki jb s==e hua to iske bad s= mid+1; condn lgi jiski vajah se s>e ho ra
    // 's' von index store krra jo hmare vector mein hai hi nhi,,isliye m (return e) kr skta hu pr (return s) nhi. 

}

int main()
{
    vector<int> arr{1,2,3,4,5};
    int ans = pivotElement(arr);
    if (ans == -1)
    {
        cout << "kuch gadbad hai!!" << endl;
    }
    else
    {
        cout << "index of pivot element is: " << ans << endl;
        cout << "pivot element is: " << arr[ans] << endl;
    }
    return 0;
}