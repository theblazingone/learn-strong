#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){                                              // no. of test cases
        int n;
        cin>>n;
        int A[n], ans[n];                                    // another array for the answer
        for (int i=0; i<n; i++){                             
            cin>>A[i];
            ans[i]=0;
        }
        ans[n-1]=1;                                          // last answer will always be 1
        for (int j=n-2; j>=0; j--){                                 // array started from backwards - 1
            if((A[j]<0 && A[j+1]>0) || (A[j]>0 && A[j+1]<0)){       // conditions for alternative signs 
                ans[j] = ans[j+1] + 1;                       // next element + 1 if true
            }
            else{
                ans[j] = 1;                                  // else element changes to 1
            }
        }
        for (int j=0; j<n; j++){
            cout<<ans[j]<<" ";                               // output 
        }
        cout<<endl;
    }
}