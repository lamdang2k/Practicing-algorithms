#include <iostream>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int t,n,k,d,w;
    cin >> t;
    forn(i,t){
        int nbPacks=0;
        cin>>n>>k>>d>>w;
        int p[n];
        forn(j,n){
           cin>>p[j];
        }
        int currentDose = 0;
        int lastMoment = 0;
        forn(j,n){
            if(currentDose==k || lastMoment < p[j] ||nbPacks ==0 ){
                //opening a new pack
                currentDose = 1;
                nbPacks++;
                lastMoment = p[j]+w+d;
            } else{
                currentDose++;
            }
        } cout<<nbPacks<<endl;
    }  
    return 0;
}