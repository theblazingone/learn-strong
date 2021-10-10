#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){                            //take input for test cases
        ll x, b, t;
        cin>>x>>b>>t;                      // take input 
        cout<<(b+(100-x)*t)*10<<endl;      // formula for solubility 
    }
                            
    return 0;
}