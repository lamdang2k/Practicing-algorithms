#include <iostream>
#include <climits>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int t,n;
    cin >> t;
    forn(i,t){
        cin>>n;
        int arr[n];
        forn(j,n){
            cin>>arr[j];
        }
        int nbOps = 0;
        //Check divisibility
        if(n>1){
            forn(j,n-1){
                int current = arr[j];
                int next = arr[j+1];
                if(next%current!=0){
                } else{
                    int before = INT_MAX;
                    do{
                        current++;
                        nbOps++;
                        if(j-1>=0) before = arr[j-1];
                        if(current==next||next%current==0) {
                            next++;
                            nbOps++;
                        }
                    }while(nbOps<=2*n&&(next%current==0||current%before==0));
                }arr[j]=current;
                arr[j+1]=next;
            }
            forn(j,n){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }else cout<<arr[0]<<endl; 
    }  
    return 0;
}