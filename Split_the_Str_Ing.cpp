#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){
        
        int n, found=0;
        cin>>n;
        char s[n];
        cin>>s;
        char a = s[n-1];

        for (int i=0; i<n-1; i++){
            if (s[i] == a){
                found=1;
                break;
            }
        }

        if (found){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}