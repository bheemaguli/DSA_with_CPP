#include<stdio.h>


int sum(int n){
    printf("%d\t", n);
    if(n == 0){
        return 0;
    }
    return sum(n-1) + 1;
}

int main(){
    printf("\n%d\n", sum(5));
    return 0;
}

// 5       4       3       2       1       0
// 5
