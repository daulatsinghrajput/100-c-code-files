#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"which table you want"<<endl;
    cin>>n;
    int i=1;
    while(i<=10){
        cout<<(n*i)<<endl;
        i++;
    }
    return 0;
    }