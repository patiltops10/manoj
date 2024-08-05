#include <iostream>
#include <algorithm>

// Template function to sort an array
template <typename T>
void sortArray(T arr[], int n) {
    std::sort(arr, arr + n);
}

int main() {
    int arrInt[] = {5, 3, 1, 4, 2};
    std::cout << "Before sorting: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arrInt[i] << " ";
    }
    std::cout << std::endl;

    sortArray(arrInt, 5);

    std::cout << "After sorting: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arrInt[i] << " ";
    }
    std::cout << std::endl;

    double arrDouble[] = {3.5, 7.2, 1.1, 2.3, 5.6};
    std::cout << "Before sorting: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arrDouble[i] << " ";
    }
    std::cout << std::endl;

    sortArray(arrDouble, 5);

    std::cout << "After sorting: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arrDouble[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}