#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin>>s;
    int length_s = s.length();
    int t;
    cin>>t;
    while(t--){
        string c;
        int count=0;
        cin>>c;
        int length_c = c.length();
        for (int i=0; i<length_c; i++){
            for (int j=0; j<length_s; j++){
                if (c[i] == s[j]){
                    count++;
                }
            }
        }
        if (count==length_s){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}