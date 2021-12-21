#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        int A[n];
        for (int i=0; i<n; i++){
            cin>>A[i];
        }

        set<int> S;                                     // set do not allow duplicate values 
        for (int i=0; i<n; i++){
            S.insert(A[i]);
        }
        cout<<S.size()<<endl;
    }

    return 0;
}