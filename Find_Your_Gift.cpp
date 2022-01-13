#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                                            // no. of test cases
        
        int n, x=0, y=0;
        cin>>n;
        char s[n];
        for (int i=0; i<n; i++){
            cin>>s[i];                                                      // take input
        }

        for (int i=0; i<n; i++){
            if (s[i]=='L' && (s[i-1]!='L' && s[i-1]!='R')){                 // check for occurances of L and R on previous index
                x--;
            }
            else if (s[i]=='R' && (s[i-1]!='L' && s[i-1]!='R')){            // same do for all cases 
                x++;
            }
            else if (s[i]=='U' && (s[i-1]!='U' && s[i-1]!='D')){            // for U and D, use U and D instead of L and R
                y++;
            }
            else if (s[i]=='D' && (s[i-1]!='U' && s[i-1]!='D')){
                y--;
            }
        }

        cout<<x<<" "<<y<<endl;                                              // output 
    }

    return 0;
}