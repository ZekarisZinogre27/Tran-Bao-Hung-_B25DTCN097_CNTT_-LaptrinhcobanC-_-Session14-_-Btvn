#include <stdio.h>

int solve(int n, int arr[]) {
    int max = -1e9; 
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    printf("%d\n", solve(n, arr));
    return 0;
}

