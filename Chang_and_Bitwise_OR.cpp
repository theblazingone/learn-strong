#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n;
        cin>>n;

        int A[n], ans = 0;
        for (int i=0; i<n; i++){
            cin>>A[i];
        }

        for (int i=0; i<n; i++){
            ans = ans | A[i];
        }

        cout<<ans<<endl;
    }

    return 0;
}