#include <iostream>

using namespace std;

int firsLast2(int arr[], int size) {

	if (arr[0] == 2 || arr[size - 1] == 2) {

		cout << "True!";
	}
	else {
		cout << "False!";
	}
	return 0;
}

int main() {
	const int size = 6;
	int arr[size];

	cout << "Enter 6 numbers: ";

	for (int i = 0; i < size; i++) {

		cin >> arr[i];
	}

	firsLast2(arr, size);

	return 0;
}