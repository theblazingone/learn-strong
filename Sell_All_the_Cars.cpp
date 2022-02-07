#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long

int main(){

    ll t;
    cin>>t;

    while (t--){

        ll n, profit=0;
        cin>>n;
        ll A[n];
        for (int i=0; i<n; i++){
            cin>>A[i];
        }

        sort(A, A+n, greater<ll>());

        for (ll i=0; i<n; i++){
            profit += max(A[i]-i, (ll)0);
            profit %= 1'000'000'007;
        }

        cout<<profit<<endl;
    }

    return 0;
}