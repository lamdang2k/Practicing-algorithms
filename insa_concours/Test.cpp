#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ull unsigned long long

ull solve (){
    ull n;
    cin >> n;
    ull a[n];
    ull suf[n];
    set <ull> s;
    forn(i, n){
        cin >> a[i];
    }
    ull count = 0;
    forn(i, n){
        if(s.find(a[n-1-i]) == s.end()){
            s.insert(a[n-1-i]);
            ++count;
        }
        suf[n-1-i]=count;
    }
    s.clear();
    ull result = 0;
    forn(i, n){
        if(s.find(a[i]) == s.end()){
            s.insert(a[i]);
            result += suf[i];
        }
    }
    return result;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
    ull t, n;
    cin >> t;
    while(t--) {
        cout << solve() << "\n";
    }
    return 0;
}