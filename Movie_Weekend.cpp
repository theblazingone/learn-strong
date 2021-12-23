#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){                                              // no. of test cases 
        int n, max=-1, max_r=0, ans=0; 
        cin>>n;
        int L[n], R[n];
        
        for (int i=0; i<n; i++){                             // taking inputs
            cin>>L[i];
        }

        for (int i=0; i<n; i++){
            cin>>R[i];
        }

        for (int i=0; i<n; i++){
            if (L[i]*R[i] > max){                            // if rating and movie is greater than max
                max = L[i]*R[i];
                max_r = R[i];                                // max rating for that movie
                ans = i+1;
            }
            else if (L[i]*R[i] == max){                      // if max is equal to movie*rating
                if (R[i] > max_r){                           
                    max_r = R[i];                            
                    ans = i+1;                               // output 
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}