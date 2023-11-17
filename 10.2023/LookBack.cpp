#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ull unsigned long long

ull solve (){
    int n;
    cin >> n;
    ull a[n];
    forn(i, n){
        cin >> a[i];
    }
    ull ops,x;
    ops = x = 0;
    ull num;
    for (int i = 1; i < int(n); i++){
        if(a[i] < a[i - 1]){
            num = a[i];
            while(num < a[i - 1]){
                num *= 2;
                ++x;
            }
        } else{
            num = a[i-1];
            while(num*2 <= a[i] && x > 0){
                num *= 2;
                --x;
            }
        }
        ops += x;
    }
    return ops;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
    int t, n;
    cin >> t;
    while(t--) {
        cout << solve() << "\n";
    }
}