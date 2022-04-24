#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle
{
    /* data */
    int length;
    int breadth;
};


int main(){
    int a = 10;
    int *p;
    p = &a;
    printf("%d is same as %d\n", a, *p);
    // 10 is same as 10

    int A[5] = {2,4,6,8,10};
    int *q;
    q = A; //p = &A is wrong. Give p = A or p = A[0]

    for(int i=0;i<5;i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;
    // 10 is same as 10
    // 2 4 6 8 10 

    int *r;
    r = (int *)malloc(5*sizeof(int));
    r[0] = 10; r[1] = 15; r[2] = 14; r[3] = 21; r[4] = 31;

    for(int i=0;i<5;i++){
        cout<<r[i]<<" ";
    }
    cout<<endl;
    // 10 is same as 10
    // 2 4 6 8 10 
    // 10 15 14 21 31 

    // To deallocate pointer from heap, use
    delete[] r; // Used in C+  // Use delete r; for single pointer
    // OR
    // free(r); // Used in C

    int *s;
    s = new int[5];
    s[0] = 10; s[1] = 15; s[2] = 14; s[3] = 21; s[4] = 31;

    for(int i=0;i<5;i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    // 10 is same as 10
    // 2 4 6 8 10 
    // 10 15 14 21 31 
    // 10 15 14 21 31    

    int *t1;
    char *t2;
    float *t3;
    double *t4;
    struct Rectangle *t5;

    cout<<sizeof(t1)<<" ";
    cout<<sizeof(t2)<<" ";
    cout<<sizeof(t3)<<" ";
    cout<<sizeof(t4)<<" ";
    cout<<sizeof(t5)<<" ";
    cout<<endl;
    // 10 is same as 10
    // 2 4 6 8 10 
    // 10 15 14 21 31 
    // 10 15 14 21 31 
    // 8 8 8 8 8  // All are consuming 8bytes, i.e., pointers are independent of datatypes


    return 0;
}


// int x;
// int* ptr1 = &x;
// int* ptr2 = (int*)malloc(sizeof(int));
// int* ptr3 = new int;
// int* ptr4 = NULL;

// // delete Should NOT be used like below because x is
// // allocated on stack frame
// delete ptr1;

// // delete Should NOT be used like below because x is
// // allocated using malloc()
// delete ptr2;

// // Correct uses of delete
// delete ptr3;
// delete ptr4;


// int* ptr1 = NULL;
// int* ptr2;
// int x = 5;
// ptr2 = &x;
// int* ptr3 = (int*)malloc(5 * sizeof(int));

// // Correct uses of free()
// free(ptr1);
// free(ptr3);

// // Incorrect use of free()
// free(ptr2);