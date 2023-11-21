#include<iostream>
using namespace std;
int main(){
    int column,row;
    cout<<"how many row you want to print"<<endl;
    cin>>row;
    cout<<"how many column you want to print"<<endl;
    cin>>column;
    for (int i = 1; i <=row; i++)
    {
        for (int i = 1; i <=column; i++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}