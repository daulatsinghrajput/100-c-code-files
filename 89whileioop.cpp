#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int i=1;
    while (i<n){
        if(i%2==0){
            cout<<"even  "<<i<<" ";
            
        }
     
        else{
            cout<<endl<<"odd  "<<i<<" ";
        }
        i++;
    }
    }