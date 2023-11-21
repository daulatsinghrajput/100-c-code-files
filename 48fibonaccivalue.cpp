#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the numner"<<endl;
    cin>>n;
    int last=0;
    int previous=1;
    int current;
    for (int i = 1; i <=n; i++)
    {
        if(n<=2){ // i ki value 2 se kam or baraber ho to
            current=i-1;  // current ka maan i ki jo value hai us se 1 kam hoga 
        }
        // if bola haa ji maine 1 or 2 ke lia to print ker dia ab aap aage ka dhek lo
        else{ // ager upar vali condition true nahi hoti hai to niche aa jao
        current=last+previous; // current value ka maan last + previous hoga means 0+1
        last=previous; 
        previous=current;
        }
        cout<<current<<endl; // phale 1 or 2 ke lia current print 3 or aage ke lia
    
    }
    return 0;
}