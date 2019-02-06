#include<stdio.h>
int main() {
	int p1, p2;
	int size = 0;
	//	printf("enter the size\n");
	scanf("%d", &size);
	int*  ar = (int*)malloc(size * sizeof(int));
	//	printf("enter the lements in the array\n");
	for (int i = 0;i < size;i++) {
		scanf("%d", &ar[i]);
	}
	p1 = 0;p2 = size - 1;int temp;
	while (p1 != p2) {
		if (ar[p1] > 0 && ar[p2] < 0) {
			temp = ar[p1];
			ar[p1] = ar[p2];
			ar[p2] = temp;
			p1++;p2--;
			continue;
		}
		else if (ar[p1] < 0 && ar[p2] < 0) {
			p1++;continue;
		}

		else if (ar[p1] > 0 && ar[p2] > 0) {
			p2--;continue;
		}
		else {
			p1++;p2--;continue;
		}
	}
	printf("new array is \n");
	for (int i = 0;i < size;i++) {
		printf("%d ", ar[i]);
	}
	printf("pgm stopped");
	int k;
	scanf("%d", &k);

}