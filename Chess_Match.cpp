#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int x, y, z;
        cin>>x>>y>>z;

        int total = 2*(180+x) - (y+z);
        cout<<total<<endl;
    }

    return 0;
}