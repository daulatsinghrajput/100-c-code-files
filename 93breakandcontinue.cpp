#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the valude of n : "<<endl;;
    cin>>n;
    int x;
    cout<<"enter the value of x :"<<endl;;
    cin>>x;
    int i = 1;
    while (i<=n)
    {
        if (i==x)
        break;
        cout<<i<<" ";
        i++;
    }
    return 0;
}