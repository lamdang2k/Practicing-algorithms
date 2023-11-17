#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ull unsigned long long

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
    int n, s;
    cin >> n;
    vector<int> a;
    forn(i, n){
        cin >> s;
        a.push_back(s);
    }
    sort(a.begin(),a.end());
    forn(j, n){
        cout << a[j] << " ";
    }
    return 0;
}