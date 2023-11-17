#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ull unsigned long long

long double getArea (ull base, ull height){
    return ((long double)base*(long double)height)/2.0;
}

long double lostProportion (ull base1, ull base2, ull height){
    if(base1 + height <= base2){
        return 0;
    }
    ull delta = base2 - base1;
    long double r = 1.0 - ((long double)delta)/((long double)height);
    //cout<<"r:" <<r<<endl;
    return r*r;
}

long double solve(long double baseArea, vector<ull>& v, ull height){
    long double area = baseArea;
    for (int i = 1; i < v.size() ; i++){
        long double p = lostProportion (v[i - 1], v[i], height);
        //cout<<"p:" <<p<<endl;
        area += baseArea - baseArea*p;
    }
    return area;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
    ull t;
    ull n, d, h, p;
    cin >> t;
    ull rank;
    while(t--) {
        cin >> n >> d >> h;
        vector<ull> v;
        forn(i, n){
            cin >> p;
            v.push_back(p);
        }
        long double area = getArea(d, h);
        cout << solve(area, v, h) << "\n";
    }
    return 0;
}