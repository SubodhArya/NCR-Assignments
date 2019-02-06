#include<stdio.h>
int main() {
	int size;
	printf("enter the size of array \n");
	scanf_s("%d", &size);
	int* arr = NULL;
	arr = (int*)calloc(size, sizeof(int));
	printf("enter the elements of array \n");
	for (int k = 0;k < size;k++) {
		scanf_s("%d", &arr[k]);

	}
	int requiredsum;
	printf("enter the req sum \n");
	scanf_s("%d", &requiredsum);
	int i = 0, j = 0, sum = 0;
	for (i = 0;i < size;i++) {
		if (sum == requiredsum) {
			break;
		}
		sum = 0;
		for (j = i ;j < size;j++) {
			sum = sum + arr[j];
			if (requiredsum == sum) {
				printf("Sum found between %d and %d", i, j);
				break;
			}
			if (sum > requiredsum) {
				break;
			}

		}

	}
	if (sum!=requiredsum) {
		printf("sum not possible");
	}
	int exit=0;
	scanf_s("%d", exit);

	return 0;

}