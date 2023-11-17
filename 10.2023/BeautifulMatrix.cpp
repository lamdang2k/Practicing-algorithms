#include <iostream>
#include <cmath>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int a[5][5];
    int result = 0;
    forn(i, 5){
        forn(j, 5){
            cin>>a[i][j];
            if(a[i][j] == 1){
                result = abs(2 - i) + abs (2 - j);
            }
        }
    }
    cout<<result<<endl;
    return 0;
}