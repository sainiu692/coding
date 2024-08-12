#include <iostream>
#include <vector>
using namespace std;
int findsqrt(int n)
{
    int target = n;
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * mid == target)
        {
            return mid;
        }
        else if (mid * mid > target)
        {
            // left search.
            e = mid - 1;
        }
        else
        {
            ans = mid;
            // right search.
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the number: " << endl;
    cin >> n;
    int ans = findsqrt(n);
    cout << "square root of a number is: " << ans << endl;
    // int precision;
    // cout << "Enter the number the of floating digits in precision: " << endl;
    // cin >> precision;
    // double step = 0.1;
    // double finalAns = ans;
    // for (int i = 0; i < precision; i++)
    // {
    //     for (double j = finalAns; j * j <= n; j = j + step)
    //     {
    //         finalAns = j;
    //     }
    //     step = step / 10;
    // }
    // cout << "final answer is: " << finalAns << endl;
    return 0;
}