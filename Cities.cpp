#include<bits/stdc++.h>
using namespace std;

#define forn(i, from, to) for (int i = from; i < to; i++)
#define debug(a) std::cout << #a " is value " << (a) << std::endl;
#define ull unsigned long long
#define INF std::numeric_limits<int>::max()

void solve(){
    int n;
    cin >> n;
    vector<int> a(n + 2), f(n + 1), b(n + 1);
    forn(i, 1, n + 1) cin >> a[i];
    a[0] = -INF;
    a[n + 1] = INF;
    f[1] = 0; 
    f[2] = 1;
    b[n] = 0;
    b[n - 1] = 1;
    forn(j, 2, n){
        if(a[j] - a[j - 1] > a[j + 1] - a[j]){
            f[j + 1] = f[j] + 1;
        } else{
            f[j + 1] = f[j] + a[j + 1] - a[j];
        }
    }
    for(int i = n - 2; i > 0; i--){
        if(a[i + 1] - a[i] < a[i + 2] - a[i + 1]){
            b[i] = b[i + 1] + 1;
        } else{
            b[i] = b[i + 1] + a[i + 1] - a[i];
        }
    }
    int m;
    cin >> m;
    while (m--){
        int start, end;
        cin >> start >> end;
        if(start < end){
            cout << f[end] - f[start]<< " \n";
        }
        else{
            cout << b[end] - b[start] << " \n";
        }
    }
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