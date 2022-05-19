#include<stdio.h>

void fun(int n){
    if(n>0){
        printf("%d\t", n);
        fun(n-1);
        fun(n-1);
    }
}

int main(){
    int x=3;
    fun(x);
    return 0;
}
// 3       2       1       1       2       1   1