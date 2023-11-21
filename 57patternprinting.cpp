#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number you want print many times"<<endl;
    cin>>a;
    for (int row = 1; row<=5; row++)
    {
        for (int col = 1; col <=5 ; col++)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }
    
}