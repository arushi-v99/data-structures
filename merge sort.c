#include <stdio.h>

// Function to merge two subarrays
void merge(int arr[], int left, int mid, int right) {
	int i=left,j=mid+1,k=0;
	int temp[right-left+1];
	while (i<=mid && j<=right) {
		if (arr[i] <= arr[j]) {
			temp[k]=arr[i];
			i++;
		} else {
			temp[k]=arr[j];
			j++;
		}
		k++;
	}
// write your code here
	while (i<=mid) {
		temp[k]=arr[i];
		i++;
		k++;
	}
	while (j<=right) {
		temp[k]=arr[j];
		j++;
		k++;
	}
	k=0;
	for(i=left;i<=right;i++) {
		arr[i]=temp[k];
		k++;
	}
	
}

// Function to implement merge sort
void mergeSort(int arr[], int left, int right) {

  // write your code here
	if (left<right) {
		int mid=(left+right)/2;
		mergeSort(arr,left,mid);
		mergeSort(arr,mid+1,right);
		merge(arr,left,mid,right);
	}
  
  
   
}

// Function to print an array
void printArray(int arr[], int size) {

// write your code here
	for (int i=0;i<size;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");


}

int main() {
    int n;
    
    // Input the size of the array
    printf("");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements of the array
    printf("");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the original array
    printf("");
    printArray(arr, n);

    // Sort the array using merge sort
    mergeSort(arr, 0, n - 1);
    
    // Print the sorted array
    printf("");
    printArray(arr, n);

    return 0;
}
