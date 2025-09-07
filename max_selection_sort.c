#include <stdio.h>
void selectionSort(int arr[], int n) {
int i,j,temp;
	for (i=0;i<n-1;i++) {
		int max_idx=i;
    	for (j=i;j<n;j++) {
			if(arr[j]>arr[max_idx]){
				max_idx=j;
			}
		}
    	temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] =temp;
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