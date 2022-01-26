#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                     // no. of test cases

        int n, k, flag=0;
        cin>>n>>k;
        int A[n];

        for (int i=0; i<n; i++){
            cin>>A[i];                               // taking inputs
        }

        int i=0;
        for ( i; i<n; i++){                          
            if (A[i]>=k){                            // if element is greater than or equal to k
                A[i+1] += A[i]-k;                    // next element must be added with remaining from current - k
                flag = 0;                            
            }
            else {
                flag = i+1;                          // else flag will become i+1
                break;
            }
        }

        if (flag == 0){                              // output
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO "<<flag<<endl;
        }
    }
    
    return 0;
}