#include<iostream>
using namespace std;
int main(){
    unsigned int marks;
    bool invalid=true; // matlab ye condition ki value one hai or ye run ke lia hai
    while(invalid){ // same condition deni hai jo apne phale di hai jab tak ye condition match hogi tab tak program run hoga  
    cout<<"enter your marks :"<<endl;
    cin>>marks;
    if(marks>100){
        cout<<"invalid marks try again"<<endl;
        invalid=true; // matlab value condition se match ho gyi fir se run kro

       } 
     else if(marks>90){
        cout<<"you are topper with A+ grade"<<endl;
        invalid=false; // matlab condition match nahi hui loop se bhar nikal jao
    }
    else if(marks>=75){
        cout<<"you are pass with A grade"<<endl;
        invalid=false;
            }
    else if(marks>=60){
        cout<<"you are pass with B grade"<<endl;
        invalid=false;
    }
    else if(marks>=33){
        cout<<"you are pass with C grade"<<endl;
        invalid=false;
    }
    else{
        cout<<"you are fail"<<endl;
        invalid=false;
    }
    }
    
    return 0;
}   
