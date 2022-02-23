#include <iostream>
#include <map>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n, q, cnt=0;
        cin>>n>>q;
        char ch[n];
        int mi=0, mx=0, flag=0;
        for (int i=0; i<n; i++){
            cin>>ch[i];
        }

        for (int i=0; i<n; i++){
            if (ch[i]=='L'){
                flag++;
            }
            else {
                flag--;
            }
            mx = max(mx, flag);
            mi = min(mi, flag);
        }

        cout<<mx-mi+1<<endl;
    }

    return 0;
}