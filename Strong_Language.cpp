#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){                                  // test cases
        ll a, b, cnt=0, max=0;
        cin>>a>>b;
        string s;
        cin>>s;                                  // taking input
        for (int i=0; i<a; i++){
            if (s[i]=='*'){                      // condition check for '*'
                cnt++;                           // if found increment by 1
                if (cnt>=max){
                    max=cnt;                     // value copy in max if count is greater or equal to previous max
                }
            }
            else{
                cnt=0;
            }
        }
        if (max>=b){                             // if max is greater than equal to b 
            cout<<"YES"<<endl;                   // output
        }
        else{
            cout<<"NO"<<endl;
        }
    }
                            
    return 0;
}