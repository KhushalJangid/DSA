#include <bits/stdc++.h>
using  namespace std;

bool checkUpperLimit(int x,int carry){
  const int limit = (pow(2,31)-1);
  if(x <= (limit/10)){
    if((limit-(x*10))>=carry){
      return false;
    }else{
      return true;
    }
  }else{
    return true;
  }
}
bool checkLowerLimit(int x,int carry){
  const int limit = -pow(2,31);
  if(-x >= (limit/10)){
    if((limit-(-x*10))<-carry){
      return false;
    }else{
      return true;
    }
  }else{
    return true;
  }
}


int myAtoi(string s) {
  char sign = 0;
  bool numf = false,numsign = false;
  // const int limit_p = (pow(2,31)-1), limit_n = -pow(2,31);
  int num = 0,digit;
  for (int i = 0; i < s.length(); i++) {
    if(s[i] == '-' || s[i] == '+'){
      if(numf == true){
        numsign= true;
        break;
      }
      if(sign == '\0' ){
        sign = s[i];
      }else if(sign == s[i]){
        sign = s[i];
      }else{
        if(s[i-1] == '-' ||s[i-1] == '+'){
          return 0;
        }else{
          break;
        }
      }
    }else if(s[i] >= 48 && s[i] <= 57){
      digit = (s[i] - 48);
      if(numsign){
        break;
      }
      if(checkUpperLimit(num,digit)  && sign != '-'){
        return pow(2,31)-1;
      }else if (checkLowerLimit(num,digit)  && sign == '-'){
        return -pow(2,31);
      }
      num = (num*10) + digit;
      numf = true;
    }else if(s[i] == 32){
      if(num != 0 || numf){
        break;
      }
    }else if (s[i] == '.'){
      break;
    }else{
      if(numsign){
        num =0;
      }
      break;
    }
  }
  if(sign == '-'){
    return -num;
  }else{
    return num;
  }
}

int main(){
  cout << myAtoi("-42")<<endl;
}