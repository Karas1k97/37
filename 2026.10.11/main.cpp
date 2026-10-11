#include <iostream>

double calculate_average(const int* const a, const int size);
void generate_array(int* const arr, const int size);
void print_array(const int* const arr, const int size);


int main() {
    const int arr_count = 3;

    for (int i = 0;i < arr_count;i++) {
        int arr_size;
        std::cout << "Введите размер " << i + 1 << " массива : ";
        std::cin >> arr_size;
        int* arr = new int[arr_size];

        generate_array(arr, arr_size);

        std::cout << "Последовательность номер " << i + 1 << ": " << std::endl;
        print_array(arr, arr_size);

        std::cout << "Среднее значение равно " << calculate_average(arr, arr_size) << std::endl << std::endl;
        
        delete[] arr;
    }

    return 0;
}

double calculate_average(const int* const a, const int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    return double(sum) / size;
}

void generate_array(int* const a, const int size) {
    for (int i = 0; i < size; i++) {
        a[i] = rand() % size;
    }
}

void print_array(const int* const a, const int size) {
    const char format = ' ';
    for (int i = 0; i < size; i++) {
        std::cout << a[i] << format;
    }
    std::cout << std::endl;
}
