#include <bits/stdc++.h>

using namespace std;

int main(){

    int q;
    cin>>q;

    while (q--){

        int n, m, flag=0;
        cin>>n>>m;

        if (abs(n-m) == 2){
            flag=1;
        }
        else if ((n-m) == 1 && n%2==0){
            flag=1;
        }
        else if ((m-n) == 1 && m%2==0){
            flag=1;
        }

        if (flag){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}