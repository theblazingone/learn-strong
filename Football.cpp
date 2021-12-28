#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){                                        // no. of test cases 

        int n;
        cin>>n;

        int A[n], B[n];
        int score[n];

        for (int i=0; i<n; i++){                       // input + multiply directly with respective points
            cin>>A[i];
            A[i] = A[i]*20;
        }
        for (int i=0; i<n; i++){
            cin>>B[i];
            B[i] = B[i]*10;
        }

        for (int i=0; i<n; i++){
            score[i] = A[i] - B[i];                    // store the difference in score array
            if (score[i] < 0){                         // if negative then replace with 0
                score[i] = 0;
            }
        }

        int temp = sizeof(score) / sizeof(score[0]);
        sort (score, score + temp);                    // sorting the array
        cout<<score[n-1]<<endl;                        // output last element 
    }

    return 0;
}