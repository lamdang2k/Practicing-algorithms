#include <iostream>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int a, b;
    cin >> a >> b;
    int result = 0;
    while(a <= b){
        a = a*3;
        b = b*2;
        ++result;
    }
    cout<<result<<endl;
    return 0;
}