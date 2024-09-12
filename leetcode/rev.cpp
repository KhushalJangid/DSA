#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
  int limit_p = (pow(2,31)-1)/10, limit_n = -(pow(2,31)/10);
  cout<< limit_p<<"\t"<<limit_n;
  int rev=0,num=x;
  while(x!=0){
    if(limit_p<rev<limit_n){
      return 0;
    }else{
      rev = (rev*10) + (x % 10);
      x = x/10;
    }
  }
  if(x<0){
    return -rev;
  }else{
    return rev;
  }

}

int main(){
  cout << reverse(1000)<<endl;
  return 0;
}