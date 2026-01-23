#include <stdio.h>

void selectionSort(int arr[], int n) {
	int i,j,index;
	for (i=0;i<n;i++) {
		index=i;
		for (j=i+1;j<n;j++) {
			if (arr[j]>arr[index]) {
				index=j;
			}
		}
		if (index!=i) {
			int temp=arr[i];
			arr[i]=arr[index];
			arr[index]=temp;
		}
	}
}

int main() {
    int n;


    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
