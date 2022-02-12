#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n, sum=0, flag=0;
        cin>>n;
        int A[n];
        for (int i=0; i<n; i++){
            cin>>A[i];
            sum+=A[i];
        }

        if (sum<0){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}