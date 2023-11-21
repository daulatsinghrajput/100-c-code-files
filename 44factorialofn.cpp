#include<iostream>
using namespace std;
int main(){
    int f;
    cout<<"which number of you want factorial"<<endl;
    cin>>f;
    int sum=1;
    for (int i = 1; i <=f; i++)
    {
        sum=sum*i;
    }
    cout<<sum;
    

}