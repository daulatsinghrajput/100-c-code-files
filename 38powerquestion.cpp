#include<iostream>
using namespace std;
int main(){
    int n,power;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"enter the power"<<endl;
    cin>>power;
    int sum;
    int num=1;
    for (int i = 1; i <=power; i++)
    {
        num = num* n;
    }
    cout<<num;

}