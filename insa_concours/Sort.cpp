#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ull unsigned long long

bool solve (){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> sorted;
    forn(i, n){
        cin >> a[i];
        sorted.push_back(a[i]);
    }
    sort(sorted.begin(), sorted.end());
    forn(i,n){
        if ((sorted[i] %2) != (a[i] %2)) return false;
    }
    return true;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
    ull t;
    cin >> t;
    while(t--) {
        cout << (solve() ? "Yes" :"No") << "\n";
    }
    return 0;
}