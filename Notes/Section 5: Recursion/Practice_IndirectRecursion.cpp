#include<stdio.h>

void funB(int n);

void funA(int n){
    if(n>0){
        printf("%d\t", n);
        funB(n-1);
    }
}

void funB(int n){
    if(n>0){
        printf("%d\t", n);
        funA(n/2);
    }
}

int main(){
    funA(20);
    return 0;
}

// 20      19      9       8       4       3       1       