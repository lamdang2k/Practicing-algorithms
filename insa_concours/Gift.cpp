#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ull unsigned long long

bool solve (){
    int n, m;
    cin >> n >> m;
    char a[n][m];
    forn(i, n){
        forn (j, m){
            cin >> a[i][j];
        }
    }
    string target = "vika";
    bool result = false;
    int k = 0;
    forn(j, m){
        forn(i, n){
            if (target[k] == a[i][j]){
                k++;
                if(k==4){
                    return true; 
                }
                break;
            }
        }
    }
    return result;
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