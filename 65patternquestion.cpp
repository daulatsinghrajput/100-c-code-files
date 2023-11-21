#include<iostream>
using namespace std;
int main(){
    for (int row = 1; row <=5; row++)
    {
        for (int col = 97; col <=101; col++)
        {
            cout<<char(col)<<" ";
        }
        cout<<endl;
    }
    return 0;
}