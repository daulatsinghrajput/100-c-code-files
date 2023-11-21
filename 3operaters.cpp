#include<iostream>
using namespace std;
int main(){
    int a,b;
    
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    
    // arithmetic operater
    cout<<"the sum of two numbers:"<<a+b<<endl;
    cout<<"the sum of two numbers:"<<a-b<<endl;
    cout<<"the sum of two numbers:"<<a*b<<endl;
    cout<<"the sum of two numbers:"<<a/b<<endl;
    cout<<"the sum of two numbers:"<<a%b<<endl;
    
    // increment & decrement operater
    cout<<"the sum of two numbers:"<<++a<<endl;
    cout<<"the sum of two numbers:"<<a++<<endl;
    cout<<"the sum of two numbers:"<<--a<<endl;
    cout<<"the sum of two numbers:"<<a--<<endl;
    
    // assignment operater
    b+=5;
    cout<<"after add 5 the current value of b is:"<<b<<endl;

    //comparision operater
    int num1,num2;
    cout<<"the value of num1 ?"<<endl;
    cin>>num1;
    cout<<"the value of num2 ?"<<endl;
    cin>>num2;
    bool isequal=(num1==num2);
    cout<<"both values are equal or not :"<<isequal<<endl;


    int c=14,d=14;
    bool isequal1=(c==d);
    cout<<"both values are equal or not :"<<isequal1<<endl;


    bool isequal2=(num1>num2); 
    cout<<"num1 is greater than num2 :"<<isequal2<<endl;

    bool isequal3=(a>b);
    cout<<"a is greater than b :"<<isequal3<<endl;
    
    bool istrue=true,isfalse=false;
    bool result=istrue&&isfalse;
    cout<<"both are true than true :"<<result<<endl;
    
    bool result2=istrue||isfalse;
    cout<<"any one is true than true :"<<result2<<endl;
 
    //conditional (ternary) operater
    int age;
    cout<<"enter ypur age :"<<endl;
    cin>>age;
    string status=(age>=18)?"adult": "minor";
    cout<<"if age greater or equal to 18 than answer is adult else minor : "<<status<<endl;
 
    //bitwise operater
    int e,f;
    cout<<"the value of e"<<endl;
    cin>>e;
    cout<<"the value of f"<<endl;
    cin>>f;

    int result1=e&f;
    cout<<" Result 1 hota hai sirf agar dono bits 1 hain; varna, woh 0 hota hai. :"<<result1<<endl;
 
    int result3=e|f;
    cout<<" Result 1 hota hai agar kam se kam ek bit 1 hai. :"<<result3<<endl;
 
    int result4=e^f;
    cout<<"both are different than answer is 1 else 0 : "<<result4<<endl;

    return 0;
    


}