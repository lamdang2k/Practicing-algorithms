#include <iostream>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
    int n,a;
    cin >> n;
    int result = 0;
    forn(i, n){
        cin >> a;
        if (a % 3 == 0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}