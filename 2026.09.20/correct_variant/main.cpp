#include "io.hpp"
#include "sortings.hpp"
int main() {
	int arr[] = { 1,524,35,37,11,67,52,654 };
	const int arr_size = sizeof(arr) / sizeof(arr[0]);
	biv::print_array("Массив до сортировки: ", arr, arr_size);
	biv::bubble_sort(arr, arr_size);
	biv::print_array("Массив после сортировки: ", arr, arr_size);
}