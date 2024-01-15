#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ull unsigned long long

void solve (){
    // Enter vector values
    int n, q;
    cin >> n >> q;
	vector<int> d(q);
	for (int& x : d) cin >> x;

    //Solve 
    int dist;
    int d1 = n - 1;
    int d2 = 1;
    int u, v1, v2;
    int back1, back2;
    vector<int> q1, q2;
    forn(i, n - 1){
        cout << i + 1 << " " << i + 2 << " \n"; 
        q1.push_back(i + 1);
    }
    q1.push_back(n);
    q2.push_back(1);
    q2.push_back(2);

    forn(i, q){
        dist = d[i];
        int diff = abs(dist  - d1);
        if(d1 == dist || d2 == dist){
            u = v1 = v2 = -1;
        } else if(d1 < dist){
            v2 = q1.back();
            vector<int> qq(q2.end() - diff, q2.end());
            q2.resize(d2 + 1 - diff);
            u = qq.front();
            v1 = q2.back();
            q1.insert(q1.end(), qq.begin(), qq.end());
        } else{
            v2 = q2.back();
            vector<int> qq(q1.end() - diff, q1.end());
            q1.resize(d1 + 1 - diff);
            u = qq.front();
            v1 = q1.back();
            q2.insert(q2.end(), qq.begin(), qq.end());
        }
        d1 = q1.size() - 1;
        d2 = q2.size() - 1;
        cout << u << " " << v1 << " " << v2 << " \n";
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