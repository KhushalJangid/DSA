#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

int get_ans(int N,int M,int k,string S,string T){
    if (M > N) return 0;

    int maxOccurrences = 0;

    for (int i = 0; i <= N - M; ++i) {
        int replacements = 0;
        for (int j = 0; j < M; ++j) {
            if (S[i + j] != T[j]) {
                ++replacements;
            }
        }
        if (replacements <= k) {
            ++maxOccurrences;
            k-=replacements;
        }
    }

    return maxOccurrences;
}

int main(){
    cout<< get_ans(6, 2, 3, "abcbad", "ab") <<endl;
    return 0;
}
