#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool solve(int n) {
    if (n <= 1) return false;
    int tong = 1; 
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    return (tong == n);
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    if (solve(n)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    if (solve(m)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
