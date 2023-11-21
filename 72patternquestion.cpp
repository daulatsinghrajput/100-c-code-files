#include<iostream>
using namespace std;
int main(){
    int a=5;
    for (int row = 1; row <=5; row++)
    {
        for (int col = 1; col<=row; col++)
        {
            
            cout<<6-col<<" ";
        }
        cout<<endl;       
    }
    return 0;
}