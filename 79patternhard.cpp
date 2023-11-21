#include<iostream>
using namespace std;
int main(){
    for (int row = 1; row <=5; row++)
    {
        for (int col = 1; col <=5-row; col++)
        {
            cout<<" "<<" ";
        }
        for (int col = 1; col <=(2*row)-1; col++)
        {
            cout<<"*"<<" ";
        }
        for (int col = 5-row; col >=1; col=col-1)
        {
            cout<<" "<<" ";
        }
        cout<<endl;
    }
    return 0;
}