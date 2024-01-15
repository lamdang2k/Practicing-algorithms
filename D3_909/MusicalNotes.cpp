#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ull unsigned long long

void solve (){
    // Enter vector values
    int n;
    cin >> n;
	vector<int> p(n);
	for (int& x : p) cin >> x;

    //Solve 
    ull result = 0;
    map<int, int> m;
    forn(i, n){
        int a = p[i];
        result += m[a];
        if (a == 1) result += m[2];
        else if (a == 2) result += m[1];
        ++m[a];
    }
    cout << result << endl;
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