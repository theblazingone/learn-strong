#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n;
        cin>>n;

        int A[n];
        for (int i=0; i<n; i++){
            cin>>A[i];
        }

        for (int i=0; i<n; i++){
            if (A[i] == *min_element(A, A+n) || A[i] == *max_element(A, A+n)){
                cout<<A[i]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}