#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ull unsigned long long

int get_second( pair<int, int> i ){ return i.second; }

ull calculatePairs(vector<int>& v){
    ull sum = 0;
    ull nbPairs;
    for(auto& a: v){
        nbPairs = a*(a-1)/2;
        sum += nbPairs;
    } 
    return sum;
}


ull solve (vector<int>& p){
    unordered_map<int, int> m;
    if(p.size() == 1) return 0;
    for(auto& a:p){
        m[a]++;
    }
    vector<int> v ( m.size() );
    transform( m.begin(), m.end(), v.begin(), get_second);
    sort(v.begin(), v.end());
    int pairs12 = (m[1] = 0 || m[2] == 0) ? 0 : m[1] + m[2];
    return calculatePairs(v) + pairs12;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
    int n,t,a;
    cin >> t;
    while(t--) {
        vector<int> v;
        cin >> n;
        forn(i,n){
            cin >> a;
            v.push_back(a);
        }
        cout << (solve(v)) << "\n";
    }
    return 0;
}