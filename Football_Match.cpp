#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n, k=0, l=0;
        cin>>n;

        string q[n], s, r;
        
        for (int i=0; i<n; i++){
            cin>>q[i];
        }

        for (int i=0; i<n; i++){

            if (q[0]==q[i]){
                s = q[0];
                k++;
            }
            else {
                r = q[i];
                l++;
            }
        }

        if (l==k){
            cout<<"Draw\n";
        }
        else if (l>k){
            cout<<r<<endl;
        }
        else {
            cout<<s<<endl;
        }
    }

    return 0;
}