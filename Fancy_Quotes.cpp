#include <bits/stdc++.h>

using namespace std;

int main(){

    string s, temp;
    int t;
    cin>>t;

    getline(cin, s);
    while (t--){

        bool check = false;
        getline(cin, s);

        stringstream tokenizer(s);

        while (getline(tokenizer, temp, ' ')){
            if (temp=="not"){
                check=true;
                break;
            }
        }

        if (check){
            cout<<"Real Fancy"<<endl;
        }
        else {
            cout<<"regularly fancy"<<endl;
        }
    }

    return 0;
}