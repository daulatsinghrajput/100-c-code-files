#include<iostream>
using namespace std;
int main(){
    float f = 34.5f;
    long double e = 34.5l;
    cout<<"the size of 34.5 is : "<<sizeof (34.5)<<endl;
    cout<<"the size of 34.5f is : "<<sizeof(34.5f)<<endl;
    cout<<"the size of 34.5F is : "<<sizeof(34.5F)<<endl;
    cout<<"the size of 34.5l is : "<<sizeof(34.5l)<<endl;
    cout<<"the size of 34.5L is : "<<sizeof(34.5L)<<endl;
    cout<<"the value of float f is : "<<f<<endl<<"the value of long double is : "<<e<<endl;
    return 0;
}