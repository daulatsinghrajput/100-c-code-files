#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    int sum=0;
    for (int i = 1; i <=a; i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    
}