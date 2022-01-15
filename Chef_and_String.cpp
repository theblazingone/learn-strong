#include <iostream>
#include <string>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        string s;
        cin>>s;
        int n = s.length(), cnt=0;
        bool temp = true;

        for (int i=1; i<n; i++){
            if (s[i] != s[i-1] && temp){
                temp = false;
                cnt++;
            }
            else {
                temp = true;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}