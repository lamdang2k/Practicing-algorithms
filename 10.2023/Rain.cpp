#include <iostream>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int n;
    cin >> n;
    int a[n];
    int currentHeight;
    int height = 0;
    int result = 0;
    forn(i, n){
        cin>>a[i];    
    } 
    forn(i, n){
        currentHeight = a[i];
        int currentResult = 0;
        int limit = currentHeight;
        int j = i - 1;
        while(j >= 0 && a[j] <= limit){
            limit = a[j];
            currentResult++;
            --j;
        }
        limit = currentHeight;
        j = i + 1;
        while(j < n && a[j] <= limit){
            limit = a[j];
            currentResult++;
            ++j;
        }
        currentResult++;
        result = (currentResult < result) ? result : currentResult; 
    }
    cout<<result<<endl; 
    return 0;
}