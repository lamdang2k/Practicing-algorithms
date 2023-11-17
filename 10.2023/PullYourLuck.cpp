#include <iostream>
#include <cmath>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int factor (int n, int x, int p){
    int dist = (n-x)%n;
    int i = 1;
    long long sum = i;
    while(sum%n!=dist && i<min(2*n,p)){
       ++i;
       sum+=i;
    }if(sum%n==dist)return i;
    else return 0;
}
int main(){
    int t,n,x,p;
    cin >> t;
    forn(i,t){
        cin>>n>>x>>p;
        int f = factor(n,x,p);
        if(f==0) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }  
    return 0;
}