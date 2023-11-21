#include<iostream>
using namespace std;
int main(){
    int i = 1; // initialize
    while(i<=10){
        if (i==4) // ye condition ho tab break laga do
        break;
        cout<<i<<" "; // printi
        i++; // increment
    }
    return 0;
}