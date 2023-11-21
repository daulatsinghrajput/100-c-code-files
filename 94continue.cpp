#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <=10; i++)
    {
        if(i%3==0)
        continue; // ager upper wali statement true hai to niche mat jao loop fir se start kro
        cout<<i<<" ";
    }
    return 0;
}