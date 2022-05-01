#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void fun(struct Rectangle r){
    r.length = 20;
    cout<<"Length is "<<r.length<<" and Breadth is "<<r.breadth<<endl;
}

void fun1(struct Rectangle *p){
    p->length = 20;
    cout<<"Length is "<<p->length<<" and Breadth is "<<p->breadth<<endl;
}

struct Rectangle *fun2(){
    struct Rectangle *p;
    p=new Rectangle;

    p->length = 15;
    p->breadth = 7;
};

int main(){
    struct Rectangle r={10,5};

    printf("Length is %d and Breadth is %d\n", r.length, r.breadth);
    fun(r);
    // Before r.length = 20;
    // Length is 10 and Breadth is 5
    // Length is 10 and Breadth is 5

    // After r.length = 20;
    // Length is 20 and Breadth is 5
    // Length is 10 and Breadth is 5

    fun1(&r);
    // Length is 10 and Breadth is 5
    // Length is 20 and Breadth is 5
    // Length is 20 and Breadth is 5
    // Length is 20 and Breadth is 5

    printf("Length is %d and Breadth is %d\n", r.length, r.breadth);
    // Without fun(r);
    // Length is 10 and Breadth is 5


    struct Rectangle *ptr=fun2();
    cout<<"Length is "<<ptr->length<<" and Breadth is "<<ptr->breadth<<endl;
    // Length is 10 and Breadth is 5
    // Length is 20 and Breadth is 5
    // Length is 20 and Breadth is 5
    // Length is 20 and Breadth is 5
    // Length is 15 and Breadth is 7
}