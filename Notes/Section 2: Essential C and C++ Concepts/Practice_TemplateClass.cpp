#include<iostream>

using namespace std;

template<class T>
class Arthematic{
    private:
        T a;
        T b;
    public:
        Arthematic(T a, T b);
        T add();
        T sub();
};


template<class T>
Arthematic<T>::Arthematic(T a, T b){
    this->a=a;
    this->b=b;
}

template<class T>
T Arthematic<T>::add(){
    T c;
    c = a + b;
    return c;
}

template<class T>
T Arthematic<T>::sub(){
    T c;
    c = a - b;
    return c;
}

int main(){
    Arthematic<int> ar{10,5};
    cout<<"INT: "<<endl;
    cout<<ar.add()<<endl;
    cout<<ar.sub()<<endl;

    Arthematic<float> ar1{10.5,5.2};
    cout<<"FLOAT: "<<endl;
    cout<<ar1.add()<<endl;
    cout<<ar1.sub()<<endl;

    // INT: 
    // 15
    // 5
    // FLOAT: 
    // 15.7
    // 5.3
}