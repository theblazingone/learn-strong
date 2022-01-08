#include <iostream>
#include <string>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int flag=0;
        string s;
        cin>>s;

        for (int i=0; i<s.size(); i++){
            if (s[i]==s[i+2]){
                flag++;
            }
        }

        if (flag == (s.size()-2) && s[0]!=s[1]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}