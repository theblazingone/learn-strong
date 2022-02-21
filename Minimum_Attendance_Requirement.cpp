#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n, present=0;
        cin>>n;
        string s;
        cin>>s;

        for (int i=0; i<n; i++){
            if (s[i]=='1'){
                present++;
            }
        }

        if (120-n+present >= 90){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}