#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        string s;
        cin>>s;
        int n = s.length(), flag=1;

        for (int i=1; i<n; i++){
            if (s[i] < s[i-1]){                      
                flag=0;
                break;
            }
        }

        if (flag){
            cout<<"yes"<<endl;
        }
        else {
            cout<<"no"<<endl;
        }
    }

    return 0;
}