#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int x, y, X, Y;
        cin>>x>>y>>X>>Y;

        cout<<(X/x)+(Y/y)<<endl;
    }

    return 0;
}