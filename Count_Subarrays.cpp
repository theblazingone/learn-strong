#include <iostream>

using namespace std;

#define ll long long

int main(){

    ll t;
    cin>>t;

    while (t--){                                        // no. of test cases 
        
        ll n, res_sum = 0;
        cin>>n;
        ll A[n], res[n];
        for (int i=0; i<n; i++){
            cin>>A[i];
            res[i] = 1;                                 // inputs and a array with all elements 1
        }

        for (int i=0; i<n; i++){
            if (A[i] <= A[i+1]){                        // if previous element is lesser or equal than next element
                res[i+1] += res[i];                     // increase next element's index in res array i.e. now 2
            }
            res_sum += res[i];
        }

        cout<<res_sum<<endl;                            // output
    }
    

    return 0;
}