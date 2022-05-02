#include <iostream> 
#include <stdio.h> 

using namespace std;

int area(int length, int breadth){
    return length*breadth;
}

int perimeter(int length, int breadth){
    return 2*(length + breadth);
}
 
int main() { 
    int length=0,breadth=0; 

    printf("Enter Length : "); 
    cin>>length;
    printf("Enter Breadth : "); 
    cin>>breadth; 

    int a=area(length, breadth); 
    int p=perimeter(length, breadth); 
    printf("Area=%d\nPerimeter=%d\n",a,p); 
    return 0; 
    // Enter Length : 18
    // Enter Breadth : 3
    // Area=54
    // Perimeter=42

    // Enter Length : 18
    // Enter Breadth : 3
    // Area=54
    // Perimeter=42
} 
