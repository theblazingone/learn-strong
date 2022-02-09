#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n, x;
        cin>>n>>x;
        vector <int> A(n);
        map <int, int> m;
        for (int i=0; i<n; i++){
            cin>>A[i];
            m[A[i]]++;
        }
        
        int ans = m.size();
        x = x - (n-ans);
        if (x>0){
            ans -= x;
        }
        cout<<ans<<endl;
    }

    return 0;
}