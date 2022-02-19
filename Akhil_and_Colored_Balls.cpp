#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){
        string x, y, z = "";
        cin>>x>>y;

        for (int i=0; i<x.length(); i++){
            if (x[i] == 'W' && y[i] == 'W'){
                z+='B';
            }
            else if (x[i] == 'B' && y[i] == 'B'){
                z+='W';
            }
            else {
                z+='B';
            }
        }

        cout<<z<<endl;
    }

    return 0;
}