#include<iostream>
using namespace std;

bool isPrime(int num) { // niche loop se jo value aai hai false wali ko ignore ker true wali ko niche bhajta reh
    if (num <= 1) { // ager num ki value ka maan 1 ke baraber ya us se chota hua to bhar matlab 
        return false; // niche dheko niche kuch nahi niche wali condition hi true hi nahi hai
    }
    for (int i = 2; i*i <= num; i++) {    // u can also use it i<num;
    // like ager num ki value ka maan 36 hai to bhai sirf 6 tak hi solv ker le baki tera bhai dhek lega
        if (num % i == 0) { // ha ji me i barabar 1 ke lia fir 2 fir 3 ke lia me to sirf issi ke lia hu
            return false; // jaise hi ==0 aya num ne bool isprime ko bola me to false hu
        }
    }
    return true;//ager upper ki dono condiction galat hai to bhai true to isprime ke pass bhaj
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    cout << "Prime numbers up to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {//bhai upper se jo value true aai usse niche print kerta ja 
            cout << i << " ";
        }
    }
    
    return 0;
}
