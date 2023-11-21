#include<iostream>
using namespace std;
int main() {
    unsigned int age;
    bool isValidinput = true;
    while(isValidinput) {
    cout<<"enter your age :"<<endl;
    cin>>age;
    if(age>=18 && age<=100){
        cout<<"you can into my party"<<endl;
        isValidinput=false;
    }
    else if(age<18 && age>=1){
        cout<<"you can not come into my party"<<endl;
        isValidinput=false;
    }
    else{
        cout<<"inValid age try again"<<endl;
    }
    }
    return 0;
}