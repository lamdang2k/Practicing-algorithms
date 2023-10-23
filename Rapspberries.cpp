#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int solve (int n, int k){
    int a[n];
    int reminder[n];
    int maxRem = 0;
    forn(i,n){
        cin >> a[i];
    }
    forn(i,n){
        if(a[i] % k == 0) {
            return 0;
        }
        else{
            reminder[i] = a[i] % k;
            maxRem = (maxRem < reminder[i]) ? reminder[i] : maxRem;
        }
    }
    if (k != 4 || n == 1) return k - maxRem;
    else{
        int count = 0;
        forn(i, n){
            if(reminder[i] == 2) count++;
        }
        int result = min(k - maxRem, max(0, 2 - count));
        return result;
    }
}

int main(){
    int t, n, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        cout << solve(n, k) << "\n";
    }
}