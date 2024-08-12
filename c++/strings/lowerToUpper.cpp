#include <iostream>
#include <string.h>
using namespace std;
void upperCase(char arr[])
{
    int n = strlen(arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
}
int main()
{
    char arr[100] = "SainiSahab";
    upperCase(arr);
    cout << arr << endl;
}