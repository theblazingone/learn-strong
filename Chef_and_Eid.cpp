#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                        // no. of test cases

        int n;
        cin>>n;
        int A[n];
        for (int i=0; i<n; i++){
            cin>>A[i];                                  // taking input
        }

        sort(A, A+n);                                   // sorting
        int mini = INT16_MAX;
        for (int i=1; i<n; i++){
            if (mini > A[i]-A[i-1]){                    // if minimum of difference b/w 2 is greater
                mini = A[i]-A[i-1];                     // replace minimum
            }
        }

        cout<<mini<<endl;                               // out minimum
    }

    return 0;
}