#include <iostream>
using namespace std;
int solve(int dividend, int divisor)
{
    int s = 0;
    int e = abs(dividend);
    int ans=0;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (abs(mid * divisor) == abs(dividend))
        {
            // perfect solution
           ans=mid;
           break;
          //  return mid;
          //here we comment upper return statment and store mid in ans and apply break,bcoz of this we getting error. 
        }
        if (abs(mid * divisor) > abs(dividend))
        {
            e = mid - 1;
        }
        if (abs(mid * divisor) < abs(dividend))
        {    ans=mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
  if((divisor<0&&dividend<0)||(divisor>0&&dividend>0))
  {
    return  ans;
  }
  else
  {
    return -ans;
  }
}

int main()
{
    int dividend = 65;
    int divisor = 4;
    int ans = solve(dividend, divisor);
    cout << "answer after divison is: " << ans << endl;
    return 0;
}