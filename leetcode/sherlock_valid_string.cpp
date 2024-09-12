#include <iostream>
#include <map>
using namespace std;

void printMap(map<char,int> m){
    for(auto itr:m){
        cout <<itr.first<<": "<<itr.second<<endl;
    }

}

string isValid(string s) {
    map<char,int> freq;
    int n=0,d=0;
    bool flag = false;
    for(int i=0;i<s.size();i++){
        freq[s[i]]++;
    }
    printMap(freq);
    map<int,int> fof;
    int mode_f=0;
    for(auto itr:freq){
        fof[itr.second]++;
        if(mode_f<fof[itr.second]){
            mode_f = fof[itr.second];
            n = itr.second;
        }
    }
    for(auto itr:freq){
        d = abs(n-itr.second);
        if(d>=2&&itr.second>1){
            cout<<"NO"<<endl;
            return "NO";
        }
        else if((n!=itr.second && d<2) && !flag){
            flag=true;
        }else if(flag==true && n!= itr.second){
            cout<<"NO"<<endl;
            return "NO";
        }
    }
    cout<<"YES"<<endl;
    return "YES";

}

int main(){
    string inp = "ibfdgaeadiaefgbhbdghhhbgdfgeiccbiehhfcggchgghadhdhagfbahhddgghbdehidbibaeaagaeeigffcebfbaieggabcfbiiedcabfihchdfabifahcbhagccbdfifhghcadfiadeeaheeddddiecaicbgigccageicehfdhdgafaddhffadigfhhcaedcedecafeacbdacgfgfeeibgaiffdehigebhhehiaahfidibccdcdagifgaihacihadecgifihbebffebdfbchbgigeccahgihbcbcaggebaaafgfedbfgagfediddghdgbgehhhifhgcedechahidcbchebheihaadbbbiaiccededchdagfhccfdefigfibifabeiaccghcegfbcghaefifbachebaacbhbfgfddeceababbacgffbagidebeadfihaefefegbghgddbbgddeehgfbhafbccidebgehifafgbghafacgfdccgifdcbbbidfifhdaibgigebigaedeaaiadegfefbhacgddhchgcbgcaeaieiegiffchbgbebgbehbbfcebciiagacaiechdigbgbghefcahgbhfibhedaeeiffebdiabcifgccdefabccdghehfibfiifdaicfedagahhdcbhbicdgibgcedieihcichadgchgbdcdagaihebbabhibcihicadgadfcihdheefbhffiageddhgahaidfdhhdbgciiaciegchiiebfbcbhaeagccfhbfhaddagnfieihghfbaggiffbbfbecgaiiidccdceadbbdfgigibgcgchafccdchgifdeieicbaididhfcfdedbhaadedfageigfdehgcdaecaebebebfcieaecfagfdieaefdiedbcadchabhebgehiidfcgahcdhcdhgchhiiheffiifeegcfdgbdeffhgeghdfhbfbifgidcafbfcd";
    isValid(inp);
    return 0;
}
