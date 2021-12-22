#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){                                           // no. of test cases
        int n, cnt_r=0, cnt_g=0, cnt_b=0;
        int ans = 0;
        cin>>n;
        string S;
        cin>>S;

        for(int i=0; i<n; i++){                           // counting all RGBs
            if (S[i]=='R'){
                cnt_r++;
            }
            else if (S[i]=='G'){
                cnt_g++;
            }
            else {
                cnt_b++;
            }
        }

        if (cnt_r>cnt_g){                                 // checking count of RGB against each other 
            if (cnt_r>cnt_b){
                ans = n - cnt_r;
            }
            else {
                ans = n - cnt_b;
            }
        }
        else{
            if (cnt_g>cnt_b){
                ans = n - cnt_g;
            }
            else{
                ans = n - cnt_b;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}