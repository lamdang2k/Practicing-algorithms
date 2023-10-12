/*1234 = 23322
4 = 322
5 = 5
6 = 53
7 = 7
8 = 7222
9 = 7332*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int n;
    cin >> n;
    string s, insert;
    char t[n];
    forn(i,n){
        cin>>t[i]; 
        switch (t[i]){
            case '0':
            case '1':
                continue;
            case '4':
                insert = "322";
                break;
            case '6':
                insert = "53";
                break;
            case '8':
                insert = "7222";
                break;
            case '9':
                insert = "7332";
                break;
            default:
                insert = t[i];
        }
        s += insert;
    }
    sort(s.begin(), s.end(), greater<>());
    cout<<s<<endl;
    return 0;
}