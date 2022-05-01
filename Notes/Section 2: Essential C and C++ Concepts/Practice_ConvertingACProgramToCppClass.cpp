#include<iostream>

using namespace std;

class Rectangle{
    private:
        int length, breadth;

    public:
        // Constructor 
        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }

        // functions inside class
        int area(){
            cout<<"Length is "<<length<<" and Breadth is "<<breadth<<endl;
            return length*breadth;
        }

        void changeLength(int l){
            length = l;
        }
};

// Everything is processed with help of function in main
int main(){
    Rectangle r(10,5);
    cout<<"Area is "<<r.area()<<endl;
    r.changeLength(20);
    cout<<r.area()<<endl;
    // Area is Length is 10 and Breadth is 5
    // 50
    // Length is 20 and Breadth is 5
    // 100
}