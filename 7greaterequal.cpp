#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of a :"<<endl;
    cin>>a;
    cout<<"enter the value of b :"<<endl;
    cin>>b;
    cout<<"enter the value of c :"<<endl;
    cin>>c;
    
    // both contition is true than print this statement 
    if(a>b && a>c)
    {
        cout<<"a is greater"<<endl;
    }
    
    // both contition is true than print this statement 
    else if(b>a && b>c)
    {
        cout<<"b is greater"<<endl;
    }
    
    // both contition is true than print this statement 
    else if (c>a && c>b){
        cout<<"c is greater"<<endl;
    }
    
    return 0;
}