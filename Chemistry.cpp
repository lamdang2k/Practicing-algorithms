#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

bool solve (int n, int k, string& s){
    if (n - k == 1) return true;
    map<char, int> counts; 
    forn(i, n){
        counts[s[i]]++;
    }
    int diff = 0;
    for (auto& i : counts){
        diff += i.second % 2;
    }
    if((n-k)%2 ==1) --diff;
    return diff <= k;
}
int main(){
    int t, n, k;
    string s;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        cin >> s;
        cout << (solve(n, k, s) ? "Yes" : "No") << "\n";
    }
}