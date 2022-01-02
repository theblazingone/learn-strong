#include <iostream>

using namespace std;

bool is_vowel(char s){
        
    return s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u';
}

int main(){

    int t;
    cin>>t;

    while(t--){

        int n, ans=0;
        cin>>n;

        string s;
        cin>>s;

        for (int i=1; i<n; i++){

            if ( is_vowel(s[i]) && !is_vowel(s[i-1]) ){
                ans++;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}