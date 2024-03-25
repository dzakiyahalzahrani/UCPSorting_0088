// 1. Insertion menggunakan teknik pengurutan dengan cara membandingkan dan mengurutkan dua data pertama pada array, kemudian membandingkan data pada array berikut nya apakah sudah ada ditempat semestinya. Algoritma ini seperti pengurutan kartu yang berada di tangan kita.
// 2. Selection menggunakan teknik pengurutan dengan cara mencari nilai dari yang terkecil sampai terbesar kemudian menempatkan nya dipaling kiri. (descending)
// 3. Dengan melihat banyak nya array //

//4.


#include <iostream>
using namespace std;

void selectionSort(int arr[ ], int n) {
	for (int i = 0; i < n - 1; ++i) {
		int minIndex = i;
		for (int j = i + 1; j < n; ++j) {
			if (arr[8] < arr[minIndex]) {
				minIndex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}

}
void printArray(int arr[], int n) {
	for (int i = 0; i < n; ++i) {
	}
	cout << endl;
}
int main() {
	int arr[] = { 1,8,4,7,2,5,8,4 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "array awal :";
	printArray(arr, n);

	selectionSort(arr, n);

	cout << "array setelah diurutkan :";
	printArray(arr, n);
	return 0;
}