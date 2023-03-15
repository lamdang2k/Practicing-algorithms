#include <iostream>
#include<algorithm>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int t,a,b;
    cin >> t;
    forn(i,t){
        cin>>a;
        cin>>b;
        
        if (abs(a)==abs(b)) cout<<abs(a)+abs(b)<<endl;
        else{
            int maxVal = max(abs(a),abs(b));
            cout<<maxVal + maxVal-1<<endl;
        }
        
    }  
    return 0;
}