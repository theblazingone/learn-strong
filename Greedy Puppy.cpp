#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){                                      //taking no. of inputs
        int n, k, ans=0;
        cin>>n>>k;                                    //taking input
        for (int i=2; i<=k; i++){
            if (ans<n%i){                             //dry run this; simple mathematics :)
                ans=n%i;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
