#include<iostream>
using namespace std;
int main(){
    unsigned int package;
    cout<<"enter your package :"<<endl;
    cin>>package;
    if(package>=50){
    cout<<"i accept the package"<<endl;
    }
    else{
        cout<<"i reject the package"<<endl;
    }
    return 0;
}