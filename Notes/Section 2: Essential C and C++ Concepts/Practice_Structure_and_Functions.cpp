#include <iostream> 
#include <stdio.h> 

using namespace std;

struct Rectangle{
    int length, breadth;
};

int area(Rectangle r){
    return r.length*r.breadth;
}

int perimeter(Rectangle r){
    return 2*(r.length + r.breadth);
}
 

void initialise(struct Rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
}

int main() { 

    struct Rectangle r={0,0};

    int l, b;
    printf("Enter Length : "); 
    cin>>l;
    printf("Enter Breadth : "); 
    cin>>b; 

    initialise(&r, l, b);

    int a=area(r); 
    int p=perimeter(r); 
    printf("Area=%d\nPerimeter=%d\n",a,p); 
    return 0; 
    // Enter Length : 18
    // Enter Breadth : 3
    // Area=54
    // Perimeter=42
} 
