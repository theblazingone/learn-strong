#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                  // no. of test cases

        int n, k;
        cin>>n>>k;
        int A[n];

        for (int i=0; i<n; i++){                  // take input
            cin>>A[i];
        }

        int cnt_1=0, cnt_2=0;
        for (int i=0; i<n; i++){                  // count even and odd elements
            if (A[i]%2 == 0){
                cnt_1++;
            }
            else {
                cnt_2++;
            }
        }

        if (cnt_1 >= k){                          // if gift to be found less than equal to even 
            if (k==0 && cnt_2==0){                // SPECIAL CONDITION: Could ruin your test cases
                cout<<"NO"<<endl;                 // if k is 0 and all are even in the array we cannot choose any gift
            }
            else{                                 // output
                cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}