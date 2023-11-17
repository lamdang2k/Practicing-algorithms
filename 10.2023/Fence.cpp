#include <iostream>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int n;
    cin >> n;
    char s[n];
    int result = 0;
    forn(i,n){
        cin>>s[i]; 
        if(s[i]=='A') ++result;     
    } 
    if(result > n/2) cout<<"Anton"<<endl;
    else cout<<"Danik"<<endl;
    return 0;
}