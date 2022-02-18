#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n, odd_x=0, odd_y=0, eve_x=0, eve_y=0;
        cin>>n;

        int X[n], Y[n];
        for (int i=0; i<n; i++){
            cin>>X[i];
        }
        for (int i=0; i<n; i++){
            cin>>Y[i];
        }

        for (int i=0; i<n; i++){
            if (i%2==0){
                eve_x += X[i];
                eve_y += Y[i];
            }
            else {
                odd_x += X[i];
                odd_y += Y[i];
            }
        }

        int ans = min(odd_x+eve_y, eve_x+odd_y);
        cout<<ans<<endl;
    }

    return 0;
}