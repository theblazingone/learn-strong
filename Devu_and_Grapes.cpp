#include <iostream>

using namespace std;

#define ll long long

int main(){

    ll t;
    cin>>t;

    while (t--){                                        // no. of test cases

        ll n, k, sum=0;
        cin>>n>>k;

        ll A[n];
        for (ll i=0; i<n; i++){                       
            cin>>A[i];
        }                                               // take inputs

        for (ll i=0; i<n; i++){
            if (A[i]%k!=0){                             // if element is not divisible by k
                ll r = A[i]%k;                          // check for remainder
                if (r!=0){                              // if remainder is not zero
                    if (A[i]>=k){                       // either element will be greater than equal to or less than k
                        sum += min(r, k-r);             // check for minimum on r and k-r and add it in sum
                    }
                    else {
                        sum += k-r;                    
                    }
                }
            }
        }

        cout<<sum<<endl;                                // output 
    }

    return 0;
}