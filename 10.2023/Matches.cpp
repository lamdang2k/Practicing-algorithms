#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int n, m;
    int a, b;
    int result = 0;
    cin >> n >> m;
    int pivot = 0;
    vector<pair<int,int>> d;
    forn(i, m){
        cin >> a >> b;
        d.emplace_back(b,a);
    }
    sort(d.rbegin(), d.rend());
    int i = 0;
    while (n > 0 && i < d.size()){
        int maxValue = d[i].first;
        int quantity = d[i].second;
        if(quantity <= n){
            result += quantity*maxValue;
            n -= quantity;
            ++i;
        } else{
            result += n*maxValue;
            n = 0;
        }
    }
    cout<<result<<endl;
    return 0;
}