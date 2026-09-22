#include <iostream>
#include <windows.h>
void sort(int* arr, const int s);
void print_array(const char* const comment, int* arr, const int size) {
	std::cout << comment << std::endl;
	for (int i = 0;i < size;i++) {
		std::cout << arr[i];
	}
	std::cout <<std::endl;
}
int main() {
	int s = 0;
	std::cout << "Введите размер массива";
	std::cin >> s;
	int* arr = new int[s];
	for (int i = 0;i < s;i++) {
		std::cout << "Введите элемент номер " << i + 1 << ':';
		std::cin >> arr[i];
	}
	print_array("До сортировки: ", arr, s);
	sort(arr, s);
	print_array("После сортировки: ", arr, s);
	delete[] arr;
}
void sort(int* arr, const int s) {
	for (int i = 0;i < s - 1;i++) {
		for (int j = 0;j < s - 1 - i;j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}