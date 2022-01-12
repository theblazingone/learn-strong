#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                            // no. of test cases

        int n, k;
        double sum=0;
        cin>>n>>k;

        int A[n];
        for (int i=0; i<n; i++){
            cin>>A[i];                                      // taking input
        }

        sort(A, A+n);                                       // sorting the array

        for (int i=k; i<n-k; i++){                          // loop from k to n-k 
            sum+=A[i];
        }

        double avg = sum / (n - 2*k);                       // n will change to n-2*k
        cout<<fixed<<setprecision(6)<<avg<<endl;            // upto 6 decimal places
    }

    return 0;
}