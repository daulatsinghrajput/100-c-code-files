#include<iostream>
using namespace std;
int main(){
    // reference variable
    float a = 45.5;
    float &b = a;
    cout<<a<<endl;
    cout<<b<<endl;

    //type casting
    cout<<"the value of int a is :"<<int(a)<<endl;
    cout<<"the value of float a is :"<<a<<endl;

    int c = int (a);
    cout<<"the value pf int c is :"<<c<<endl;
    cout<<"the sum of a and b is :"<<a+b<<endl;
    cout<<"the sum of a and b is :"<<a+int(b)<<endl;
    cout<<"the sum of a and b is :"<<int(a)+b<<endl;
    cout<<"the sum of a and b is :"<<int(a)+int(b)<<endl;
    cout<<"the sum of a and b is :"<<int(a)+int(b)+c<<endl;

}