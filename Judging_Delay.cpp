#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n, ans=0;
        cin>>n;

        while(n--){

            int s, j;
            cin>>s>>j;

            if (j-s >= 5){
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}