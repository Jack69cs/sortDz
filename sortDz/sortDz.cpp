#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& numbers) {
    int size = numbers.size();
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (numbers[j] > numbers[j + 1]) {
                std::swap(numbers[j], numbers[j + 1]);
            }
        }
    }
}

void insertionSort(std::vector<int>& numbers) {
    int size = numbers.size();
    for (int i = 1; i < size; ++i) {
        int current = numbers[i];
        int j = i - 1;
        while (j >= 0 && numbers[j] > current) {
            numbers[j + 1] = numbers[j];
            j--;
        }
        numbers[j + 1] = current;
    }
}

void selectionSort(std::vector<int>& numbers) {
    int size = numbers.size();
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (numbers[j] < numbers[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(numbers[i], numbers[minIndex]);
    }
}

void displayArray(const std::vector<int>& numbers) {
    for (int value : numbers) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "RU");
    std::vector<int> dataSet1 = { 64, 34, 25, 12, 22, 11, 90 };
    std::vector<int> dataSet2 = { 64, 34, 25, 12, 22, 11, 90 };
    std::vector<int> dataSet3 = { 64, 34, 25, 12, 22, 11, 90 };

    std::cout << "Применение сортировки пузырьком:\n";
    bubbleSort(dataSet1);
    displayArray(dataSet1);

    std::cout << "Применение сортировки вставками:\n";
    insertionSort(dataSet2);
    displayArray(dataSet2);

    std::cout << "Применение сортировки выбором:\n";
    selectionSort(dataSet3);
    displayArray(dataSet3);

    return 0;
}
