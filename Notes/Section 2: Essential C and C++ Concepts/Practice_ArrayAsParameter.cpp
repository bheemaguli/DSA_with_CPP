#include<iostream>

using namespace std;

void fun(int *A, int n){

    // cout<<sizeof(A)/sizeof(int)<<endl;
    // 8/4 = 2

    // for(int a:A)
    //     cout<<a<<" ";
    // cout<<endl;
    // Not usable as we cannot iterate for pointer

    for(int i=0; i<5; i++)
        cout<<A[i]<<" ";
    cout<<endl;
    // 2 4 6 8 10 
    // 2 4 6 8 10 

    for(int i=0; i<5; i++)
        A[i] = i;


    for(int i=0; i<5; i++)
        cout<<A[i]<<" ";
    cout<<endl;
    // 2 4 6 8 10 
    // 0 1 2 3 4 
    // 0 1 2 3 4 
}


int * fun2(int size){
    int *p;
    p = new int[size];

    for(int i=0; i<size; i++)
        p[i] = i*i;

    // 2 4 6 8 10 
    // 0 1 2 3 4 
    // 0 1 2 3 4 
    // 0 1 4 9 16 

    return p;
}

int main(){

    int A[] = {2,4,6,8,10};
    int n   = 5;

    fun(A, n);

    // cout<<sizeof(A)/sizeof(int)<<endl;
    // 10/2 = 5

    for(int x:A)
        cout<<x<<" ";
    cout<<endl;

    int *ptr, sz= 10;

    ptr = fun2(sz);

    for(int i = 0; i<sz; i++)
        cout<<ptr[i]<<" ";
    cout<<endl;



    return 0;
}