#include <iostream>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int n,m;
    cin >> n>>m;
    string s[n];
    int count[n];
    int min = 0;
    int max = 0;
    forn(i,n){
        forn(j,m){
            cin>>s[i][j];
            if(s[i][j]=='1') ++count[i];
        }  
    }forn (i,n){
        int nbMaxSing = m/2;
        int nbMaxDoub = m/4;
        int current = (int)(count[i]+1)/2;
        if (current>nbMaxDoub){
            min += nbMaxDoub + count[i]-2*nbMaxDoub; 
        }if(count[i]>nbMaxSing){
            max += nbMaxSing + 
            else{
            min += current;
        }
        
    }
    }  
    return 0;
}