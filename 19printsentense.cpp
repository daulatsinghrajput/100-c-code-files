#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int n;
    cout<<"enter your sentense that you want to print n time"<<endl;
    getline(cin,s);
    cout<<"how many times you want to print this sentense"<<endl;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cout<<s<<endl;
    }
    return 0;
}