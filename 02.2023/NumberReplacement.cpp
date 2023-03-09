#include <iostream>
#include<vector>
#include<map>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int n,t;
    string s;
    cin >> t;
    forn(i, t) {
        bool valid = true;
        map<int,char> dict;
        pair<map<int,char>::iterator,bool> ret;
        cin >> n;
        int a[n];
        forn(j,n){
            cin>>a[j];
        }
        cin>>s;
        forn(j,n){
            ret = dict.insert(pair<int,char>(a[j],s[j]));
            if(ret.second==false&&ret.first->second!=s[j]){
                valid = false;
                break;
            }
        }
        if(valid) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}