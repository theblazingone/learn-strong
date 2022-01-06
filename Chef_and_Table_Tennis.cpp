#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        string s;
        cin>>s;

        puts ( s[s.length()-1] == '1' ? "WIN" : "LOSE");
    }

    return 0;
}
