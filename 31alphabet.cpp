#include<iostream>
using namespace std;
int main(){
    char c='a';
    // while(c<='z)----> jab tak ye condition true na ho tab tak c ko print kerte rho
    while(c<='z'){
        cout<<c<<" ";
        c++;  // c++ -----> c ko har time 1 + kerte jao
    }
    return 0;
}