#include <iostream>

using namespace std;

int main(){

    int t, n;
    cin>>t>>n;

    while(t--){
        int r;
        cin>>r;

        if (r<n){
            cout<<"Bad boi"<<endl;
        }
        else{
            cout<<"Good boi"<<endl;
        }
    }

    return 0;
}