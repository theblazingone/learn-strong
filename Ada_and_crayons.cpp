#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        string s;
        cin>>s;

        int n = s.length(), cnt=0;

        for (int i=0; i<n-1; i++){
            if (s[i]!=s[i+1]){
                cnt++;
            }
        }

        cout<<(cnt+1)/2<<endl;
    }

    return 0;
}