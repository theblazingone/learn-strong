#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                         // no. of test cases

        int n, k;
        cin>>n>>k;
        int A[n];
        for (int i=0; i<n; i++){
            cin>>A[i];                                   // take input
        }

        string ans = "";
        for (int i=0; i<n; i++){
            if (A[i]%k == 0){                            // if element is divisible by k append string with 1 else with 0
                ans += '1';
            }
            else {
                ans += '0';
            }
        }

        cout<<ans<<endl;                                 // output
    }

    return 0;
}