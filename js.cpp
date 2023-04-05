#include <iostream> 

int main() {
	const int size = 3;
	int arr[size];
	int arr1[size];
	int* arr3 = new int[size];


	for (int i = 0; i < size; ++i) {
		std::cout << "Enter a array numbers ";
		std::cin >> arr[i];
	}
	for (int i = 0; i< size; ++i) {
		std::cout << "Enter a ARR1 numbers ";
		std::cin >> arr1[i];
	}
	for (int i = 0; i < size; ++i) {
		arr3[i]  = arr[i] * arr1[i];
	}
	for (int i = 0; i < size; ++i) {
	std::cout << arr3[i] << " ";
	}
	delete[] arr3;
	arr3 = nullptr;
}

