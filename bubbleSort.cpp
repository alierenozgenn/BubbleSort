#include <iostream>
#include <vector>

void printArray(const std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void bubbleSort(std::vector<int>& arr) {
    size_t n = arr.size();
    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Değerleri değiştir
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            // Dizinin mevcut durumunu yazdır
            printArray(arr);
        }
    }
}

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    std::cout << "Sıralama öncesi dizi: ";
    printArray(arr);

    bubbleSort(arr);

    std::cout << "Sıralama sonrası dizi: ";
    printArray(arr);
    return 0;
}
