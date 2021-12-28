#include <bits/stdc++.h>

using namespace std;

int sum_array(int dummy[], int n){                              // function for sum of array
    int init = 0;
    return accumulate(dummy, dummy+n, init);                    // using stl for sum
}

int main(){

    int t;
    cin>>t; 
    while(t--){                                                 // no. of test cases

        int n;
        cin>>n;

        int A[n], B[n];
        for (int i=0; i<n; i++){                                // take input
            cin>>A[i];
        }
        for (int i=0; i<n; i++){
            cin>>B[i];
        }

        int temp = sizeof(A) / sizeof(A[0]);

        sort(A, A + temp);                                      // using stl to sort
        sort(B, B + temp);

        int A_score, B_score;
        A_score = sum_array(A, n) - A[n-1];                     // sum - last element 
        B_score = sum_array(B, n) - B[n-1];

        if (A_score < B_score){                                 // output
            cout<<"Alice"<<endl;
        }
        else if (A_score == B_score){
            cout<<"Draw"<<endl;
        }
        else {
            cout<<"Bob"<<endl;
        }

    }

    return 0;
}