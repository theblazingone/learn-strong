#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n, m, cnt=0;
        cin>>n>>m;

        int pieces = n*m; 

        if ((pieces - 1)%2==0){
            cout<<"No"<<endl;
        }
        else {
            cout<<"Yes"<<endl;
        }
    }

    return 0;
}