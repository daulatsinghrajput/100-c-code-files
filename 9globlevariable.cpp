#include<iostream>
using namespace std;
int c = 12;
int main(){
    int a,b,c;
    cout<<"enter the value of a :"<<endl;
    cin>>a;
    cout<<"enter the value of b :"<<endl;
    cin>>b;
    c=a+b;
    cout<<"the sum of two naumbers is :"<<c<<endl;
    cout<<"the globle variable is "<<::c<<endl; //::c to print globle variable
    return 0;

}