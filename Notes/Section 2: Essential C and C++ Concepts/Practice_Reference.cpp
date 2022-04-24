#include<iostream>

using namespace std;

int main(){
    int a = 10;
    int &r = a;
    cout<<a<<" is same as "<<r<<endl;
    // 10 is same as 10

    a=25;
    cout<<a<<" is same as "<<r<<endl;
    // 10 is same as 10
    // 25 is same as 25

    int b = 30;
    r=b;
    cout<<a<<" is same as "<<r<<endl;
    // 10 is same as 10
    // 25 is same as 25
    // 30 is same as 3

    return 0;
}