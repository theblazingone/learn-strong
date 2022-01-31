#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                  // no. of test cases

        int n, score=0;
        cin>>n;
        string s1, s2;
        cin>>s1>>s2;                              // take inputs

        for (int i=0; i<n; i++){
            if (s2[i]=='N'){                      // if N then skip
                continue;
            }
            else if (s1[i]==s2[i]){               // if equal count score
                score++;
            }
            else {                                // else skip 
                i++; 
            }
        }

        cout<<score<<endl;
    }

    return 0;
}