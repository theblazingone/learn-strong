#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n, ans=0;
        cin>>n;

        for (int i=0; i<n+n; i++){
            int x;
            cin>>x;
        }

        for (int i=1; i<=n; i++){
            ans = ans^i;                          // xor is commutative i.e. 1^2^3 == 2^1^3 == 3^2^1
        }

        cout<<ans<<endl;
    }

    return 0;
}