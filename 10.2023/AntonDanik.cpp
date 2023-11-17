#include <iostream>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int n;
    cin >> n;
    char s[n];
    int anton = 0;
    int danik = 0;
    forn(i,n){
        cin>>s[i]; 
        if(s[i]=='A'){
            ++anton;  
        }else ++danik;
    } 
    if(anton > danik) cout<<"Anton"<<endl;
    else if(anton == danik) cout<<"Friendship"<<endl;
    else cout<<"Danik"<<endl;
    return 0;
}