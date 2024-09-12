#include "string"
using namespace std;

string timeConversion(string s) {
if(s.substr(8,2) == "AM"){
//         00:00:00->11:59:59
        if(s.substr(0,2) == "12"){
            s.replace(0,2,"00");
            return s.substr(0,8);
        }else{
            return s.substr(0,8);
        }
    }else{
//         12:00:00->23:59:59
if(s.substr(0,2) == "12"){
    return s.substr(0,8);
}else{
    s.replace(0,2,to_string(stoi(s.substr(0,2))+12));
            return s.substr(0,8);
}

    }
}
