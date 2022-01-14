#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                 // no. of test cases

        int n;
        cin>>n;

        int A[n], sum=0;
        for (int i=0; i<n; i++){
            cin>>A[i];
            sum+=A[i];                           // test the test case against this logic
        }

        if (sum%2 == 0){                         // if sum is even then output no
            cout<<"NO"<<endl;
        }
        else{                                    // else output yes
            cout<<"YES"<<endl;
        }
    }

    return 0;
}