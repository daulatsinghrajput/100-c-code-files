#include<iostream>
using namespace std;
int main(){
    for (int row = 1; row<=5; row++)
    {
        for (int col = 1; col <row; col++)
        {
            cout<<" "<<" ";
        }
        for (int col = 1; col <=10-((2*row)-1); col++)
        {
            cout<<"*"<<" ";
        }
        for (int col = 1; col < row; col++)
        {
            cout<<" "<<" ";
        }
        cout<<endl;
    }
    return 0;
}