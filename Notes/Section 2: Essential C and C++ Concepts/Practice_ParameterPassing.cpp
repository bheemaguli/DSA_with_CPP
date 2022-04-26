#include<iostream>
#include<stdio.h>

using namespace std;

void swap_Value(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swap_Address(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap_Reference(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int x, y;
    x = 10;
    y = 5;
    printf("Value of x is %d and value of y is %d\n", x, y);
    swap_Value(x, y);
    printf("Value of x is %d and value of y is %d\n\n", x, y);

    printf("Value of x is %d and value of y is %d\n", x, y);
    swap_Address(&x, &y);
    printf("Value of x is %d and value of y is %d\n\n", x, y);

    printf("Value of x is %d and value of y is %d\n", x, y);
    swap_Reference(x, y);
    printf("Value of x is %d and value of y is %d\n\n", x, y);


    // Value of x is 10 and value of y is 5
    // Value of x is 10 and value of y is 5

    // Value of x is 10 and value of y is 5
    // Value of x is 5 and value of y is 10

    // Value of x is 5 and value of y is 10
    // Value of x is 10 and value of y is 5
}