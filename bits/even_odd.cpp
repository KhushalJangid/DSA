#include <iostream>
#include <bitset>

using namespace std;

int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Is odd: "<<(x&1)<<endl;
}
