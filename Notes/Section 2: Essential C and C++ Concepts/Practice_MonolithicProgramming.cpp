#include <iostream> 
#include <stdio.h> 

using namespace std;
 
int main() { 
    int length=0,breadth=0; 

    printf("Enter Length : "); 
    cin>>length;
    printf("Enter Breadth : "); 
    cin>>breadth; 

    int area=length*breadth; 
    int peri=2*(length+breadth); 
    printf("Area=%d\nPerimeter=%d\n",area,peri); 
    return 0; 
    // Enter Length : 18
    // Enter Breadth : 3
    // Area=54
    // Perimeter=42
} 
