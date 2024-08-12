#include <bits/stdc++.h>
#include <numeric> // Required for accumulate function
using namespace std;

int main()
{
    vector<int> h1;
    vector<int> h2;
    vector<int> h3;
    int h1Size, h2Size, h3Size;

    cout << "No. of cylinders in each stack: \n";
    cin >> h1Size >> h2Size >> h3Size;

    cout << "The height of cylinder in stack 1: \n";
    for (int i = 0; i < h1Size; i++)
    {
        int value;
        cin >> value;
        h1.push_back(value);
    }

    cout << "The height of cylinder in stack 2: \n";
    for (int i = 0; i < h2Size; i++)
    {
        int value;
        cin >> value;
        h2.push_back(value);
    }

    cout << "The height of cylinder in stack 3: \n";
    for (int i = 0; i < h3Size; i++)
    {
        int value;
        cin >> value;
        h3.push_back(value); // This should be inside the loop
    }

    int sum1 = accumulate(h1.begin(), h1.end(), 0);
    int sum2 = accumulate(h2.begin(), h2.end(), 0);
    int sum3 = accumulate(h3.begin(), h3.end(), 0);

    // Use indices to track the current top of each stack
    int i1 = 0, i2 = 0, i3 = 0;

    // Continue while all stacks have elements
    while (i1 < (int)h1.size() && i2 < (int)h2.size() && i3 < (int)h3.size())
    {
        // If all heights are equal, return the height
        if (sum1 == sum2 && sum1 == sum3)
        {
            cout << "Height of equalized stacks: " << sum1 << endl;
            return 0;
        }

        // Find the stack with the greatest height and remove the top element
        if (sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= h1[i1++];
        }
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= h2[i2++];
        }
        else if (sum3 >= sum1 && sum3 >= sum2)
        {
            sum3 -= h3[i3++];
        }
    }

    // If we reach here, it means we cannot make the stacks equal
    cout << "Height of equalized stacks: " << 0 << endl;
    return 0;
}