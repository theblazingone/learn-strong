#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                              // for no. of inputs

        int n, cnt, m=0;
        cin>>n;

        char s[n];
        for (int i=0; i<n; i++){              
            cin>>s[i];
        }                                     // take inputs

        for (int i=0; i<n; i++){                  
            cnt = 0;                          // for every new element count will be reset
            for (int j=0; j<n; j++){
                if (s[i]==s[j]){              // compare with each element
                    cnt++;
                }
            }
            if (cnt%2==0){                    // if cnt is even 
                m++;                          // count how many elements have cnt even
            }
        }

        if (m==n){                            // if equal out yes
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}