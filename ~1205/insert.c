#include <stdio.h>

void insertionSort(int* a, int n) {
	int i, v, j, k;
    int counter = 0;
	for (i = 1; i <= n; i++) {
		v = a[i];
		j = i - 1;
		while (j >= 0 && a[j] < v) {
			a[j + 1] = a[j];
			j--;
            counter ++;
		}
		a[j + 1] = v;
	}
    printf("%d\n", counter);
    for(int i = 0;i < n; i++){
        if(i!=0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[]) {
	int i, n;
	int a[100];
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	insertionSort(a, n);
	return 0;
}
