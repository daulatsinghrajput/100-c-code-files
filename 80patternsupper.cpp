#include<iostream>
using namespace std;
int main(){
    for (int row = 1; row <=5; row++)
    {
        for (int col = 1; col <6-row; col++)
        {
            cout<<" "<<" ";
        }
        for (int col = 1; col <=row; col++)
        {
            cout<<col<<" ";
        }
        for (int col = row-1; col>=1; col=col-1)
        {
            cout<<col<<" ";
        }
        for (int col = 1; col<=5-row; col++)
        {
            cout<<" "<<" ";
        }
        
        cout<<endl;
        
    }
    return 0;
}