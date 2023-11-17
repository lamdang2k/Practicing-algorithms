#include <iostream>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int n;
    int a[3];
    int result = 0;
    int count = 0;
    cin >> n;
    forn(i, n){
        forn(j,3){
            cin>>a[j];
            if(a[j]==1) ++count;
        }
        if(count>1) ++result;
        count = 0;
    }
    cout<<result<<endl;
    return 0;
}