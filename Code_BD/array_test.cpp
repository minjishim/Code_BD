#include <bits/stdc++.h>
using namespace std;

void insert(int idx, int num, int arr[], int& len) {
	int arr2[10] = {};
	for (int i = 0; i < len; i++)
	{
		arr2[i] = arr[i];
	}

	len++;	// len은 참조자로 보내졌으므로, 해당 insert 함수에서 len 값을 바꾸면 원본의 값이 바뀜

	for (int i = 0; i < len; i++)
	{
		if (idx > i)
			arr[i] = arr2[i];
		else if (idx == i)
			arr[i] = num;
		else
			arr[i] = arr2[i-1];
	}
}

void erase(int idx, int arr[], int& len) {
	len--;
	for (int i = 0; i < len; i++)
	{
		if (idx <= i)
			arr[i] = arr[i+1];
	}
}

void printArr(int arr[], int& len) {
	for (int i = 0; i < len; i++) cout << arr[i] << ' ';
	cout << "\n\n";
}

void insert_test() {
	cout << "***** insert_test *****\n";
	int arr[10] = { 10, 20, 30 };
	int len = 3;
	insert(3, 40, arr, len); // 10 20 30 40
	printArr(arr, len);
	insert(1, 50, arr, len); // 10 50 20 30 40
	printArr(arr, len);
	insert(0, 15, arr, len); // 15 10 50 20 30 40
	printArr(arr, len);
}

void erase_test() {
	cout << "***** erase_test *****\n";
	int arr[10] = { 10, 50, 40, 30, 70, 20 };
	int len = 6;
	erase(4, arr, len); // 10 50 40 30 20
	printArr(arr, len);
	erase(1, arr, len); // 10 40 30 20
	printArr(arr, len);
	erase(3, arr, len); // 10 40 30
	printArr(arr, len);
}

int main(void) {
	insert_test();
	erase_test();
}