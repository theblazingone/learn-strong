#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int cnt[4]={0}, ans=0;
    string s;
    cin>>s;

    for (int i=0; i<s.length(); i++){
        if (s[i]=='C'){
            cnt[0]++;
        }
        else if (s[i]=='H' && cnt[0]>cnt[1]){
            cnt[1]++;
        }
        else if (s[i]=='E' && cnt[1]>cnt[2]){
            cnt[2]++;
        }
        else if (s[i]=='F' && cnt[2]>cnt[3]){
            cnt[3]++;
        }

        ans = min(cnt[0], min(cnt[1], min(cnt[2], cnt[3])));
    }

    cout<<ans<<endl;

    return 0;
}