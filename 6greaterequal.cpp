#include<iostream>
using namespace std;
int main(){
    int a,b;
    
    cout<<"enter the value of a :"<<endl;
    cin>>a;
    cout<<"enter the value of b :"<<endl;
    cin>>b;
    // if a greater than b print this statement
    if(a>b){
        cout<<"a greater than b (a>b)"<<endl;
    }
    // if a less than b print this statement
    else if(a<b) {
        cout<<"a less than b (a<b)"<<endl;
    }
    // if a equal to b print this statement
    else {
        cout<<"a equal to b (a=b)"<<endl;
    }
    return 0;

}