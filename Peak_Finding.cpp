#include <iostream>

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

        int max=0;
        for (int i=0; i<n; i++){
            if (max<A[i]){
                max = A[i];
            }
        }

        cout<<max<<endl;
    }

    return 0;
}