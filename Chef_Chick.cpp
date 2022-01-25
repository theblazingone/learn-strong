#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                           // no. of test cases

        int n;
        cin>>n;
        int A[n];
        for (int i=0; i<n; i++){ 
            cin>>A[i];                     // taking in inputs
        }

        sort(A, A+n);                      // first jump will be made from 0 to the minimum if the elements of the array
        cout<<A[0]<<endl;                  // output is that min element only cuz if you make jump greater than this min
                                           // this will mean multiple of that number is exceeding which is contradictory 
    }

    return 0;
}