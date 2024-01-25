#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define debug(a) std::cout << #a " is value " << (a) << std::endl;
#define ull unsigned long long

ull compute(int n, int remainder){
    ull sum = 1;
    ull pair = (ull) n*(n-1)*remainder / 2;
    for(int i = 1; i <= 3; i++){
        sum = (ull) sum * (n - 3 + i) / i;
    }
    return sum + pair;
}

void solve(){
    int n;
    cin >> n;
    ull result = 0;
    vector<int> a(n);
    map<int, int> m;
    int count = 0;
	forn (i, n){
        cin >> a[i];
        m[a[i]]++;
    }
    for(auto& i: m){
        if(i.second == 2) result += count;
        else if (i.second > 2){
            result += compute(i.second, count);
        }
        count += i.second;
    }
    cout << result << " \n";
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