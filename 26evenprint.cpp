#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"how many even numbers you want to print"<<endl;
    cin>>n;
    int count = 2;
    for (int i = 1; i <= n; i++)
    {
         cout<<count<<endl;
         count+=2;  // count me har time 2 add kro
    }
    return 0;
}