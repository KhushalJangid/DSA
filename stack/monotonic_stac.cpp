#include <iostream>
#include <stack>
using namespace std;

int main(){
    int arr[5] = {5,4,3,1,6};
    stack<int> s;
    for(int i=0;i<5;i++){
        if(s.empty()){
            s.push(arr[i]);
        }
        else if(arr[i]>s.top()){
            s.push(arr[i]);
        }else{
            s.pop();
            s.push(arr[i]);
        }
    }
    while(!s.empty()){
        cout<<"|"<<s.top()<<"|"<<endl;
        s.pop();
    }
    return 0;
}
