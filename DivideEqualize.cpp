#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

// A function to print all prime factors of a given number n  
void primeFactors(int n, unordered_map<int, int>& factors)  
{  
    if(factors.find(2) == factors.end() && n%2 == 0) factors[2] = 0;
    // Print the number of 2s that divide n  
    while (n%2 == 0)  
    {  
        factors[2]++; 
        n = n/2;  
    }  
     
    // n must be odd at this point.  So we can skip   
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i+2)  
    {  
        if (factors.find(i) == factors.end() && n%i == 0) {
            factors[i] = 0;
        }
        // While i divides n, print i and divide n 
        while (n%i == 0)  
        {  
            factors[i]++;
            n = n/i;  
        }  
    }  
     
    // This condition is to handle the case when n   
    // is a prime number greater than 2  
    if (n > 2){
        factors[n] = (factors.find(n) == factors.end()) ? 1 : (factors[n] + 1);
    }    
}  

int main(){
    int t,n;
    cin >> t;
    string results[t];
    forn(i, t){
        cin >> n;
        int a[n];
        unordered_map<int, int> factors;
        forn(j, n){
            cin >> a[j];
            primeFactors(a[j], factors);
        }
        results[i] = "Yes";
        for (const auto& iterator: factors){
            if(iterator.second % n != 0){
                results[i]="No";
                break;
            }
        }
    }
    forn(i, t){
        cout<<results[i]<<endl;
    }
    return 0;
}