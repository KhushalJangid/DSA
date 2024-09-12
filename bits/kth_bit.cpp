#include <iostream>
#include <bitset>

using namespace std;

int cout_bits(int n){
    int count=0;
    while(n){
        n>>=1;
        count++;
    }
    return count;
}
int cout_set_bits(int n){
    int count=0;
    while(n){
        if(n&1){
            count++;
        }
        n>>=1;
    }
    return count;
}

int turnOnKthBit(int n,int k){
    return n | (1<<(k-1));
}
int turnOffKthBit(int n,int k){
    return n & ~(1<<(k-1));
}
bool checkKthBit(int n, int k){
    return (n & (1<<(k-1))) != 0;
}
int toggleKthBit(int n, int k){
    return n ^ (1<<(k-1));
}
int clearBitsUptoKfromLSB(int n,int k){
    // (15,2) => 1111 ==> 1100 (12)
    return n & ~((1<<k)-1);
}
int setBitsUptoKfromLSB(int n,int k){
    // (12,2) => 1100 ==> 1111 (15)
    return n | ((1<<k)-1);
}

int main(){
    cout<< turnOnKthBit(8,1)<<endl;
    cout<< turnOffKthBit(9,1)<<endl;
    cout<< checkKthBit(8,4)<<endl;
    cout<< toggleKthBit(9,1)<<endl;
    cout<< clearBitsUptoKfromLSB(15,2)<<endl;
    cout<<bitset<8>(131)<<endl;

return 0;
}
