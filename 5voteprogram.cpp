#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter you age :"<<endl;
    cin>>age;
    // any one condition is true then print it 
    if(age<0 || age>100){
        cout<<"envalid age try again"<<endl;
    }
    // if age less than 18 print it
    else if(age<18){
        cout<<"you can not vote"<<endl;
    }
    // if age greateror equal to 18 print this statement
    else if(age>=18){
    cout<<"you can vote"<<endl;
    }
    return 0;
}