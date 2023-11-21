#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"which table you want to print"<<endl;
    cin>>t;
    int count=1;
    // while(count<=10)---> jab tak count ki value 10 na ho jay tab tak print kerte rhao
    while (count<=10)
    {
        cout<<t*count<<" ";
        count++;
    }
    return 0;
}