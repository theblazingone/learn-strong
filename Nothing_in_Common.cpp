#include <iostream>
#include <set>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                         // no. of test cases

        int n, m, cnt=0;
        cin>>n>>m;
        set <int> A, B, C;
        for (int i=0; i<n; i++){
            int x;
            cin>>x;
            A.insert(x);
            C.insert(x);                                 // set only has unique elements
        }
        for (int i=0; i<m; i++){
            int x;
            cin>>x;
            B.insert(x);
            C.insert(x);                                 // storing both sets ie. union
        }

        int ans = (int) A.size()+B.size()-C.size();      // output 
        cout<<ans<<endl;
    }
}