#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){
        int a, b, c, ar, br, cr, T;
        cin>>ar>>br>>cr>>T>>a>>b>>c;

        if (a>=ar && b>=br && c>=cr && (a+b+c)>=T){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}