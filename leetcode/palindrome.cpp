#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
        string clean = ;
        for (int i = 0,j = 0; i < s.size(); i++) {
            if(isalpha(s[i])){
                clean[j] = s[i];
                j++;
            }
        }
        cout<<clean<<endl;
        string copy_s = clean;
        reverse(clean.begin(),clean.end());
        // cout<<s<<"\t"<<copy_s<<endl;
        if(clean==copy_s){
            return true;
        }
        return false;
    }

int main(){
    string s;
    cout<<"Enter a string: ";
    // cin>>s;
    getline(cin,s);
    // cout<<s;
    if(isPalindrome(s)){
        cout<<"Is a Palindrome"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
