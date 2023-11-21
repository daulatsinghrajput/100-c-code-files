#include<iostream>
using namespace std;
int main(){
    unsigned int marks;
    cout<<"enter your marks :"<<endl;
    cin>>marks;
    if(marks>100){
        cout<<"invalid marks try again"<<endl;
    }
    else if(marks>90){
        cout<<"you are topper with A+ grade"<<endl;
    }
    else if(marks>=75){
        cout<<"you are pass with A grade"<<endl;
    }
    else if(marks>=60){
        cout<<"you are pass with B grade"<<endl;
    }
    else if(marks>=33){
        cout<<"you are pass with C grade"<<endl;
    }
    else{
        cout<<"you are fail"<<endl;
    }
    return 0;
}   