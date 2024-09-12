#include <iostream>
using namespace std;

void _swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void _reverse(int arr[],int l,int r){
    int n = r-1+l;
    for(int i=l;i<n/2.0;i++){
        _swap(&arr[i],&arr[n-i-1]); 
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9}
    ,n=9,k=3;
    // for(int i=0;i<n/2;i++){
    //     _swap(&arr[i],&arr[n-i-1]);
    // }
    _reverse(arr,0,n-1);
    // for(int i=0;i<k/2;i++){
    //     _swap(&arr[i],&arr[k-i-1]);
    // }
    _reverse(arr,0,k-1);
    // int j=1;
    // for(int i=k;i<(n+k)/2;i++){
    //     _swap(&arr[i],&arr[n-j]);
    //     j++;
    // }
    _reverse(arr,k,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}