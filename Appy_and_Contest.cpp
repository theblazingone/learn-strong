#include <iostream>

using namespace std;

#define ll long long

ll gcd(ll a, ll b){
    
    if (b==0){
        return a;
    }
    
    return gcd(b, a%b);
}

int main(){

    ll t;
    cin>>t;

    while (t--){

        ll n, a, b, k;
        cin>>n>>a>>b>>k;
        ll score=0, lcm=0;

        if (a>b){
            lcm = (a*b)/gcd(a, b);
        }
        else{
            lcm = (a*b)/gcd(b, a);
        }
        
        score = n/a + n/b - 2*(n/lcm);

        if (score >= k){
            cout<<"Win"<<endl;
        }
        else {
            cout<<"Lose"<<endl;
        }
    }

    return 0;
}