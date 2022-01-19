#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int x, m, d;
        cin>>x>>m>>d;

        int max_lazy = x*m;
        int min_lazy = x+d;

        if (max_lazy > min_lazy){
            cout<<min_lazy<<endl;
        }
        else {
            cout<<max_lazy<<endl;
        }
    }


    return 0;
}