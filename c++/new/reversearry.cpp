#include <iostream>

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
       
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        ++start;
        --end;
    }
}

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, n);

    std::cout << "Reversed array:";
    for (int i = 0; i < n; ++i) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;

    return 0;
}