#include <iostream>
using namespace std;
void transpose(int arr[][3], int row, int col,int transposeArr[][3])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transposeArr[j][i]=arr[i][j];
        }
    }
}
void printArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    int transposeArr[3][3];

    cout << "enter elements of array: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "printing row wise: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

  transpose(arr, row, col,transposeArr);
    printArray(transposeArr, row, col);

    return 0;
}