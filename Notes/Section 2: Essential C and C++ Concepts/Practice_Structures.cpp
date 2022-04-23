#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle1
{
    /* data */
    int length;
    int breadth;
};

struct Rectangle2
{
    /* data */
    int length;
    int breadth;
    char x;
};

// // Global declaration
// struct Rectangle
// {
//     /* data */
//     int length;
//     int breadth;
// } r1, r2, r3;

// OR

// struct Rectangle r1, r2, r3; 

int main(){
    struct Rectangle1 r1={10,5}; // Local declaration
    printf("Size of Rectangle Struct: %d\n", sizeof(r1));
    // Size of Rectangle Struct: 8

    struct Rectangle2 r2={10,5};
    printf("Size of Rectangle Struct: %d\n", sizeof(r2));
    // Size of Rectangle Struct: 8
    // Size of Rectangle Struct: 12  
    // Here, padding is taking place. Since allocation of 1 byte for
    // char is inefficient, it is taking the nearest datatype size (4)

    cout<<"Length is: "<<r1.length<<endl;
    cout<<"Breadth is: "<<r1.breadth<<endl;
    // Size of Rectangle Struct: 8
    // Size of Rectangle Struct: 12
    // Length is: 10
    // Breadth is: 5
}