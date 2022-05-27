#include<stdio.h>

int fun(int n){
    printf("%d\t", n);
    if(n>100){
        return n-10;
    }
    return fun(fun(n+11));
}


int main(){
    printf("\n%d\n", fun(95));
    return 0;
}

// 95      106     96      107     97      108     98      109     99      110     100  111      101
// 91