#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long                                    //to write less :)

int main(){                                            
    ll t;
    cin>>t;
    while(t--){                                         //taking no. of inputs
        ll n;
        cin>>n;                                         //taking input
        ll a[n];
        for (ll i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);                                   //simple sort function
        cout<<a[0]+a[1]<<endl;                          //adding least min. and second least min.
    }

    return 0;
}
