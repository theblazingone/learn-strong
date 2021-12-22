#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){                                                   // no. of test cases
        int n, m, k, temp;
        cin>>n>>m>>k;
        int A[n]={0};

        for (int i=0; i<m; i++){                                  // taking input and incrementing in the array
            cin>>temp;
            A[temp-1]++;
        }
        for (int i=0; i<k; i++){
            cin>>temp;
            A[temp-1]++;                                          // if element is repeated element become 2
        }

        int tracked_ignored=0, untracked_unignored=0;

        for (int i=0; i<n; i++){
            if (A[i]==2){
                tracked_ignored++;
            }
            else if (A[i]==0){                                    // all un-included will remain 0
                untracked_unignored++;
            }
        }

        cout<<tracked_ignored<<" "<<untracked_unignored<<endl;
    }

    return 0;
}