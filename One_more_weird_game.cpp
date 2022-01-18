#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
     
    while (t--){

        int n, m, score=0;
        cin>>n>>m;

        cout<<(m*(n-1) + (m-1)*n)<<endl;
    }

    return 0;
}