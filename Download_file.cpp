#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n, k, pay=0;
        cin>>n>>k;

        while(n--){
            int T, D;
            cin>>T>>D;

            if (T < k){
                k = k - T;
            }
            else {
                pay += (T-k)*D;
                k=0;
            }
        }

        cout<<pay<<endl;
    }

    return 0;
}