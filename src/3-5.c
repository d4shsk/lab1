#include <stdio.h>

int main() {
	printf("3.5 \n");
	int arr[] = { 5, 2, 4, 6, 1, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = 1; i < n; i++) {
		int key = arr[i]; // ������� �������, ������� ����� �������� � ��������������� �����
		int j = i - 1;

		// �������� �������� �������, ��� key, �� ���� ������� ������
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key; // ��������� key � ���������� �������
	}
	printf("Sorted array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}