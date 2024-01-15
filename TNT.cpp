#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
using ll = long long;

void getFactors(int n, vector<int>& factors){
    // Note that this loop runs till square root 
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            if (n/i == i) factors.push_back(i);
            else{
                factors.push_back(i);
                factors.push_back(n/i);
            }
        } 
    } 
}

ll solve (vector<int>& v, int factor){
    ll mx = -1e18, mn = 1e18;
    int size = v.size();
    for (int i = 0; i < size; i += factor) {
        ll sm = 0;
        for (int j = i; j < i + factor; ++j) {
            sm += v[j];
        }
        mx = max(mx, sm);
        mn = min(mn, sm);
    }
    return mx - mn;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
    int n,t,a;
    cin >> t;
    while(t--) {
        vector<int> v, factors;
        cin >> n;
        getFactors(n, factors);
        forn(i,n){
            cin >> a;
            v.push_back(a);
        }
        ll result = 0;
        for(auto& a : factors){
            result = max(result, solve(v, a));
        }
        cout << result << "\n";
    }
    return 0;
}