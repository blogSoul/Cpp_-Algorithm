#include<iostream>
using namespace std;

int main(void) {
	int i, j, temp, N, num, b, min;
	scanf("%d", &N);
	int* array = new int[N];
	for (i = 0; i < N; i++)
		scanf("%d", &array[i]);
	for (i = 0; i <= N; i++) {
		for (j = N - i; j < N; j++) {
			if (j + 1 < N && array[j] > array[j + 1]) {
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}
	} // sort
	for (i = 0; i < N; i++) {
		if (i >= 1 && array[i - 1] + 1 == array[i]) {
			num = i;
			for (j = i; j < N; j++) {
				if (array[num] + 1 <= array[j]) {
					temp = array[j];
					array[j] = array[num];
					array[num] = temp;
					break;
				}
			}
			if (array[num] == array[N - 1]) {
				for (j = num ; j > 0 ; j--) {
					if (array[j] == array[j - 1] + 1) {
						temp = array[j];
						array[j] = array[j - 1];
						array[j - 1] = temp;
					}
					else if (array[j] > array[j - 1] + 1)
						break;
				}
			}
		}
		else
			min = array[i];
		/*
		for (int k = 0; k < N; k++)
			printf("%d ", array[k]);
		printf("min: %d i: %d\n", min, i);
		*/
	} // do condition
	for (int k = 0; k < N; k++)
		printf("%d ", array[k]);
	delete[] array;
	return 0;
}