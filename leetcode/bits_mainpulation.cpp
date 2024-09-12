#include <iostream>
#include <bitset>
using namespace std;

int main(){
  // int a = 32;
  // int b = a >> 3;
  // int c = 258;
  // cout<<"a = "<<bitset<8>(a)<<endl;
  // cout<<"b = "<<bitset<8>(b)<<endl;
  // cout<<"c = "<<bitset<16>(c)<<endl;
  // int d = 1<<3;
  // cout<<"1 = "<<bitset<8>(1)<<endl;
  // cout <<"d = "<<bitset<8>(d)<<endl;
  int x =-1;
  // int y = x & (x-1);
  cout<<"x   = "<<bitset<8>(x)<<endl;
  // cout<<"x-1 = "<<bitset<16>(x-1)<<endl;
  // cout<<"y   = "<<bitset<16>(y)<<endl;
  int count =0,num=200;
  while(num!=0){
    num = num & (num-1);
    count++;
  }
  cout<<count;
  return 0;
}