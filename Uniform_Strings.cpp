#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                                  // no. of test cases
 
        string s;                                                 // take input
        cin>>s;

        int cnt=0;

        for (int i=0; i<s.length(); i++){
            if (s[i] == '1' && s[i+1] == '0'){                    // transition means after 1 there is 0
                cnt++;
            }
            else if (s[i] == '0' && s[i+1] == '1'){               // or after 0 there is 1
                cnt++;                                            // calculate each transition and compare
            }
        }

        if (cnt<=2){                                              // output
            cout<<"uniform"<<endl;
        }
        else{
            cout<<"non-uniform"<<endl;
        }
    }

    return 0;
}