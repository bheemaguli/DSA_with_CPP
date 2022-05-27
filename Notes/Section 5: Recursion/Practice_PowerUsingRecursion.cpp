#include<stdio.h>

int pow1(int m, int n){
    printf("%d,%d\t", m, n);
    if(n == 0){
        return 1;
    }
    return m*pow1(m, n-1);
}

int pow2(int m, int n){
    printf("%d,%d\t", m, n);
    if(n == 0){
        return 1;
    }

    if(n%2 == 0){
        return pow2(m*m, n/2);
    }
    return m*pow2(m*m, (n-1)/2);
}

int main(){
    printf("\n%d\n", pow1(2, 9));
    printf("\n%d\n", pow2(2, 9));
    return 0;
}

// 2,9     2,8     2,7     2,6     2,5     2,4     2,3     2,2     2,1     2,0
// 512
// 2,9     4,4     16,2    256,1   65536,0
// 512