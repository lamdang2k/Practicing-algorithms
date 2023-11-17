#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define max(a, b) (a < b) ? b : a

bool checkParity (int before, int current){
    if ((current - before) % 2 == 0) return false;
    else return true;
}

int solve (vector<int>& v){
    int sum = v[0];
    int size = v.size();
    int pivot = sum;
    for (int i = 1; i < size; i++){
        if(checkParity(v[i-1], v[i])){
            pivot = max(v[i], pivot + v[i]);
        } else{
            pivot = v[i];
        }
        sum = max(sum, pivot);
    }
    return sum;
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