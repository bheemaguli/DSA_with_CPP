#include<iostream>

using namespace std;

struct Rectangle
{
    /* data */
    int length;
    int breadth;
};

int main(){
    // struct Rectangle r={10,5}, here struct is mandatory for c.
    // In C++
    Rectangle r = {10,5};

    cout<<"Rectangle length is: "<<r.length<<endl;
    cout<<"Rectangle breadth is: "<<r.breadth<<endl;
    cout<<endl;

    Rectangle *p = &r;
    cout<<"Rectangle length is: "<<p -> length<<endl;
    cout<<"Rectangle breadth is: "<<p -> breadth<<endl;
    cout<<endl;
    // Rectangle length is: 10
    // Rectangle breadth is: 5

    // Rectangle length is: 10
    // Rectangle breadth is: 5



    // C method of dynamic alocation
    Rectangle *q;
    q = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    q -> length = 15;
    q -> breadth = 7;
    cout<<"Rectangle length is: "<<q -> length<<endl;
    cout<<"Rectangle breadth is: "<<q -> breadth<<endl;
    cout<<endl;
    free(q);
    // Rectangle length is: 10
    // Rectangle breadth is: 5

    // Rectangle length is: 10
    // Rectangle breadth is: 5

    // Rectangle length is: 15
    // Rectangle breadth is: 7



    // C++ method of dynamic allocation
    Rectangle *s;
    s = new Rectangle;
    s -> length = 25;
    s -> breadth = 17;
    cout<<"Rectangle length is: "<<s -> length<<endl;
    cout<<"Rectangle breadth is: "<<s -> breadth<<endl;
    cout<<endl;
    free(s);
    // Rectangle length is: 10
    // Rectangle breadth is: 5

    // Rectangle length is: 10
    // Rectangle breadth is: 5

    // Rectangle length is: 15
    // Rectangle breadth is: 7

    // Rectangle length is: 25
    // Rectangle breadth is: 17

    return 0;
}
