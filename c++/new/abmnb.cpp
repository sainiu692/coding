#include <iostream>
using namespace std;

// Function to find the frequency of elements in the array
void findFrequency(int array[], int size)
{
    int uniqueElements[size];
    int frequencies[size];
    int uniqueCount = 0;

    for (int i = 0; i < size; i++)
    {
        int element = array[i];
        bool found = false;
        for (int j = 0; j < uniqueCount; j++)
        {
            if (uniqueElements[j] == element)
            {
                frequencies[j]++;
                found = true;
                break;
            }
        }
        if (!found)
        {
            uniqueElements[uniqueCount] = element;
            frequencies[uniqueCount] = 1;
            uniqueCount++;
        }
    }

    // Print the frequency of each element
    for (int i = 0; i < uniqueCount; i++)
    {
        cout << "Element: " << uniqueElements[i] << ", Frequency: " << frequencies[i] << endl;
    }
}

int main()
{
    int array[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int size = sizeof(array) / sizeof(array[0]);

    // Find the frequency of elements
    findFrequency(array, size);

    return 0;
}

