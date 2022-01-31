#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n;
        bool cnt=0;
        cin>>n;
        string s[n];
        for (int i=0; i<n; i++){
            cin>>s[i];
        }

        for (int i=0; i<n; i++){
            if (s[i]=="cookie"){
                if (s[i+1]!="milk" || i==n){
                    cnt++;
                }
            }
        }

        if (cnt){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}