#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(n<2){ // i ka maan 2 se kam nahi hona chaiye
        cout<<"invalid input try again";
        return 0;
    } else{
    for (int i = 2; i <n; i++) // i ka maan 2 se start kro 
    {
        if(n%i==0){ 
            cout<<"not prime"<<endl;
            return 0; // uper wali condition true ho to aage mat jao
        }
    }
        cout<<"prime"<<endl; // ager upper wali condition na shi ho to ye print kro
    
    }
  
}