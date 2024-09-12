#include <iostream>
#include <stack>
using namespace std;

int main(){
    cout<<"Rohit "<<endl;
    int arr[5] = {5,4,3,1,6};
    cout<<arr[0];
    stack<int> s;
    for(int i=0;i<5;i++){
        if(arr[i]>s.top()||s.empty()){
            s.push(arr[i]);
            cout<<arr[i]<<endl;
        }else{
            s.pop();
        }
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}
