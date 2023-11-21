#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"which table you want to print"<<endl;
    cin>>t;
    for (int i = 1; i <=10; i++)
    {
        cout<<t*i<<" ";
    }
    cout<<endl;
}