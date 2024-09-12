#include <iostream>
#include <bitset>

using namespace std;

int main(){
    int arr[9] = {1,1,10,3,4,4,3,10,10};
    int x = 0;
    for(int i=0;i<9;i++){
        x = x^arr[i];
    }
    cout<<x<<endl;
    return 0;
}
