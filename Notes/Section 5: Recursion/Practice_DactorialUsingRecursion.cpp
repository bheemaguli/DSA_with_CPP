#include<stdio.h>

int fact(int n){
    printf("%d\t", n);
    if(n == 0){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    printf("\n%d\n", fact(5));
    return 0;
}

// 5       4       3       2       1       0
// 120