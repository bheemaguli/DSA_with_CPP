#include<iostream>

using namespace std;

int add(int a, int b){
    int c;
    c = a + b;
    
    return c;
}

int main(){

    int num1 = 19, num2 = 15, sum;

    sum = add(num1, num2);

    cout<<"Sum of "<<num1<<" & "<<num2<<" is "<<sum<<endl;
    // Sum of 19 & 15 is 34

    return 0;
}