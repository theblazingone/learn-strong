#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

    ll t;
    cin>>t;

    while (t--){

        ll n, q, curr_floor=0, ans=0;
        cin>>n>>q;

        while (q--){

            int s, d;
            cin>>s>>d;

            ans += abs(curr_floor-s);
            ans += abs(s-d);
            curr_floor = d;
        }
        
        cout<<ans<<endl;
    }

    return 0;
}