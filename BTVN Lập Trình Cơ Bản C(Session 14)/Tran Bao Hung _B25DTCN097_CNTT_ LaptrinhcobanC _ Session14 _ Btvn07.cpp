#include <stdio.h>
#include <math.h>
#include<stdbool.h>
bool snt(int n) {
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    if(snt(n)){
        printf("True");
    }
    else{
        printf("False");
    }
}

