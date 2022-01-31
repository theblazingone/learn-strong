#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n, m, sum=0;
        cin>>n>>m;
        int A[n];
        for (int i=0; i<n; i++){
            cin>>A[i];
            sum+=A[i];
        }

        if (sum%m==0){
            cout<<"0"<<endl;
        }
        else {
            cout<<"1"<<endl;
        }
    }

    return 0;
}