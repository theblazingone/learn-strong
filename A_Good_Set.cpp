#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                          // no. of test cases

        int n;
        cin>>n;                                           // take input
        int A[500];

        for (int i=1, j=0; i<500, j<n; i+=2, j++){
            A[j] = i;                                     // simple output a array of all odd numbers, odd numbers have a even sum
                                                          // which won't be present in the array
        }

        for (int i=0; i<n; i++){                          // output
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}