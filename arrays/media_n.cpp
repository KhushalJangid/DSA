#include <iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10},n=9;
    float median;
    if(n%2==0){
        median = (float)(arr[n/2]+arr[(n-2)/2])/2;
    }else{
        median = arr[n/2];
    }
    cout<<"Median : "<<median<<endl;
    return 0;
}