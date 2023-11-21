#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 1;
    int i= 1;
    cout<<"how many odd numbers you want to print"<<endl;
    cin>>n;
    while (count<=n)
    {
        cout<<i<<endl;
        i+=2;
        count++;
    }
    return 0;
}