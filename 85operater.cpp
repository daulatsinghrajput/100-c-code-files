#include<iostream>
using namespace std;
int main(){
    // because int<float<double
    cout<<12.4/4<<endl; // float>int
    cout<<15/4<<endl;  // int == int 
      
    // {*,/,%} >>>>> {+,-}
    cout<<13*4/5+34-5<<endl; //first solve [*,/,%] than [+,-]
    cout<<12*3%2/3<<endl; //associative low [ left to right] first * secont % third /

    // arithmatic operater two types
    // unary or binary
    // unary -----> a++ a-- ++a --a
    // binary ----> + - * / %
    int a=2;
    int b=3;
    if(a==b){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    //bitwise opertater ---> &,|,~,^,<<,>>,
    cout<<~b<<endl;
    cout<<a<<b<<endl;

    return 0;
}