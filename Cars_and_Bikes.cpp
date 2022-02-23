#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){
        int n;
        cin>>n;

        int temp = n%4;
        if ( (n - (n-temp)) >= 2 ){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }

    return 0;
}