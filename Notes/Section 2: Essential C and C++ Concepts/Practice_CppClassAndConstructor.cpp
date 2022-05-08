#include<iostream>

using namespace std;

class Rectangle{
    private:
        int length, breadth;
    public:
        Rectangle(){length=breadth=0;}
        Rectangle(int l, int b);
        int area();
        int perimeter();
        int getlength(){return length;}
        void setlength(int l){length = l;}
        ~Rectangle();
};

Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
}

int Rectangle::area(){
    return length*breadth;
}

int Rectangle::perimeter(){
    return 2*(length+breadth);
}

Rectangle::~Rectangle(){}

int main(){
    Rectangle r(18,3);
    cout<<"area : "<<r.area()<<endl;
    cout<<"perimeter : "<<r.perimeter()<<endl;
    r.setlength(20);
    cout<<"getlength : "<<r.getlength()<<endl;

    // area : 54
    // perimeter : 42
    // getlength : 20
}