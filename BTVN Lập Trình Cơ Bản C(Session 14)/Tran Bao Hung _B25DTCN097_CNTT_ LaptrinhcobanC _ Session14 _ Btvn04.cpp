#include <stdio.h>
void inMang(int arr[], int n) {
    printf("Cac phan tu trong mang: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    scanf("%d", &n); 
	int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    inMang(arr, n);
    return 0;
}
