#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                   // no. of test cases

        int n, k;
        cin>>n>>k;                                 // n>k always for each test case
        int A[n+k] = {0};                          // initializing array with 0s and note length of array is n+k
        for (int i=0; i<n; i++){
            cin>>A[i];                             // taking input upto n elements 
        }

        sort(A, A+n);                              // sorting upto n elements
        int median = A[(n+k)/2];                   // then output (n+k)/2th element, consider 2679000 
        cout<<median<<endl;
    }

    return 0;
}