#include <iostream>
#include <vector>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int t,n;
    string s;
    char c;
    cin >> t;
    forn(i,t){
        cin>>n;
        vector<string> stock;
        forn(j,2*n-2){
            cin>>s;
            if(s.length()==n-1){
                stock.push_back(s);
            }
        }
        //Check palindrome
        char head,tail;
        int h = 0;
        int t = n-2;
        do{
            head = stock[0][h];
            tail = stock[1][t];
            h++;
            t--;
        }while (head==tail && h<n-1 && t>=0);
        if (h==n-1 &&head==tail) cout<<"YES"<<endl; 
        else cout<<"NO"<<endl;
    }
    return 0;
}