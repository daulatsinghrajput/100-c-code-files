#include<iostream>
using namespace std;
int main(){
    for (int row = 1; row <=4; row++)
    {
        for (int col = 1; col <=4-row; col++)
        {
            cout<<" "<<" ";
        }
        for (int col = 1; col <=2*row-1; col++)
        {
            cout<<"*"<<" ";
        }
        for (int col = 1; col <=4-row; col++)
        {
            cout<<" "<<" ";
        }
        cout<<endl;
     }
     for (int row= 1; row <=3; row++)
     {
         for (int col = 1; col <=row; col++)
         {
            cout<<" "<<" ";
         }
         for (int col = 1; col <=7-row*2; col++)
         {
            cout<<"*"<<" ";
         }
         for (int col = 1; col <=row; col++)
         {
            cout<<" "<<" ";
         }
         cout<<endl;
    }
     
    return 0;
}