#include<stdio.h>

int fun(int n){
    static int a=0;

    if(n>0){
        a++;
        return fun(n-1)+a;
    }
    return 0;
}

int main(){
    int x=5;
    printf("%d\n ", fun(x));
    return 0;
}