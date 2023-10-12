#include <iostream>
#include <vector> 
#include <string>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int t,n;
    string s;
    cin >> t;
    forn(i,t){
        cin>>n>>s;
        vector<int> cnt(26,0),p(26,0);
        for(auto x:s) cnt[x-'a']++;
        int ans =0;
        for(auto x:s){
            --cnt[x-'a'];
            ++p[x-'a'];
            int cur =0;
            forn(i,26){
                cur +=  min(1, cnt[i]) + min(1, p[i]);
            } ans = max(ans,cur);
        }cout<<ans<<endl;
    }  
    return 0;
}