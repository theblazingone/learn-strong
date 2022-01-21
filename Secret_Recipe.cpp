#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

    int t;
    cin>>t;

    while (t--){

        int x1, x2, x3, v1, v2;
        cin>>x1>>x2>>x3>>v1>>v2;

        ll t1 = 1LL*abs(x3-x1)*v2;
        ll t2 = 1LL*abs(x2-x3)*v1;

        if (t1 > t2){
            cout<<"Kefa"<<endl;
        }
        else if (t1 < t2) {
            cout<<"Chef"<<endl;
        }
        else {
            cout<<"Draw"<<endl;
        }
    }

    return 0;
}