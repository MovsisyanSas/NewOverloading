#include <iostream>

void* operator new(std::size_t num) {
	std::cout << "Creating: ";
	void* ptr = malloc(sizeof(int));
	return ptr;
}

void* operator new[](std::size_t num) {
	std::cout << "Creating: ";
	void* ptr = malloc(num * sizeof(int));
	return ptr;
}

void operator delete(void* p) {
	std::cout << "Deallocating..." << std::endl;
	free(p);
}

void operator delete[] (void* p) {
	std::cout << "Deallocating..." << std::endl;
	free(p);
}

void show(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}

int main() {
	int size;
	std::cout << "Enter array size: ";
	std::cin >> size;

	int* arr = new int[size];

	show(arr, size);

	delete[] arr;

	std::cout << std::endl;

	int* a = new int(5);
	std::cout << *a << std::endl;
	delete a;

	
}
