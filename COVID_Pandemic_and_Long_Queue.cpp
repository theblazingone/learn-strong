#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n;
        cin>>n;
        int A[n];
        for (int i=0; i<n; i++){
            cin>>A[i];
        }

        int pos = -10;
        bool sol = true;
        for (int i=0; i<n; i++){
            if (A[i] == 1){
                if (i-pos >= 6){
                    pos = i;
                }
                else {
                    sol = false;
                    break;
                }
            }
        }

        if (sol){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }

    return 0;
}