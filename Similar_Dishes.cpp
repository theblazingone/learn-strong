#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        set <string> s;
        string temp;

        for (int i=0; i<8; i++){
            cin>>temp;
            s.insert(temp);
        }   
        
        if (s.size() <= 6){
            cout<<"similar"<<endl;
        }
        else {
            cout<<"dissimilar"<<endl;
        }
    }

    return 0;
}