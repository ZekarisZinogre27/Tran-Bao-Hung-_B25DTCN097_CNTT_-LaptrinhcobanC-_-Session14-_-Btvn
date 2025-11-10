#include<stdio.h>
int solve(int n){
    int kqua = 1;
    if(n == 0){
        kqua = 1;
    }
    for(int i = 1; i <= n; i++){
        kqua *= i;
    }
    return kqua;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", solve(n));
    return 0;
}
