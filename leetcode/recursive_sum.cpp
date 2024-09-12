#include <iostream>
using namespace std;

int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    int s = 0;
    s = arr[0]+sum(&arr[1],n-1);
    return s;
}

int main(){
    int a[10] = {1,2,3,4,5};
    cout<<"SUm : "<<sum(a,5)<<endl;
    return 0;
}
