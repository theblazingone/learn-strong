#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){                                           

    ll t;
    cin>>t;

    while (t--){                                     // no. of test cases

        ll n, k;
        cin>>n>>k;

        vector <ll> A;
        for (ll i=0; i<n; i++){                      // take inputs
            ll temp;
            cin>>temp;
            A.push_back(temp);
        }
 
        ll sum=0;
        sum = accumulate(A.begin(), A.end(), 0);     // take sum

        if (sum%2==0 && k==1){                       // if sum is even and k is only 1 put odd
            cout<<"odd"<<endl;
        }
        else {
            cout<<"even"<<endl;                      // test this case for various cases
        }        
    }

    return 0;
}