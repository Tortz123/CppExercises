#include <iostream>

using namespace std;

int countNums2s(int arr[], int size) {
	int count = 0;

	for (int i = 0; i < size; i++) {

		cin >> arr[i];

		if (arr[i] == 2) {

			count++;
		}
	}
	return count;
}

int main(){

	const int size = 5;
	int arr[size]; //array of size 5

	cout << "This program will count the number of number 2's that is entered" << endl;
	cout << "****************************************************************" << endl;
	cout << "Enter 5 numbers: ";
	cout << "\nNumber of 2s: " << countNums2s(arr, size);

	return 0;
}