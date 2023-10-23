#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define min(a,b) (a <= b) ? a : b

int solve(){
    int n;
    cin >> n;
    int a[n];
    forn(i,n) {
        cin >> a[i];
    }
    int dp[n+1];
    dp[n] = 0;
    int i = n - 1;
    while(i >= 0){
        if(i + a[i] + 1 > n){
            dp[i] = dp[i+1] + 1;
        } else{
            dp[i] = min((dp[i+1] + 1), dp[i + a[i] + 1]);
        }
        --i;
    }
    return dp[0];
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << "\n";
    }
}