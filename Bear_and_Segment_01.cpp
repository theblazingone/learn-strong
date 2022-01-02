#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int cnt=0;
        bool flag=false;
        string s;
        cin>>s;

        for (int i=0; i<s.length(); i++){
            if (s[i] == '1' && flag==false){
                cnt++;
                flag = true;
            }
            else if (s[i]=='0' && flag==true){
                flag = false;
            }
        }

        if (cnt!=1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}