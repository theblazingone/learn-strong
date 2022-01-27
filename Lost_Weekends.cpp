#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                           // no. of test cases

        int A[5], p, sum=0;
        for (int i=0; i<5; i++){
            cin>>A[i];
        }
        cin>>p;                            // take inputs

        for (int i=0; i<5; i++){
            A[i] = A[i]*p;                 // since 1 hr = p hr therefore total time spend on home will be A[i]*p
            sum+=A[i];                     // total hours for work
        }

        if (sum>24*5){                     // if sum is strictly greater than 5 days then print yes else no
            cout<<"Yes\n";
        }
        else {
            cout<<"No\n";
        }
    }

    return 0;
}