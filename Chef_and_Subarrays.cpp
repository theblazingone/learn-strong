#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){                                              // no. of test cases

        int n, cnt=0;
        cin>>n;
        int A[n];

        for (int i=0; i<n; i++){                             // taking input
            cin>>A[i];
        }

        for (int i=0; i<n; i++){                             // outer loop tp iterate over the array
            int sum = 0;
            int product = 1;
            for (int j=i; j<n; j++){                         // inner loop to iterate over subarrays
                sum = sum + A[j];                            // sum for the subarray
                product = product * A[j];                    // product for the subarray
                if (sum==product){                           // if sum = product 
                    cnt++;                                   // subarray satisfies the condition 
                }
            }
        }
        cout<<cnt<<endl;                                     // output 
    }

    return 0;
}