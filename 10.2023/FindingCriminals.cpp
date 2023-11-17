#include <iostream>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int n, a;
    cin >> n >> a;
    int t[n];
    forn(i,n){
        cin>>t[i]; 
    }
    --a;
    int left = a-1;
    int right = a+1;
    int result = 0;
    if(t[a] == 1) ++result;
    while(left >= 0 || right < n){
        if (left >= 0 && right < n){
            if(t[left] == 1 && t[right] == 1) result = result + 2;
        } if (left < 0 && t[right] == 1) ++result;
        if (right >= n && t[left] == 1) ++result;
        --left;
        ++right;
    } 
    cout<<result<<endl;
    return 0;
}