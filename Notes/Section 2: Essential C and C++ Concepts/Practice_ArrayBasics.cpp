#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int A[5];
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    cout<<"Size of array A in memory is: "<<sizeof(A)<<endl;
    cout<<A[1]<<endl;
    printf("%d\n", A[2]);
    // Size of array A in memory is: 20
    // 15
    // 25


    // To initialize array with zero, do the following
    int B[10] = {0};
    for(int i=0;i<10;i++){
        cout<<B[i]<<" ";
    }
    cout<<endl;
    // Size of array A in memory is: 20
    // 15
    // 25
    // 0 0 0 0 0 0 0 0 0 0 

    int C[10] = {2,4,6,8,10};
    for(int i=0;i<10;i++){
        cout<<C[i]<<" ";
    }
    cout<<endl;
    // Size of array A in memory is: 20
    // 15
    // 25
    // 0 0 0 0 0 0 0 0 0 0 
    // 2 4 6 8 10 0 0 0 0 0 

    // Here, cout will print till 
    int D[10] = {2,4,6,8,10};
    for(int x:D){
        cout<<x<<" ";
    }
    cout<<endl;
    // Size of array A in memory is: 20
    // 15
    // 25
    // 0 0 0 0 0 0 0 0 0 0 
    // 2 4 6 8 10 0 0 0 0 0 
    // 2 4 6 8 10 0 0 0 0 0 

    int n;
    cout<<"Enter Array Size:";
    cin>>n;
    int E[n]; // Cannot initialize if size is variable
    E[0] = 2;
    for(int x:E){
        cout<<x<<" ";
    }
    cout<<endl;
    // In this method, values of uninitialized values will not be set to 0
    // Size of array A in memory is: 20
    // 15
    // 25
    // 0 0 0 0 0 0 0 0 0 0 
    // 2 4 6 8 10 0 0 0 0 0 
    // 2 4 6 8 10 0 0 0 0 0 
    // Enter Array Size:5
    // 2 32765 659210504 32765 659210224 


    return 0;
}