#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int a, b, c, d;
        cin>>a>>b>>c>>d;

        if (d>=a+b+c){
            cout<<"1"<<endl;
        }
        else if (d>=a+b || d>=b+c){
            cout<<"2"<<endl;
        }
        else{
            cout<<"3"<<endl;
        }
    }

    return 0;
}