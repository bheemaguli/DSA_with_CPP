#include <iostream> 
#include <stdio.h> 

using namespace std;

class Rectangle{
    public:
        int length, breadth;

        void initialise(int l, int b){
            length = l;
            breadth = b;
        }


        int area(){
            return length*breadth;
        }

        int perimeter(){
            return 2*(length + breadth);
        }
};

int main() { 

    Rectangle r;

    int l, b;
    printf("Enter Length : "); 
    cin>>l;
    printf("Enter Breadth : "); 
    cin>>b; 

    r.initialise(l, b);

    int a=r.area(); 
    int p=r.perimeter(); 
    printf("Area=%d\nPerimeter=%d\n",a,p); 
    return 0; 
    // Enter Length : 18
    // Enter Breadth : 3
    // Area=54
    // Perimeter=42
} 
