#include<iostream>
#include<string>
using namespace std;
int main(){
    string greeting;
    cout<<"enter the greeting"<<endl;
    getline(cin,greeting);
    for (int i = 1; i <=5; i++)
    {
        cout<<greeting<<endl;
    }
    return 0;

}