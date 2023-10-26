#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
map<int, int, greater<int>> lefts;
map<int, int> rights;

bool solve (char s, int l, int r){
    if(s == '+'){
        lefts[l]++;
        rights[r]++;
    } else{
        lefts[l]--;
        rights[r]--;
        if(lefts[l] == 0) lefts.erase(l);
        if(rights[r] == 0) rights.erase(r);
    }
    int maxLeft = lefts.begin()->first;
    int minRight = rights.begin()->first;
    return minRight < maxLeft;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
    int t, l, r;
    char s;
    cin >> t;
    while(t--) {
        cin >> s >> l >> r;
        cout << (solve(s, l, r) ? "Yes" : "No") << "\n";
    }
}