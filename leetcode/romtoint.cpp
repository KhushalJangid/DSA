#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
  int num = 0,digit,m=1,prev;
  map<char, int> mp = {
      {'I',1}, 
      {'V',5}, 
      {'X',10}, 
      {'L',50}, 
      {'C',100}, 
      {'D',500}, 
      {'M',1000}
      };
  for(int i =(s.length()-1) ;i>=0;i--){
    prev = mp[s[i+1]];
    digit = mp[s[i]];
    cout<<digit<<"\t"<<prev<<endl;
    if(digit>=prev){
//      num += digit*m;
//      m *= 10;
//    }else if(digit == prev){
      num += digit;
  }else{
      num -= digit;
    }
  }
  return num;
}

int main(){
  map<char, int> mp = {
      {'I',1}, 
      {'V',5}, 
      {'X',10}, 
      {'L',50}, 
      {'C',100}, 
      {'D',500}, 
      {'M',1000}
      };
  string a = "XXIV";
//  cout<< a.length()<<endl<<mp[a[a.length()]]<<endl<<a[0]<<endl;
  cout<<romanToInt(a)<<endl;
}