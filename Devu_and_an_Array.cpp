#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n, q ,t;
    cin>>n>>q;
    vector <int> V(n);
    for (int i=0; i<n; i++){
        cin>>V[i];
    }
    int a = *min_element(V.begin(), V.end());
    int b = *max_element(V.begin(), V.end());

    for (int i=0; i<q; i++){
        cin>>t;

        if (t>=a && t<=b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}