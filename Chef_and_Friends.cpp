#include <iostream>

using namespace std;

int main(){

    int t, sum=0;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        int cnt=0;

        string a = "ch", b = "ef", c = "he";

        if (s.find(a) != -1){
            cnt++;
        }
        else if (s.find(b) != -1){
            cnt++;
        }
        else if (s.find(c) != -1){
            cnt++;
        }

        sum+=cnt;
    }

    cout<<sum<<endl;

    return 0;
}