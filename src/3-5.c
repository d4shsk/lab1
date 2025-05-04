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
		int key = arr[i]; // Текущий элемент, который нужно вставить в отсортированную часть
		int j = i - 1;

		// Сдвигаем элементы большие, чем key, на одну позицию вправо
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key; // Вставляем key в правильную позицию
	}
	printf("Sorted array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}