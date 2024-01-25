#include <iostream>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve(){
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    int match = 0;
    forn(i, n){
        if(a[i] == c[i] || b[i] == c[i]) match++;
    }
    if(match == n) cout << "No" << " \n";
    else cout << "Yes" << " \n";
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
    int t;
	cin >> t;
	while (t--) solve();
    return 0;
}