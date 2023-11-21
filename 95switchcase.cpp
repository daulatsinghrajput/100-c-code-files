#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    switch (age)
    {
    case 10:
    cout<<"you are 10 years old"<<endl;
        break;
    case 12: 
    cout<<"you are 12 years old"<<endl;
        break;
    default:
    cout<<"no special cases"<<endl;
        break;
    }
    return 0;
}