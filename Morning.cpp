#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int solve (string& code){
    int result = 0;
    char pivot = '1';
    forn(i,4){
        if(code[i] == '0'){
            result += abs(':' - pivot);
            pivot = ':';
        }
        else {
            result += abs(code[i] - pivot);
            pivot = code[i];
        }
    }
    return result + 4;
}
int main(){
    int t;
    cin >> t;
    string code;
    while(t--) {
        cin >> code;
        cout << solve(code) << "\n";
    }
}