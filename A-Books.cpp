#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n;
        cin>>n;
        int A[n], B[n];

        for (int i=0; i<n; i++){
            cin>>A[i];
        }

        for (int i=0; i<n; i++){
            int cnt=0;
            for (int j=1; j<n; j++){
                if (A[i] < A[j]){
                    cnt++;
                }
            }
            cout<<cnt<<" ";
        }

        cout<<endl;
    }

    return 0;
}