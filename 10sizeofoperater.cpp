#include<iostream>
using namespace std;
int main(){
    int a =2;
    float f=2.434;
    double d=2.34344;
    char c='c';
    long double l=1.234;
    bool isTrue = true;
    string greeting = "hello, world! ";
    int numbers[5]= {1,2,3,4,5}; // add type of many values at a time
    const int MAX_value = 100;
    enum days{sunday,monday,tuesday,wednesday,thursday,friday,satruday};
    days today = wednesday;
    unsigned int positivenumber = 50;
    short number =10; // kam space leta hai
cout<<"the value of a is : "<<a<<" / the size if a is : "<<sizeof(a)<<endl;
cout<<"the value of a is : "<<f<<" / the size if a is : "<<sizeof(f)<<endl;
cout<<"the value of a is : "<<d<<" / the size if a is : "<<sizeof(d)<<endl;
cout<<"the value of a is : "<<c<<" / the size if a is : "<<sizeof(c)<<endl;
cout<<"the value of a is : "<<l<<" / the size if a is : "<<sizeof(l)<<endl;
cout<<"the value of a is : "<<isTrue<<" / the size if a is : "<<sizeof(isTrue)<<endl;
cout<<"the value of a is : "<<greeting<<" / the size if a is : "<<sizeof(greeting)<<endl;
cout<<"the value of a is : "<<numbers[5]<<" / the size if a is : "<<sizeof(numbers)<<endl;
cout<<"the value of a is : "<<MAX_value<<" / the size if a is : "<<sizeof(MAX_value)<<endl;
cout<<"the value of a is : "<<a<<" / the size if a is : "<<sizeof(days)<<endl;
cout<<"the value of a is : "<<positivenumber<<" / the size if a is : "<<sizeof(positivenumber)<<endl;
cout<<"the value of a is : "<<number<<" / the size if a is : "<<sizeof(number)<<endl;

}