#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define max(a, b) (a < b) ? b : a

int solve (vector<int>& vec){
    auto it = std::min_element(std::begin(vec), std::end(vec));
    int index = distance(vec.begin(), it);
    int pivot = vec[index];
    for(auto& i = it; it != vec.end(); it++){
        if(pivot > *i) return -1;
        pivot = *i;
    }
    return index;
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