#include<iostream>
using namespace std;
int main(){
    for (int row= 97; row <=101; row++)
    {
        for (int  col = 1; col <=5; col++)
        {
            cout<<char(row)<<" ";
        }
        cout<<endl;
    }
    return 0;
}