#include<iostream>
using namespace std;
int main(){
    int a = 45;
    cout<<"the value of a was : "<<a<<endl;
    a=34; // change value of a
    cout<<"the value of a is : "<<a<<endl;
    const int b = 23;
    //b=45; the value of b not change because a is const
    cout<<"the value of b is : "<<b<<endl;


}