#include <iostream>
#include <vector> 

int simpleArraySum(std::vector<int>& ar) {
    int sum = 0;
    for (int i = 0; i < ar.size(); ++i) {
        sum += ar[i];
    }
    return sum;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};

    int result = simpleArraySum(arr);

    std::cout << "Sum of the array elements: " << result << std::endl;

    return 0;
}